#include "NationalityExample1.h"


//FARKLI M�LLETTEK� VATANDA�LAR B�RB�RLER�NE �NG�L�ZCE SELAM VER�CEKLER , AYNI M�LLETTEK� �NSANLAR B�RB�RLER�NE
//KEND� D�LLLER�NDE SELAM VERECEK.
int main() {

	TurkishPerson* person1 = new TurkishPerson("Veli");
	TurkishPerson* person2 = new TurkishPerson("Ahmet");
	DeutschPerson* person3 = new DeutschPerson("Carl");
	DeutschPerson* person4 = new DeutschPerson("Alfred");
	

	Person* personArray[] = {person1,person2,person3,person4};

	personArray[0]->sayHi(*personArray[1]);
	personArray[1]->sayHi(*personArray[2]);
	personArray[2]->sayHi(*personArray[3]);
	personArray[0]->sayHi(*personArray[3]);




	//for (int i = 0; i < 4; i++) {
		//for (int j = 0; j <4; i++) {
			//if (i != j) {
				//personArray[i]->sayHi(*personArray[j]);
			//}
		//}
		//cout << "\n" << endl;
	//}
};

