#include "OperatorOverloading.h"


int main() {
	Person person1("Berk Eser", "ILELI", 21);
	Person person2("Berk Eser", "ILELI", 21);


	++person1; // burda ++prefix operatörüne yaþý artýrma iþlemi ekledik. ++ prefix ve ++postfix farklý olarak tanýmlanmalýdýr!
	person1++;
	PersonFriend(person1); //Nesne üzerinden çaðýrýlmaz! Çaðýrýlacak olan nesne fonksiyonun içine yazýlýr!
	person1.displayPerson();
	person2.displayPerson();

	cout << "Member Process:";
	person1 == person2 ? cout << "Same person" << endl: cout << "Not same person" << endl;
	cout << "Non-member: ";
	person1 != person2 ? cout << "Not same person" << endl : cout << "Same person" << endl;
	Person person4;
	cin >> person4;
	cout << person4;

}