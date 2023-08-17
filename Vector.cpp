#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include<vector>






int main() {

	std::string ismim[] = {"Berk","Eser","ILELI"};
	std::cout << ismim[2] << std::endl;
	//std::cout << ismim[3] << std::endl; deger yazdýrmýyor

	std::vector<int>myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << endl;
	}
	myVector.pop_back();//son elemaný siliyor!
	for (int l = 0; l < myVector.size(); l++) {
		cout << myVector[l]<<endl;
	}
	auto p = myVector.begin();
	
}