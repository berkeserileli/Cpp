#include<iostream>



int main() {
	//int x = -5;
	//std::cout << "Denemeden once.." << std::endl;

	//try {
		//std::cout << "Try in icine girdi!" << std::endl;
		//if (x < 0) {
			//throw x;
			//std::cout << "Calismayan Throw sonrasi" << std::endl;
		//}
	//}
	//catch (int x) {
		//std::cout << "Exception caught"<<std::endl;
	//}
	//std::cout << "Catch sonrasi" << std::endl;

	try {
		try {
			throw 20;
		}
		catch (int n) {
			std::cout << "Handle Partially ";
			throw; // Re-throwing an exception
		}
	}
	catch (int n) {
		std::cout << "Handle remaining ";
	}
	//firlatilan deger, aynı değişken türü ile tutulamaz! aynı scopelarda.
	//catch (int m) {
		//std::cout << "Handle again" << std::endl;
	//}
}