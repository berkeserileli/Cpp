#include <iostream>
#include <thread>




class Factor {
public:
	void operator()(std::string& msg) {
		msg = "Do not forget that";
		std::cout << "..says: " <<msg<< std::endl;
	}
};







int main() {
	std::string s = "Where there is no trust,there is no love";
	std::thread t1((Factor()), std::ref(s));
	try {
		std::cout << "From main: " << s << std::endl;
	}
	catch (...) {
		//t1.join();
		throw;
	}
	t1.join();
}