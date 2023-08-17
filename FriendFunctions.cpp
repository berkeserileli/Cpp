#include <iostream>
using std::cout;
using std::endl;


class Person {
private:
	std::string customerName = "BerkEser";
	std::string customerSurname = "ILELI";
	friend void display(Person&l);
	friend std::ostream& operator <<(std::ostream& cout, Person& person) {
		cout << person.customerName;
		cout << person.customerSurname;
		return cout;
	};
};

class Customer{
	private: 
	int customerID =201201063;
	int workedYear = rand()%10;
	friend void display(Person& l);
public:
	void setCustomerID(int ID) { customerID = ID; };
	int getCustomerID() { return customerID; };
};

void display(Person&l) {
	cout << "Customer Name: " << l.customerName << endl;
	cout << "Customer Surname: " << l.customerSurname << endl;
}

int main() {
	srand(time(NULL));
	Person person1;
	Customer customer1;
	customer1.setCustomerID(201201063);
	display(person1);
	customer1.getCustomerID();
	cout << person1;
}




