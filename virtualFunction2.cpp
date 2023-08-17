#include <iostream>
using namespace std;


class Instrument {
public:
	    virtual void makeSound() {
		 cout << "Instrument playing..." << endl;
	}

};


class Accordian :public Instrument {
public:
	    void makeSound() {
		cout << "Accordion playing..." << endl;
	}
};

class Guitar :public Instrument {
public:
	virtual void makeSound() {
		cout << "Piano playing..." << endl;
	}
};

//class BassGuitar :public Guitar {
//public:
	//void makeSound() {
		//cout << "BassGuitar playing..." << endl;
	//}
//};


int main() {
	Instrument* i1 = new Accordian();
	i1->makeSound();
	//Instrument* i2 = new BassGuitar();
	//i2->makeSound();


	//Instrument* instruments[2] = { i1,i2 };
	//for (int i = 0; i < 1; i++) {
		//instruments[i]->makeSound();
	//}

	//Accordian* i3 = new Instrument();   izin verilmiyor. 
    //i3->makeSound();
	//Accordian a;
	//a.makeSound();
	//Instrument b;
	//b.makeSound();
}