#include <iostream>
using namespace std;


class baseClass {
private:
	int x;

public:
	void setX(int mainX) {
		x = mainX;
	}
	int getX() {
		return x;
	}
	void print() {
		cout << "X:" << x << endl;
	}
};

class DerivedClass : public baseClass {
private:
	int y;
public:
	void setY(int mainY) {
		y = mainY;
	}
	int getY() {
		return y;
	}
	void print2() {
		cout << "Y:" << y << endl;
	}
};

int main() {
	
	DerivedClass obj1;
	obj1.setX(5);
	obj1.print();
	DerivedClass obj2;
	obj2.setY(4);
	obj2.print2();
}


