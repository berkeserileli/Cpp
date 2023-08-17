#include <iostream>
using namespace std;
class A {
public:
	 void show() {
		cout << "Class A" << endl;
	}
};

class B : public A {
public:
	virtual void show() {
		cout << "Class B" << endl;
	}
};

class C : public B {
public:
	 void show() {
		cout << "Class C" << endl;
	}

};

int main()
{
	B c;
	c.show();
	
	
}






