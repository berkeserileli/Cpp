#include <iostream>


class Triangle {
private:
	float sideA, sideB, sideC;
public:
	Triangle(float a, float b, float c) {
		while (isTriangle(a, b, c) != 0) {
			std::cout << "Ucgen kenarlarini giriniz: " << std::endl;
			std::cin >> a >> b >> c;
			sideA = a;
			sideB = b;
			sideC = c;
			std::cout << "Triangle is valid and created!" << std::endl;
		}
	};
	~Triangle() {
		std::cout << "Destructor worked!" << std::endl;
	};
	Triangle(Triangle& obj) {
		sideA = obj.sideA;
		sideB = obj.sideB;
		sideC = obj.sideC;
	};
	bool isTriangle(float a, float b, float c) {
		if((abs(b-c)<a<b+c) || abs(a-c)<b<a+c || abs(b-c)<a<b+c ){
			return 1;
		}
		else {
			return 0;
		}
	};
	float getSideA() { return sideA; };
	float getSideB() { return sideB; };
	float getSideC() { return sideC; };

	bool isEquilateral() {
		if (sideA = sideB = sideC) {
			return 1;
		}
		else {
			return 0;
		}
	};
	bool isScaline() {
		if (sideA != sideB && sideB != sideC && sideA != sideC) {
			return 1;
		}
		else {
			return 0;
		}
	};
	bool Isosceles() {
		if (sideA == sideB || sideA == sideC || sideB == sideC) {
			return 1;
		}
		else {
			return 0;
		}
	};
	float calculateArea() {
		float u = sideA + sideB + sideC;
		return sqrt(u * (u - sideA) * (u - sideB) * (u - sideC));
	}
};

int main() {

	Triangle triangle1(3, 4, 5);
	triangle1.isTriangle(3, 4, 5);


}