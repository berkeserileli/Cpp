#include <iostream>
using std::cout;



enum class Weekday {
	Monday = 1,
	Tuesday = 2,
	Wednesday = 3,
	Thursday = 4,
	Friday = 5,
	Saturday = 6,
	Sunday = 7
};



int main() {
	//static_cast tür dönüþümü yapmaya yarar. b nin deðerini float olarak girmemize raðmen int deðer göstermesi için zorladýk.
	Weekday myDay = static_cast<Weekday>(5);
	//float a = 9.5;
	//float b = static_cast<int>(a);
	//cout << b;
	//Weekday::myDay2 = Weekday::Thursday;
	cout << "My Favorite day is: " << static_cast<int>(myDay)<<std::endl;

}



