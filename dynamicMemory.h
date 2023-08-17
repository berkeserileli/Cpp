#include <iostream>
using namespace std;



class Example {

public:
	int x, y;
	Example(int x, int y) {
		this->x = x;
		this->y = y;
	};
	//Example() {
		//cout << "Constructor worked" << endl;
	//}
	//~Example() {
		//cout << "Destructor worked" << endl;
	//}
	void print() {
		cout << "X value:" << x <<endl<< "Y value " << y << endl;
}
	Example addExample(Example& oth) {
  		this->x += oth.x;           //x = oth.x diyerek de deðiþkenlere esitleyebilirdik
 		this->y += oth.y;           //y = oth.y
		return *this;
	}
};

