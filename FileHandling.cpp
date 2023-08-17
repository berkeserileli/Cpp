#include <iostream>
#include<fstream>
#include<string>

int main() {

	//std::fstream File1;
	/*
	File1.open("File1.txt", std::ios::out);
	if (File1.is_open()) {
		std::cout << "File was successfully opened!" << std::endl;
		File1 << "First line of txt was printed!" <<std::endl;
		File1 << "Second line of txt was printed!" <<std::endl;
		File1.close();
	}

	File1.open("File1.txt", std::ios::app);
	if (File1.is_open()) {
		std::cout << "Append proccess has been succeed!" << std::endl;
		File1 << "Third line of txt was printed!" << std::endl;
		File1 << "Fourth line of txt was printed!" << std::endl;
		File1.close();
	}
	*/

	/*
	File1.open("File1.txt", std::ios::in);
	if (File1.is_open()) {
		std::string line;
		std::cout << "File is in the process" << std::endl;
		while (std::getline(File1, line)) {
			File1 << line << std::endl;
		}
		File1.close();
		//getline(File1, line);
		//std::cout << line << std::endl;
		//getline(File1, line);
		//std::cout << line << std::endl;
		//getline(File1, line);
		//std::cout << line << std::endl;
		//File1.close();
	}
	*/
	/*
	File1.open("File1.txt", std::ios::out);
	if (File1.is_open()) {
		std::cout << "Data has been detected!" << std::endl;
		File1.close();
	}
	*/
	//std::fstream File2;
	//std::string line2 = "fatih";
	//File2.open("File2.txt", std::ios::in);
	//if (File2.is_open()) {
		//File2 << line2 << std::endl;
		//}
		//File2.close();
	//}


	//File2.open("File2.txt", std::ios::out);
	//if (File2.is_open()) {
		//std::cout << "New data was created!" << std::endl;
		//File2 << "Second file has proceeding!" << std::endl;
		//File2 << line2;
		//File2.close();


	std::fstream File3;
	File3.open("File3.txt", std::ios::out);
	if (File3.is_open()) {
		std::cout << "New file was created!" << std::endl;
		File3 << "Say hello to new file!" << std::endl;
		File3 << "My new file was initialized!" << std::endl;
		File3.close();
	}

	File3.open("File3.txt", std::ios::in);
	if (File3.is_open()) {
		std::cout << "Hello" << std::endl;
	}
	File3.close();
}
	


//dosyalarý açtýktan sonra kapatmak zorundasýn yoksa yenilikleri yazdýrmaz!
// 2. satýrdaki File1.open("File1.txt", ios::out); olsa idi sadece 3. satýr yazdýrýlcaktý!









