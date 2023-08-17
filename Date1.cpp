#include "Date1.h"



int main() {

	//bastýrmaz çünkü parametresiz comstructor koymadýk Date a();
	Date firstDate(32, 8, 2001);
	Date secondDate(15, 12, 1999);
	cout << firstDate;
	cout << secondDate;

	firstDate++;
	cout << firstDate;

	if (firstDate > secondDate) {
		cout << "First Day is greater" << endl;
	}
	else {
		cout << "False" << endl;
	}
	Date copiedDate(firstDate);
	cout << copiedDate;
		;
}