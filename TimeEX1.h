#include <iostream>



class Time {
private:
	int h, m, s;
public:
	Time(int h = 0, int m = 0, int s = 0) {
		this->h = h;
		this->m = m;
		this->s = s;
	}
	int getHours() { return this->h; };
	int getMins() { return this->m; };
	int getSec() { return this->s; };
	void add(Time& h,Time& m) {
		int H = h % 12;

	}
};



















