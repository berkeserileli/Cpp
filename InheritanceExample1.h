#include <iostream>
using namespace std;

class Person {
protected:
	string personName, personSurname;
public:
	Person(string name, string surname) {
		personName = name;
		personSurname = surname;
		cout << "Person constructor worked" << endl;
	}
	string getPersonName(){ return personName; };
	string getPersonSurname(){ return personSurname; };
	void setPersonName(string name);
	void setPersonSurname(string surname);
	void print() {
		cout << "Name: " << personName << endl;
		cout << "Surname: " << personSurname << endl;
	};
};

class Student : public Person {
protected:
	int studentID, studentGrade;
public:

	Student(string name, string surname, int ID):Person(name,surname) {
		studentID = ID;
		cout << "Student constructor worked" << endl;
	
	};
	int getStudentID(int) { return studentID;};
	void setStudentID(int ID) { studentID = ID; }; 
	void setStudentGrade(int grade) {
		studentGrade = grade; };
	int getStudentGrade() {return studentGrade; };
	void print() {
		Person::print();
		cout << "ID: " << studentID << endl;
		cout << "Grade: " << studentGrade << endl;
	};
	
};


class Teacher :public Person {
private:
	string department;
public:
	Teacher(string name, string surname, string dep) : Person(name, surname) {
		department = dep;
		cout << "Teacher constructor worked" << endl;
	}
	string getDepartment() { return department; };
	void setDepartment(string dep) { department = dep;};
	void print() {
		Person::print();
		cout << "Department: " << department << endl;
	};
	void passFailStatus(Student *studentArray);
	void printStudentInformation(Student* studentArray);
};

