#include <iostream>
using std::cout;
using std::endl;


class Main {
private:
	int variable1 = 15;
	char variable2 = 'b';

	friend class K;
};

class K {
public:
	void display(Main& t){
		cout << "First variable : " << t.variable1 << endl;
		cout << "Second variable: " << t.variable2 << endl;
	}
};

int main() {
	Main a;
	K obj1;
	obj1.display(a);

}









