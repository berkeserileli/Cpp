#include "ComplexNumber.h"


int main() {
	ComplexNumber complex1;
	ComplexNumber complex2;
	cout << complex1;
	cin >> complex1;
	//cin >> complex2;
	cout <<complex1 << endl;
	cout << complex2 << endl;
	
	ComplexNumber complex3 = complex1 + complex2;
	cout << complex3;


}