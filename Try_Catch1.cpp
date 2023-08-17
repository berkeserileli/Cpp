#include <iostream>
#include <exception>

class DivisionByZero :public std::exception {
private:
	std::string message;
public:
	DivisionByZero() {
		message = "0 a bolunme hatasi";
	}
	std::string what() {
		return message;
	}
};
class NegativeNumber :public std::exception {
private:
	std::string message;
public:
	NegativeNumber(std::string x = " ") {
		message = x + " cannot be negative number";
	}
	std::string what() {
		return message;
	}
};
//throw ifadesi try yapýsý ile brlikte kullanýlmak zorunda deðil!
int main() {

	float pay;
	float payda;
	float result;
		std::cout << "Lutfen pay degerini girin: " << std::endl;
		std::cin >> pay;
		std::cout << "Payda degerini de girin: " << std::endl;
		std::cin >> payda;
		try {

			if (payda == 0) {
				throw DivisionByZero();
			}
			else if (pay < 0) {
				throw NegativeNumber("Pay");
			}
			else if (payda < 0) {
				throw NegativeNumber("Payda");
			}


			result = pay / payda;
			std::cout << "Result is " << result;
		}
		catch (DivisionByZero& Obj1) {
			std::cout << Obj1.what();
		}
		catch (NegativeNumber& Obj2) {
			std::cout << Obj2.what();
		}
		//catch (std::string x) {
			//std::cout << x << std::endl;
		//}
		//catch (float x) {
			//std::cout << x << " cannot be a negative number!" << std::endl;
		//}
		catch (int x) {
			std::cout << x << std::endl;
		}
		catch (...) {
			//std::cout << "bos" << std::endl;
		}
	
}