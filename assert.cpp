#include <iostream>
#include <cassert>



int main() {

	int firstN;
	int secN;
	float result;

	std::cout << "Ilk sayinizi giriniz:" <<std::endl;
	std::cin >> firstN;
	std::cout << "2.sAYÝ:" << std::endl;
	std::cin >> secN;
	result = firstN / secN;
	std::cout << result;

	assert(secN != 0);

}