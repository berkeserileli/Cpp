#include <iostream>



int main() {
	int pay;
	int payda;
	int result;
	std::string str = "payda sifir olamaz!";

	try {
		std::cout<< "Payi gir: "<< std::endl;
		std::cin >> pay;
		std::cout << "Paydayi gir: " << std::endl;
		std::cin >> payda;
		if (payda == 0) {
			throw str;
		}
		else if (payda > 100) {
			throw payda;
		}
		else if (pay > 1000) {
			throw pay;
		}
		else {
			throw "Hata!";
		}
		result = pay / payda;
		std::cout << "Result is: " << result<<std::endl;
	}
	//catch bloklarının sırasina dikkat et, sıralı bir şekilde yazmaya çalış!
	//throw attığın değerler catch te yakalanmalı! yakalanmazsa catch(...)a girmeli ki sistem hata vermesin, catch(...) ise default deger verir.
	catch (std::string x) {
		std::cout <<"Paydayi sifira bolemezsin!"<< std::endl;
	}
	catch (int x) {
		std::cout << x <<" olamaz!"<< std::endl;
	}
	catch (...) {
		std::cout << "Default!" << std::endl;
	}
}
