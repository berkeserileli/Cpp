#include "VirtualExample1.h"





void foo();

void foo() {
	
} 
int main() {
	
	Dog* dog1 = new Dog();
	Cat* cat1 = new Cat();
	Frog* frog1 = new Frog();


	Animal* animals[] = {cat1,dog1,frog1};
	//Animal a; yapamayýz artýk sýnýfýmýz soyut!
	for (int i = 0; i < 3 ; i++) {
		animals[i]->talk();
	}
	
	std::cout << "Hello" << std::endl;
	Animal* dog2 = new Dog();
	//Animal* dog2 = new Animal();
	animals[0]->talk();
}