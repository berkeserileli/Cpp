#include <iostream>	
using namespace std;
template<typename T>
class Number {
private:
	T data;
	template<typename T>
	friend ostream& operator<<(ostream&, Number<T>&);
public:
	Number(T main) {
		data = main;
	}
	T getData() { return data; }
	T operator+(Number&);
	void operator+=(T);
	void operator+=(Number&);
};

template<typename T>
T Number<T>::operator+( Number& numberObj) {
	return data + numberObj.data;
}

template<typename T>
void Number<T>::operator +=(T constant) {
	data += constant;
}

template<typename T>
void Number<T>::operator +=(Number& numberObject3) {
	data += numberObject3.data;
}


template<typename T>
ostream& operator<<(ostream& cout, Number<T> &numberObject4) {
	cout <<"Number: "<< numberObject4.data;
	return cout;
}



int main() {

	Number <int>numberInt(5);
	std::cout << numberInt.getData()<<std::endl;
	Number<float>numberFloat(5.7);
	std::cout << numberFloat.getData()<<std::endl;
	std::cout << numberInt + numberInt << std::endl;
	Number<double>numberDouble(8.75);
	numberDouble += numberDouble;
	std::cout << numberDouble.getData()<<std::endl;
    numberInt+=15;
	std::cout << numberInt.getData();
	std::cout << numberInt;
}



