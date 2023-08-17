#include <iostream>
using std::cout;
using std::endl;
using std::cin;


class Node {
public:
	int value;
	Node* next;
};
void displayList(Node*head) {
	while (head!= NULL) {
		cout << head->value << endl;
		head = head->next;
	}
}


int main() {

	Node* head = new Node;
	Node* second = new Node;
	Node* third = new Node;


	head->value = 10;
	second->value = 20;
	third->value = 30;

	head->next = second;
	second->next = third;	
	third->next = NULL;
		
	displayList(head);
}