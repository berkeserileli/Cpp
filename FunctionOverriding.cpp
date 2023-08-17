#include "FunctionOverriding.h"



int main() {
	baseClass obj1(5);
	derivedClass obj2(7, 4);
	derivedClass obj3(obj2);

	obj1.print();
	obj2.print();
	obj3.print();
}

