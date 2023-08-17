#include "InheritanceExample1.h"
int main() {
	srand(time(NULL));
	Student studentArray[] = { {"BerkEser","ILELI",201201063},{"Gamze","Yesim",201201062},{"Polat","Alemdar",201201061} };
	//Student s[3];
	//s[0] = new Student("BerkEser", "ILELI", 201201063);
	//	s[1] = new Student("Gamze", "Yesim", 201201062);
	//	s[2] = new Student("Polat", "Alemdar", 201201061);
	Teacher teacher1("Kemal", "Ermis", "Elektrik-Elektronik Muh");

	int total = 0;
	for (int i = 0; i < 3; i++) {
		studentArray[i].setStudentGrade(rand() % 100 + 1);
		total += studentArray[i].getStudentGrade();

	}

	double average = total / 3.0;
	std:cout << "AVERAGE: " << average << std::endl;
	
	for (int i = 0; i < 3; i++)
	{
		studentArray[i].print();
		if (studentArray[i].getStudentGrade() >= average) {
			cout << "PASS" << endl;
		}
		else {
			cout << "FAIL" << endl;
		}
	}





	//teacher1.passFailStatus(studentArray);
}