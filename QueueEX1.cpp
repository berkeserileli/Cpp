#include<iostream>
using namespace std;
#include<queue>


void implement(queue<string>q) {
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
}

int main() {
	queue<string>myQueue;
		 myQueue.push("Berk");
		 myQueue.push("Esra");
		 myQueue.push("Nurcan");
	implement(myQueue);
}

