#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;
#include <queue>
using std::queue;

//Bu data yapýsýnda listenin en baþýna eleman eklenir ve bu eklenen elemanýn silinip yeniden eklenerek devam etmesi gerekir!

void printQueue(queue<int>q) {
	queue<int>temp = q;
	while (!temp.empty()) {
		cout << temp.front() << endl;
		temp.pop();
	}
}

int main() {	
	queue<int>q;
	q.push(10);
	q.push(20);
	q.push(30);
	//q.pop();
	//cout << q.front()<<endl;
	//q.pop();
	//cout << q.front() << endl;
	//q.empty();
	//cout << q.empty();
	printQueue(q);



}