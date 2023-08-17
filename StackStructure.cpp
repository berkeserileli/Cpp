#include<iostream>
using namespace std;
#include<stack>



class Node {
public:
	int value;
	Node* next;
};

void printMyStack(stack<int>A){
	while (!A.empty())
	{
		cout << A.top() << endl;
		A.pop();
	}
}

int main() {
	int stack_number;
	//stack<int>myStack;
	//myStack.push(5);
	//myStack.push(10);
	//myStack.push(15);
	//myStack.pop();   //pop() en son eklenen elemaný siliyor! yani 15 silinecek
//	printMyStack(myStack);


	Node* p1 = new Node;
	p1->value = 5;
	Node*p2 = new Node;
	p1->next = p2;
	p2->value = 10;
	Node*p3  = new Node;
	p2->next = p3;
	p3->value = 15;
	Node* iter;
	iter = p1;
	p3->next = NULL;
	
	//while (iter!= NULL) {
		//cout << iter->value << endl;
		//iter = iter->next;
	//}

	//Link-list sona eleman ekleme //while (iter->next != NULL) {
		//cout << iter->value << endl;
		//iter = iter->next;
		//if (iter->value = 15) {
			//Node* p4 = new Node;
			//p4->value = 20;
			//p4->next = NULL;
			//cout << p4->value << endl;
		//}
	//}
}















