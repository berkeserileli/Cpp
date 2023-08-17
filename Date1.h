#include <iostream>
using namespace std;


class Date {
private:
	int month, day, year;
	int monthDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	string monthString[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	friend ostream& operator <<(ostream&, Date&);
public:
	Date(int d, int m, int y) {
		setDate(d, m, y);
	};
	Date(Date& oth) {
		day = oth.day;
		month =oth.month;
		year = oth.year;
		cout << "Data copied to target!" << endl;
	};
	~Date() { cout << "Date destroyed" << endl; };

	void setDate(int d, int m, int y) {
		setDay(d);
		setMonth(m);
		setYear(y);
	};
	void setDay(int d) {
		if (d >= 1 && d <= 31) {
			day = d;
		}
		else {
			day = 1;
		};

	};
	void setMonth(int m) {
		if (m >= 1 && m <= 12) {
			month = m;
		}
		else {
			month = 1;
		};
	};
	void setYear(int y) {
		if (y >= 1900) {
			year = y;
		}
		else {
			year = 1900;
		};
	};
	int getDay(){return day;}
	int getMoth(){return month; }
	int getYear(){return year; }
	//void increaseDay();//++ operatörü ile aþýrý yükleyerek yap
	//void compareDate(Date& othDate);//> operatörü ile aþýrý yükleyerek yap
	//void displayDate();//<< operatörü ile aþýrý yükleyerek yap // bu fonksiyonn iþlemini ostream yapacaktýr.
	void operator++(int);
	bool operator>(Date&);
};

ostream& operator<<(ostream& cout, Date& dateObject){
	cout << dateObject.day <<" "<< dateObject.monthString[dateObject.month - 1] << " " << dateObject.year << endl;
	return cout;
}

void Date::operator++(int) {
	if (day < monthDays[month - 1]) {
		day++;
	}
	else {
		day = 1;
		if (month < 12) {
			month++;
		}
		else {
			month = 1;
			year++;
		};

	}
}

bool Date::operator>(Date&other) {
	long FirstDay;
	long SecondDay;

	FirstDay = year * 365 + month * 30 + day;
	SecondDay = other.year * 365 + other.month * 30 + other.day;
	if (FirstDay > SecondDay) {
		return true;
	}
	else if (SecondDay > FirstDay) {
		return false;
	}
	else {
		return false;
	};
}