#include <iostream>
using namespace std;


class Array {
protected:
	int* data;
	int size;
	int capacity;

public:
	Array(int user_capacity) {
		capacity = user_capacity;
		data = new int[capacity];
		size = 0;
		cout << "new int array is created with capacity: " << capacity << endl;
	}
	~Array() {
		delete data;
		cout << "Array destroyed" << endl;
	}
	//Array(Array& copyArray) {
		//size = copyArray.size;
		//capacity = copyArray.capacity;
		//data = new int[capacity];
		//for (int i = 0; i < copyArray.size; i++) {
			//data[i] = copyArray.data[i];
		//}
		//cout << "Array copied to target" << endl;
	//}

	void printItems() {
		if (size != 0) {
			for (int i = 0; i < size; i++) {
				cout << data[i] << "-";
			}
		}
		cout << endl << "Capacity: " << capacity << "   Size: " << size << endl;
	}
	void removeIndexItem(int index) {
		if (index <0 || index>capacity) {
			cout << "ERROR no item at index" << index << endl;
		}
		for (int i = index; i < size; i++) {
			data[i] = data[i + 1];
		}
		size -= 1;
		cout << "Item is deleted" << endl;
	}
	void removeItem(int number) {
		int counter = 0;
		for (int i = 0; i < size; i++) {
			if (data[i] == number) {
				for (int j = i; j < size; j++) {
					data[j] = data[j + 1];
				}
				counter += 1;
			}
		}
		cout << counter << "items are deleted from array" << endl;
		size -= counter;
	}


	int findIndex(int a, int) {
		for (int b = 0; b < size; b++) {
			if (data[b] = a) {
				return b;
			}
		}
		return -1;
	}

	void addItem(int number) {
		if (capacity == size) {
			int* temp_data = new int[capacity * 2];
			for (int i = 0; i < size; i++) {
				temp_data[i] = data[i];
			}
			delete[]data;
			data = temp_data;
			capacity *= 2;
		}
		data[size] = number;
		size++;
	};
};

	class unsortedArray :public Array {
	public:
		unsortedArray(int user_capacity = 5) :Array(user_capacity) {};
		void printItems() {
			cout << "Unsorted Array" << endl;
			Array::printItems();
		}
	};

	class sortedArray :public Array {
	public:
		sortedArray(int user_capacity = 5) : Array(user_capacity) {};
		void addItem(int number) {
			int i;
			if (capacity == size) {
				int* temp_data = new int[capacity * 2];
				for (int i = 0; i < size; i++) {
					temp_data[i] = data[i];
				}
				delete[]data;
				data = temp_data;
				capacity *= 2;
			}
			for (i = size - 1; (i > 0 && data[i] > number); i--) {
				data[i + 1] = data[i];
			}
			data[i + 1] = number;
			size++;
		}
		void printItems() {
			Array::printItems();
		}
		};
	



