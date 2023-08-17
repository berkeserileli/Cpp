#include"PassbyvalueAndReferances.h"

int main() {

	Employee emp4("Berk", "ILELI", 4000);
	Manager mng4("Kursat", "Yildirim", 15000, "ELE");
	cout<<"Referance parameters: " << endl;
	
	//print(emp4);
	//print(mng4);
	cout << "-------------------------------------------------" << endl;
	Employee* emp5 = new Employee("Cuneyt", "Kararsiz", 3000);
	Manager* mng5 = new Manager("Mehmet", "Yurdakul", 8000, "PC");
	print2(emp5);
	print2(mng5);
	cout << "--------------------------------------------------" << endl;
	//print3(emp4);
	//print3(mng4);
}