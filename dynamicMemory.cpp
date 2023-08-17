#include "dynamicMemory.h"






int main() {

	
	//Example a, * bptr; //burda *bptr için constructor calismayacak cünkü bir nesne oluþturma iþlemi yapmýyoruz.
	//bptr = &a;
	//a.x = 5;
	//bptr->y = 6; 
	//a.print();
	//bptr->x = 16;
	//bptr->print();

	//(*bptr).x = 7;
	//(*bptr).y = 9;
	//(*bptr).print();
	//-------------------------------------------------------------------------------------------
	//Example nesne1(5, 6);
	//Example* nesne2;                  //&nesne1; þeklinde de yapabilirdik.
	//nesne2 = &nesne1;   
	//nesne2->print();


	//int* ptr = new int;   //int tründe bir DEÐÝÞKEN oluþturuluyor.
	//Example* ptrExample = new Example;  //Example sýnýfýndan bir NESNE oluþturuluyor.

	//ptrExample->x = 12;
	//ptrExample->y = 15;

	//ptrExample->print();

	//delete ptrExample;
	
	//int* ptrArray = new int[5]; //5 tane int degeri olusturuluyor.
	//Example* ptrExArray = new Example[5]; //5 tane Example nesnesi olusturuluyor.

	//for (int i = 0; i < 5; i++) {
		//ptrExArray[i].x = i;
		//ptrExArray[i].y = i * i;
		//ptrExArray[i].print();

		//ptrArray[i] = i;
		//std::cout << ptrArray[i] << endl;
	//}
	//delete[]ptrArray;
	//delete[]ptrExArray;
//-----------------------------------------------------------------------------------------
	//Example** ptr2DExArray = new Example * [5];
	//for (int i = 0; i < 5; i++) {
	//ptr2DExArray[i] = new Example[5];
	//}
	//for (int i = 0; i < 5; i++) {
		//for (int j = 0; j < 5; j++) {
			//ptr2DExArray[i][j].x = i;
			//ptr2DExArray[i][j].y = j;
			//ptr2DExArray[i][j].print();
		//}
	//}
	//for (int i = 0; i < 5; i++) {
		//delete[]ptr2DExArray[i];
	//}
	//delete[]ptr2DExArray;
	//-------------------------------------------------------------------------------------
	Example exObj(5, 5), exObj2(4, 4);
	Example exObj3 = exObj.addExample(exObj2);
	exObj3.print();

}


