// projem1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

//#include <iostream>

//int main()
//{
   // std::cout << "Hello World!\n";
//}


#include "cmake1.h"
#include<iostream>
using namespace std;

int main()
{
    Student student1, student2, student3;
    student1.setName("Berk Eser");
    student1.setSurname("ILELI");
    student1.setID("201201063");
    student1.displayInformation();
    student2.displayInformation();
    student3.setName("Fatih");
    student3.setSurname("Yildirim");
    student3.displayInformation();
    Student student4(student1);
    student4.displayInformation();
}

