#include <iostream>
#include <fstream>
#include <string>






void displayFileContent(const std::string&filename) {
	std::ifstream File(filename);
	std::string line;
	if (File.is_open()) {
		std::cout << "File content: " << std::endl;
		while (std::getline(File, line)) {
			std::cout << line << std::endl;
		}
		File.close();
	}
	else {
		std::cout << "ERROR!" << std::endl;
	}
}

double calculateNumber(const std::string& filename2) {
	std::ifstream File(filename2);
	double sum = 0.0;
	double count = 0.0;
	if (File.is_open()) {
		double number;
		while (File >> number) {
			sum += number;
			count++;
		}
		File.close();
	}
	else {
		std::cout << "can not open!" << std::endl;
		return 0;
	}
	if (count > 0) {
		return sum / count;
	}
	else {
		std::cout << "No numbers found in the file!" << std::endl;
		return 0;
	}
}



int main() {
	displayFileContent("File5.txt");
	double average = calculateNumber("File6.txt");
	std::cout << average << std::endl;
}















