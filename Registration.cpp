#include <iostream>
using namespace std;


class Person {
public:
	string data;
	friend istream& operator>>(istream&, Person&);
	friend ostream& operator<<(ostream&, Person&);
};
int main() {
	int number;
	cout << "Lutfen kaydetmek istediginiz kisi sayisini giriniz: " << endl;
	cin >> number;
	cout << "Lutfen bu kisilerin bilgilerini giriniz: " << endl;
	Person* personArray = new Person[number];
	for(int l = 0;l<number;l++){
		cin >> personArray[l].data;
	}
	for (int k = 0; k < number; k++) {
		cout << personArray[k].data<< " was added succesfully!" << endl;
	}
	delete[]personArray;
}
istream& operator>>(istream& cin, Person& oth) {
	cin >> oth.data;
	return cin;
}
ostream& operator<<(ostream& cout, Person& oth) {
	cout << oth.data;
	return cout;
}
