#include "InheritanceHW1.h"



//employeesArray deki elemanlar�n departman� ile manager departman� ayn� olunca, cal�san�n employeeden mi yoksa managerden mi t�redi�ini g�ster.
int main() {

	Employee employee1 = { "BerkEser","ILELI","Software","Engineering",4500,5 };
	Employee employee2 = { "Yavuz","Bulgur","Software","Engineering",8500,5 };
	Employee employee3 = { "Asena","Pek","IT","Programmer",4500,5 };
	Employee employee4 = { "Fatih","Geri","Accounting","Firefighter",4500,5 };
	Manager manager1 = { "Buse","Dagli","Software","Manager",8500,10 };
	Manager manager2 = { "Omer","Selvi","IT","Manager",14000,24 };
	
	Employee employeeList[] = { employee1,employee2,employee3,employee4 };
	manager2.extractEmployees(employeeList);
	//manager1.print();
	employee3.print();
	manager2.print();
	
};