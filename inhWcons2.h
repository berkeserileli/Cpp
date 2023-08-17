#include<iostream>
using namespace std;


class Aclass{

public:
	int a;
	Aclass() {
		cout << "A sinifi constructor calisti" << endl;
	}
	~Aclass() {
		cout << "A sinifi destructor calisti" << endl;
	}
};

class Bclass {
public:
	int b;
	Bclass() {
		cout << "B sinifi constructor calisti" << endl;
	}
	~Bclass() {
		cout << "B sinifi destructor calisti" << endl;
	}
};

class Cclass: public Bclass,public Aclass{
public:

	Cclass(){
		cout << "C sinifi constructor calisti" << endl;
	}
	~Cclass() {
		cout << "C sinifi destructor calisti" << endl;
	}
};