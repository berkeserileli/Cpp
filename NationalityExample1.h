#include <iostream>
using namespace std;


class Person {
private:
	string personName;
public:
	Person(string name) { personName = name; };
	string getName(){ return personName; };
	virtual string getNation() { return " "; };   //amacýmýz person sýnýfýndan miras alan sýnýflarda overwrite edebilmek
	virtual void sayHi(Person& person) {
		cout << personName << "says Hi" << person.personName << endl;
	}
};

class DeutschPerson :public Person {
public:
	DeutschPerson(string name) :Person(name) {};
	string getNation() { return "Deutsch"; };
	void sayHi(Person& person) {
		if (getNation() == person.getNation()) {
			cout << getName() << " says Hallo " << person.getName() << endl;
		}
		else {
			Person::sayHi(person);
		}
	}
};

class TurkishPerson :public Person {
public:
	TurkishPerson(string name) :Person(name) {};
	string getNation() { return "Turkish"; };
	void sayHi(Person& person) {
		if (getNation() == person.getNation()) {
			cout << getName() << " says Merhaba " << person.getName() << endl;
		}
		else {
			Person::sayHi(person);
		}
	}
};