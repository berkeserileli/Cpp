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
	friend ostream& operator <<(ostream&,const Person&); //ostream t�r�nde bir nesne al�yor(cout), person t�r�nde bir nesne al�yor 2. k�s�mda
	friend istream& operator >>(istream&, Person&);

	void operator++() {
		personAge += 1;
	};
	void operator++(int) {        // operat�r i�ine deger al�rsa person1++ olarak yaz�labilir. 
		personAge += 1;
	};
	bool operator==(Person& oth);      // == OPERAT�R� OVERLOAD ED�LD�. operator==() �eklinde g�steremezdik ��nk� == iki nesneyi kar��la�t�r�yor i�i bo� olamaz.
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

//"Friend" fonksiyonlar s�n�f�n bir �yesi DE��LD�R! O y�zden Person::PersonFriend �eklinde bu fonksiyona eri�ilemez!Ayr�ca 
//friend fonksiyonlar class�n de�erlerine do�rudan ula�amaz!  friend void PersonFriend(){cout<<personName yapamam!
//o y�zden class�n �zelliklerine class�n NESNES� �ZER�NDEN ER��EB�L�R! A�ag�daki gibi
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


