#include <iostream>
#include<thread>
#include<chrono>
using namespace std;

void print() {
	for (int i = 0; i < 10; i++) {
		std::cout << i << std::endl;
		this_thread::sleep_for(chrono::milliseconds(1500));
	}
}

int main() {
	//print();
	thread t(print);
	for (int k = 100; k < 110; k++) {
		std::cout << k << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
	std::cout<<"Main has been terminated!"<<std::endl;
	//t.join();
	t.detach();
}















