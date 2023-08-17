#include<iostream>
#include <thread>
#include <chrono>
using namespace std::literals::chrono_literals;


void task1(){
	int count = 0;
	while (count<5)
	{
		std::cout << "Hello there" << std::endl;
		std::this_thread::sleep_for(1s);
		count++;
	}
}

void task2(int k) {
	int p = 2;
	while (p<2)
	{

		std::cout << k << " days you were away!" << std::endl;
		std::this_thread::sleep_for(0.5s);
	}
}

void task3(char k) {
	int l = 0;
	while (l < 3) {
		std::cout << k << " Printed!" << std::endl;
		std::this_thread::sleep_for(0.01s);
	}
}

void foo()
{
	std::this_thread::sleep_for(5000ms);
}

int main() {
	//std::thread Entrance(task1);
	//Entrance.join();
		//Entrance.detach();
	//std::this_thread::sleep_for(0.5s);
	//std::thread Info(task2, 5);
		//Info.detach();
	//Info.join();
	//std::thread letter(task3, 'm');
	//letter.detach();

	std::cout << std::boolalpha;

	std::thread t;
	std::cout << "before starting, joinable: " << t.joinable() << '\n';

	t = std::thread{ foo };
	std::cout << "after starting, joinable: " << t.joinable() << '\n';
	std::cout << "waiting...." << std::endl;
	//t.join();
	t.detach();
	std::cout << "after joining, joinable: " << t.joinable() << '\n';

	t = std::thread{ foo };
	//t.detach();
	std::cout << "after detaching, joinable: " << t.joinable() << '\n';
	t.join();

}






















