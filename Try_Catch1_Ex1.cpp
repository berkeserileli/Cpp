#include<iostream>
#include<string>

class Printer {
private:
	std::string _name;
	int _availablePaper;
public:
	Printer(std::string name, int availablePaper) {
		_name = name;
		_availablePaper = availablePaper;
	}
	void Print(std::string doc) {
		int requiredPaper = doc.length();
		if (requiredPaper > _availablePaper) {
			throw "Not enough paper!";
		}
		std::cout << "Printing..." <<doc<< std::endl;
		_availablePaper -=requiredPaper;
	}
};



int main() {
	Printer myPrinter("EPSON", 5);
	//myPrinter.Print("Ben Eser");
	try {
		//myPrinter.Print("BerkEserA");
		myPrinter.Print("LukeBROWN");
		myPrinter.Print("LuisCrown");
	}
	catch (const char* docNew) {
		std::cout << "Exception: " << docNew << std::endl;
	}
}