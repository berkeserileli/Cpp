#include <iostream>
using namespace std;



template<typename Type>
Type getMax(Type a, Type b) {
	Type max;
	a > b ? max = a : max = b;
	return max;
};


template<typename Type2>
Type2 getMin(Type2 c,Type2 d) {
	Type2 min;
	c < d ? min = c: min = d;
	return min;
}

template<typename Type3>
string select(Type3 l, Type3 m) {	
	if (l>m) {
		return l;
	}
	else {
		return m;
	}
}
template<typename MyValues>
MyValues value(MyValues a,MyValues b) {
	return a + b;
}

template<typename P,typename K>
K greater(P q, K e) {
	return ((q > e) ? q : e);
}


//int getMax(int a, int b) {
	//int max;
	//a > b ? max = a : max = b;
	//return max;
//}

//double getMax(double a, double b) {
	//double max;
	//a > b ? max = a : max = b;
	//return max;
//}

//char getMax(char a, char b) {
	//char max;
	//a > b ? max = a; max = b;
	//return max;
//}


int main() {
	cout << getMax("Fatih","Ahmet")<<endl;
	cout << getMin('a', 'b') << endl;
	cout << getMax<int>(3, 7) << endl;
	cout << getMax<char>('a','b') << endl;
	cout << getMin<double>(12.35, 34.78) << endl;
	cout << select<string>("BERK", "FATIH") << endl;  //alfabede ilk hangisi geliyorsa onu bastýrýr.
	cout << value<string>("berk", "ileli") << endl;
	//cout << greater("eser","fatih") << endl;
}