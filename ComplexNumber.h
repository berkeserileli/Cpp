#include <iostream>
using namespace std;

class ComplexNumber {
private:
	int real;
	int imaginary;

public:
	 friend ostream& operator<<(ostream&, ComplexNumber&);
	 friend istream& operator>>(istream&, ComplexNumber&);
	ComplexNumber() { real = -999; imaginary = -999; };
	ComplexNumber(int r,int i) {
		real = r;
		imaginary = i;
		cout << "Complex number created" << endl;
	}
	~ComplexNumber() {
		cout << "Complex number destroyed" << endl;
	}
	ComplexNumber(const ComplexNumber& oth) {
		real = oth.real;
		imaginary = oth.imaginary;
		cout<<"Complex number copied to target" << endl;
	}
	//void setValue(int r, int i) {
		//real = r;
		//imaginary = i;
	//}
	int getReal(){ return real; };
	int getImaginary(){ return imaginary; };
	//DÖRT ÝÞLEMLER AÞIRI YÜKLENEREK YAPILACAK.
	//ComplexNumber addComplex(ComplexNumber& oth);
	ComplexNumber operator +(ComplexNumber&);    //böylece toplama iþini + operatörü ile yapmýþ olduk.
	//ComplexNumber multiplyComplex(ComplexNumber& oth);
	ComplexNumber operator*(ComplexNumber&);
	//ComplexNumber substractComplex(ComplexNumber& oth);
	ComplexNumber operator-(ComplexNumber&);
	//ComplexNumber multiplyConstant(int constant);
	ComplexNumber operator*(int);
	//void displayComplex(){imaginary >= 0 ? cout << real << "+" << imaginary << "i" << endl : cout << real << imaginary << "i" << endl;}  //OUTPUT OPERATÖRÜ AÞIRI YÜKLENEREK YAPILACAK
	void multiplyMinus() {
		real *= -1;
		imaginary *= -1;
	}
	
};

ostream& operator <<(ostream& osObject, ComplexNumber&complexNumberObject) {
	if (complexNumberObject.imaginary >= 0) {
		osObject << complexNumberObject.real << "+" << complexNumberObject.imaginary << "i" << endl;
	 }
	else {
		osObject << complexNumberObject.real << complexNumberObject.imaginary << "i" << endl;
	}
	return  osObject;
}

istream& operator >>(istream& isObject, ComplexNumber& complexNumberObject) {
	isObject >> complexNumberObject.real >> complexNumberObject.imaginary;
	return isObject;
}

ComplexNumber ComplexNumber::operator+(ComplexNumber& oth) {
	ComplexNumber result;
	result.real = real + oth.real;
	result.imaginary = imaginary + oth.imaginary;
	return result;
}

ComplexNumber ComplexNumber::operator-(ComplexNumber& oth) {
	ComplexNumber result;
	oth.multiplyMinus();
	result = *this + oth;
	return result;
}
ComplexNumber ComplexNumber::operator*(int constant) {
	ComplexNumber result;
	result.real = real*constant;
	result.imaginary = imaginary * constant;
	return result;
}
ComplexNumber ComplexNumber::operator*(ComplexNumber&oth) {
	ComplexNumber result;
	result.real = real + oth.real - imaginary * oth.imaginary;
	result.imaginary = real * oth.imaginary + imaginary * oth.real;
	return result;
}

