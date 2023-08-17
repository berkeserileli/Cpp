#include "Array.h"





int main() {

	unsortedArray duzensiz(10);
	sortedArray duzenli(10);

	duzenli.printItems();
	duzenli.addItem(5);
	duzenli.addItem(10);
	duzenli.addItem(15);
	duzenli.addItem(20);
	duzenli.printItems();
	duzenli.removeItem(20);
	duzenli.printItems();
	duzenli.findIndex(3,15);
}