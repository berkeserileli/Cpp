#include <iostream>
using namespace std;


class Person {
private:
	string personName,personSurname;
	int personAge;
public:
	Person();
	Person(string name, string surname, int age);
	void displayPerson();
	friend void PersonFriend(Person& personObj);
	friend bool operator !=(Person& firstObject, Person& secondObject);
	friend ostream& operator <<(ostream&,const Person&); //ostream türünde bir nesne alýyor(cout), person türünde bir nesne alýyor 2. kýsýmda
	friend istream& operator >>(istream&, Person&);

	void operator++() {
		personAge += 1;
	};
	void operator++(int) {        // operatör içine deger alýrsa person1++ olarak yazýlabilir. 
		personAge += 1;
	};
	bool operator==(Person& oth);      // == OPERATÖRÜ OVERLOAD EDÝLDÝ. operator==() þeklinde gösteremezdik çünkü == iki nesneyi karþýlaþtýrýyor içi boþ olamaz.
};
Person::Person() {
	personName = "";
	personSurname = "";
	personAge = 0;
}

Person::Person(string name, string surname, int age) {
	personName = name;
	personSurname = surname;
	personAge = age;
}

void Person::displayPerson() {
	cout << "Name: " << personName << endl;
	cout << "Surname: " << personSurname << endl;
	cout << "Age: " << personAge << endl;
};

bool Person::operator==(Person& oth) {
	return(personName == oth.personName && personSurname == oth.personSurname && personAge == oth.personAge);
}

//"Friend" fonksiyonlar sýnýfýn bir üyesi DEÐÝLDÝR! O yüzden Person::PersonFriend þeklinde bu fonksiyona eriþilemez!Ayrýca 
//friend fonksiyonlar classýn deðerlerine doðrudan ulaþamaz!  friend void PersonFriend(){cout<<personName yapamam!
//o yüzden classýn özelliklerine classýn NESNESÝ ÜZERÝNDEN ERÝÞEBÝLÝR! Aþagýdaki gibi
void PersonFriend(Person& personObject) {
	cout<<"Name: " << personObject.personName << endl;
	cout << "Surname: " << personObject.personSurname << endl;
	cout << "Age: " << personObject.personAge << endl;
}


bool operator !=(Person& firstObject, Person& secondObject) {
	return !(firstObject.personName == secondObject.personName && firstObject.personSurname == secondObject.personSurname && firstObject.personAge == secondObject.personAge);
}

ostream& operator<<(ostream& osObject, const Person& personObject) {
	osObject << "Name: " << personObject.personName << endl << "Surname: " << personObject.personSurname << endl << "Age: " << personObject.personAge << endl;
	return osObject;
}
istream& operator>>(istream& isObject, Person& personObject) {
	isObject >> personObject.personName >> personObject.personSurname >> personObject.personAge;
	return isObject;
}


