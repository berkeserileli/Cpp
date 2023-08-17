#include "Vehicle.h"



int main() {
	Car* car1 = new Car(200.000, "BMV");
	Motorcycle* motorcycle1 = new Motorcycle(35.000, "Honda");
	Vehicle* vehicles[] = { car1,motorcycle1 };

	int which_vehicle;
	char inputVehicle;
	do {
		cout << "Enter vehicle and input: ";
		cin >> which_vehicle >> inputVehicle;
		switch (inputVehicle) {
		case'U':
			vehicles[which_vehicle]->increaseSpeed();
			vehicles[which_vehicle]->displayInformation();
			break;
		case'D':
			vehicles[which_vehicle]->decreaseSpeed();
			vehicles[which_vehicle]->displayInformation();
			break;
		case'C':
			vehicles[which_vehicle]->stopEngine();
			vehicles[which_vehicle]->displayInformation();
			break;
		case'S':
			vehicles[which_vehicle]->startEngine();
			vehicles[which_vehicle]->displayInformation();
			break;
		default:
			cout << "Enter valid input:" << endl;
			break;
		}
	}while (which_vehicle != -1);
}
	