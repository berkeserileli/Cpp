#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

namespace myNamespace1 {
	void print() {
			cout << "MyNamespace was printed!" << endl;
	}
};

namespace myNamespace2 {
	void print() {
		cout << "The namespace of class was worked!" << endl;
	}
};

namespace arbitrary {
	class Class2 {
	public:
		Class2() {
			cout << "Class2 was created!"<<endl;
			}
		void print() {
			cout << "Arbitrary namespace involved!" << endl;
		};
	};
}


 class MyClass {
 public:
	 MyClass() {
		 cout << "Constructor worked!" << endl;
		 myNamespace1::print();
		 myNamespace2::print();
	 };
	
 };

 namespace arbitrary2 {
	 int i{ 10 };
	 namespace arbitrary3 {
		 int x{ 8 };
	 }
 }

 namespace number {
	 void printNumber(double k) {
		 cout << "Number: " << k << endl;
	 }
	 namespace rounded {
		 void printNumber(int k) {
			 cout << "Number: " << k << endl;
		 }
	 }
 }
 
/*
class MyClass {
public:
	class myNamespace2 {
	public:
		  static void print() {
			std::cout << "The namespace of the class worked!" << std::endl;
		}
	};
	MyClass(){
		std::cout << "Constructor worked!" << std::endl;
		myNamespace2::print();
	}
};
*/

 //COK ONEMLI: constructor içerisinde fonksiyon tanýmlanamaz!
int main() {
	MyClass A;
	arbitrary::Class2 B;
	B.print();
	cout<<arbitrary2::i<<endl;
	cout << arbitrary2::arbitrary3::x << endl;
	number::rounded::printNumber(15.79);
	number::printNumber(18);
	using namespace number::rounded;
	printNumber(13.32);

}