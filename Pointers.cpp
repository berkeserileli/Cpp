#include <iostream>
#include <memory>

void printNumber(int* numberPtr) {
	std::cout << "Number: " << *numberPtr << std::endl;
}
void printLetter(char* letterPtr) {
	std::cout << "Letter: " << *letterPtr << std::endl;
}
void print(void* ptr, char type) {  //void türündeki pointerýn hangi türde olduðunu belirle!	
	switch (type) {
	case 'i': 
		std::cout << *((int*)ptr) << std::endl; break;
		std::cout << *((char*)ptr) << std::endl; break;
	}
}
void getMinandMax(int numbers[], int size, int* min, int* max) {
	for (int i = 1; i < size; i++) {
		if (numbers[i] > *max) {
			*max = numbers[i];
		}
		else if (numbers[i] < *min) {
			*min = numbers[i];
		}
	}
}


void memory() {
	int* ptr5 = new int[10];
	*ptr5 = 10;
	std::cout << *ptr5<<std::endl;
	//std::cout << ptr5[3] << std::endl;
	delete[] ptr5;
}

int myNumber(int l, int b) {
	return (l + b);
}

class Class {
public:
	Class() {
		std::cout << "Constructor worked"<<std::endl;
	}
	~Class() {
		std::cout << "Destructor worked" << std::endl;
	}
};







int main() {
	int number = 5;
	printNumber(&number);
	char letter = 'a';
	printLetter(&letter);
	print(&number, 'i');
	print(&letter, 'c');

	int numbers[5] = { -5,4,-2,29,6 };
	int max = numbers[0];
	int min = numbers[0];
	getMinandMax(numbers, 5, &min, &max);
	std::cout << "min is : " << min << std::endl;
	std::cout << "max is: " << max << std::endl;

	//int size;
	//std::cout << "Size: " << std::endl;
	//std::cin >> size;
	// int myArray[size] diyemeyiz çünkü bellekte sabit bir deðer atanmasý gerekiyor array içerisine! dinamik þekilde deðer atayabiliriz.
	//int* myArray = new int[size];
	//for (int i = 0; i < size; i++) {
		//std::cout << "Array: " << i << std::endl;
		//std::cin >> myArray[i];
	//}

	//for (int i = 0; i < size; i++) {
		//std::cout << myArray[i];
	//}
	//delete[]myArray;
	//myArray = NULL;

	/*

	int row,col;
	std::cout << "Enter the number of rows: " << std::endl;
	std::cin >> row;
	std::cout << "Enter the number of coloumns: " << std::endl;
	std::cin >> col;
	int** myArray2 = new int* [row];

	
	for (int a = 0; a < row; a++) {
		myArray2[a] = new int[col];
	}
	for (int b = 0; b < row; b++) {
		for(int c = 0; c < row; c++) {
			myArray2[b][c] = 1;
			std::cout << **myArray2;
		}
		std::cout << " " << std::endl;
	}
	for (int k = 0; k < row; k++) {
		delete[] myArray2[k];
		myArray2 = NULL;
	}
	*/
	memory();
	int (*ptr6)(int ,int) = myNumber;
	std::cout << ptr6(5,6) << std::endl;
	std::cout << myNumber(3, 4) << std::endl;
	std::cout << ptr6(1, 1)<<std::endl;

	std::cout << "---------------------------------------" << std::endl;
	std::cout << "UNIQUE POINTERS" << std::endl;
	//std::unique_ptr<int>uptr = new int; þeklinde kullanýlmaz!
	//std::unique_ptr<int> uptr(); bu þekilde atama yapamazsýn
	std::unique_ptr<int>uptr;
	if (uptr == nullptr) { std::cout << "nullptr!!" << std::endl; }
	std::unique_ptr<int>uptr2(new int(2));
	std::cout << *uptr2 << std::endl;
	//std::cout << (*uptr) << std::endl;
	std::unique_ptr<std::string>a(new std::string("benden adam olmaz"));
		std::cout << *a<<std::endl;
		std::unique_ptr<int>m = std::make_unique<int>(25);
	    std::unique_ptr<int>n = std::move(m);
		//std::cout << *m << std::endl;
		std::cout << *n << std::endl;
		//std::unique_ptr<Class>classPtr = std::make_unique<Class>();
		std::unique_ptr<Class>classPtr(new Class());
};