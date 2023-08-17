#pragma once
// cmake1.h: Standart sistem ekleme dosyalarý için ekleme dosyasý,
// veya projeye özgü ekleme dosyalarý.

#pragma once

#include <iostream>
using namespace std;
class Student {
private:
    string studentName, studentSurname, studentID; // üye deðiþkenlerdir. Student sýnýfýndan bir obje üretildiðinde onun bir ismi, soyismi ve numarasý olacak.
public:
    void displayInformation();
    ~Student();
    Student();
    Student(string, string);
    Student(string, string, string);
    Student(const Student &a);
    void setInformation(string name, string surname, string ID) { studentName = name; studentSurname = surname; studentID = ID; }
    void setName(string name) { studentName = name; }
    void setSurname(string surname) { studentSurname = surname; }
    void setID(string ID) { studentID = ID; }
    string getName() { return studentName; }
    string getSurname() { return studentSurname; }
    string getID() { return studentID; }
};
Student::Student() {
    cout << "Default constructor calisti" << endl;
    studentName = "bos";
    studentSurname = "bos";
    studentID = "bos";
}
Student::Student(string name, string surname) {
    cout << "2 parametreli constructor calisti";
    studentName = name;
    studentSurname = surname;
    //studentID = "BOS";    
}
Student::Student(string name, string surname, string ID) {
    cout << "3 parametreli constructor calisti";
    studentName = name;
    studentSurname = surname;
    studentID = ID;
}

Student::Student(const Student &a) {
    cout << "Copy constructor calisti" << endl;
    studentName = a.studentName;
    studentSurname = a.studentSurname;
    studentID = a.studentID;
}
Student::~Student() {
    cout << "Destructor calisti" << endl;
}

void Student::displayInformation() {
    cout << "Name:" << studentName << endl << "Surname: " << studentSurname << endl << "ID: " << studentID << endl;
};
// TODO: Burada programýnýzýn gerektirdiði ek üst bilgilere baþvurun.

