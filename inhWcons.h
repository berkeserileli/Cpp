#include <iostream>
using namespace std;


class baseClass {
public:
	int x;
	void setX(int mainX) {};
	baseClass(int mainX = 0) {
		x = mainX;
		cout << "baseClass constructor calisti" << endl;
	}
	~baseClass() {
		cout << "baseClass destructor calisti" << endl;
	}
	baseClass(baseClass &A) {
		x = A.x;
		cout << "Copy constructor calisti" << endl;
	}
};

class derivedClass :public baseClass {
public:
	int y = 0;
	void setY(int mainY) {};
	derivedClass(int mainX =0 ,int mainY=0) :baseClass(mainX){
		x = mainX;
		y = mainY;
		cout << "derivedClass constructor calisti" << endl;
	}
	~derivedClass() {
		cout << "derivedClass destructor calisti" << endl;
	}
	derivedClass(const derivedClass&A){
		x = A.y;
		y = A.y;
		cout << "derivedClass copy constructor calisti" << endl;
	}

};
