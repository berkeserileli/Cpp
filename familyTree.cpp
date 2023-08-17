#include <iostream>



class Family {
public:
	std::string data;
	Family* next;
	Family() {
		data = "None";
		next = NULL;

	}
	void addNode(int m) {
		Family* tmp = new Family;
		tmp->data = m;
		tmp->next = NULL;
	}
};

int main() {
	
	Family* head = new Family;
	Family* second = new Family;
	Family* third = new Family;

	head->data = "ILELI1";
	head->next = second;
	second->data = "ILELI2";
	second->next = third;
	third->data = "ILELI3";
	third->next = NULL;

	while (head != NULL) {
		std::cout << head->data << std::endl;
		head = head->next;
	}
}










