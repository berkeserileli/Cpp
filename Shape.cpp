#include "Shape.h"



int main() {
	Circle* circle = new Circle(5);
	Rectangular* rectangular = new Rectangular(2, 4);

	Shape* shapeArray[] = { circle,rectangular };

	for (int i = 0; i< sizeof(shapeArray) / sizeof(shapeArray[0]); i++) {
		shapeArray[i]->calculateArea();
		shapeArray[i]->calculateParameter();
		shapeArray[i]->display();
	}
}