#include<iostream>

class base {
public:
	base(int received) {
		m_a = received;
		std::cout << "Constructor worked" << std::endl;
	}

private:
	int m_a;
	int m_b;
	void print() {
		std::cout << "m_a = " << m_a << std::endl;
	}

};

class Square {

	int kenar;
	//int cevre;
	//int alan;
public:
	
	Square(int a) {
		kenar = a;
		//cevre = 4 * a;
		//alan = a * a;
	};
	//int AlAlan() { return kenar; };
	//int AlCevre() { return cevre; };
	void displayInfo() {
		std::cout << "Kenar: " << this->kenar << std::endl;
		std::cout << "Cevre: " << this->getCevre() << std::endl;
		std::cout << "Alan: " << this->getAlan() << std::endl;
	}
	
	void setKenar(int d) { kenar = d; }
	int getAlan() { return  this->kenar; }

	int getCevre() { return 4 * this->kenar; }

};

int main() {

	std::cout << "Hello\n";
	base a(15);
	Square b(5);


	//b.setCevre(4);
	//b.setAlan(2);
	//b.setKenar(1);
	//b.displayInfo();
	int kenar;
	for (int i = 0; i < 10; i++) {
		std::cout << "Kenar sayinizi giriniz: " << std::endl;
		std::cin >> kenar;
		if (kenar <= 0) {
			std::cout << "ERROR" << std::endl;
		}
		else {
			b.setKenar(kenar);
			b.displayInfo();
		}

	}

}




