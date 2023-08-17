#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
	std::fstream File5;
	File5.open("File5.txt", std::ios::in);
	if (File5.is_open()) {
		std::string line;
		int wordCount = 0;
		while(std::getline(File5,line)){
			std::stringstream ss(line);
			std::string word;
			while (ss >> word) {
				wordCount++;
			}
			std::cout << line << std::endl;
		}
		File5.close();
		std::cout << "The number of words are: " << wordCount<<std::endl;
	}
}











