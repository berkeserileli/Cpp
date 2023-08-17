#include <iostream>
using namespace std;


class Animal {
public:
	virtual void talk() {};
};

class Dog : public Animal {
public:
	void talk(){
		cout << "Haw Haw" << endl;
	}
};

class Cat :public Animal {
public:
	void talk(){
		cout << "Meow" << endl;
	}
};

class Frog : public Animal{
public:

	void talk() {
	cout << "Vrak Vrak" << endl;
	}
};








