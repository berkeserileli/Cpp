#include "Upcasting.h"


int main() {

	//EMPLOYEE       MANAGER
	  //name          name
	  //surname       surname
      //salary        salary
	  //display       display                  (bu komuta kadar deger alabilir emp pointerý)
	                  //department



	
	Employee* emp1;
	Manager mng("Eser", "ILELI", 4000, "ELE");
	emp1 = &mng;

	emp1->displayInformation();
	cout << "------------------------------" << endl;
	mng.displayInformation();

	cout << "------------------------" << endl;
	Employee emp("Mustafa", "Dursun", 2000);
	Employee *emp2 = &emp;
	emp2->displayInformation();

	cout << "----------------------------"<<endl;
	Manager* mng3 = (Manager*) emp2;
    mng3->displayInformation();
	
	

}

