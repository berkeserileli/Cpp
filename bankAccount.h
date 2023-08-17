#include <iostream>
using namespace std;



class bankAccount {
private:
	friend ostream& operator<<(ostream&, bankAccount&);
	float accountBalance;
	string personName,personSurname,personPhone;

public:	
	
	bankAccount(string name, string surname, float balance, string phone = " ") {
		setPersonName(name);
		setPersonSurname(surname);
		setPersonPhone(phone);
		setPersonBalance(balance);
	};
	bankAccount(bankAccount& oth) {
		personName = oth.personName;
		personSurname = oth.personSurname;
		personPhone = oth.personPhone;
		cout << "Person  phone copied to target" << endl;
	};
	~bankAccount() {
		cout << "Destructor worked" << endl;
	};
	//void displayProfile(); //<< operatörü aþýrý yükle
	//void credit(float); //+ operatörünü aþýrý yükle
	//void withdraw(float); //- operatörünü aþýrý yükle
	void sendMoney(bankAccount& othAccount, float amount) {
		//if (amount >accountBalance) {
			//cout << "ERROR!" << endl;
	//}
		//else {
			//accountBalance = accountBalance - amount;
			//othAccount.accountBalance = othAccount.accountBalance + amount;
			//cout << "Transfer has been succesfully!" << endl;
			//cout << "Money remained: " << accountBalance << endl;}
	};
	void setPersonName(string name) {
		personName = name;
	};
	void setPersonSurname(string surname) {
		personSurname = surname;
	};
	void setPersonPhone(string phone) {
		personPhone = phone;
	};
	void setPersonBalance(float balance) {
		accountBalance = balance;
	};
	float getPersonBalance() { return accountBalance; };
	string getPersonName() { return personName; };
	string getPersonSurname() { return personSurname; };
	string getPersonPhone() { return personPhone; };

	void operator+(float);
	void operator-(float);
};
ostream& operator<<(ostream& cout, bankAccount&accountObj) {
	cout << "--------------------------------" << endl << "Name: " << accountObj.personName << endl << "Surname: " << accountObj.personSurname << endl << "Balance: " << accountObj.accountBalance << endl<<"Phone Number: " << accountObj.personPhone<<endl;
	return cout;
}

void bankAccount::operator+(float amount) {
	while (amount < 0) {
		cout << "Invalid amount! Please enter valid amount: " << endl;
		cin >> amount;
		 }
	accountBalance += amount;
}

void bankAccount::operator-(float amount) {
	while (amount <= 0 || amount > accountBalance) {
		cout << "Invalid amount! Please enter valid amount: " << endl;
		cin >> amount;
	}
	accountBalance -= amount;
}
