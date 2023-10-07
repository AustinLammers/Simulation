#include <iostream>
#include "queueType.h"


int main() {
	
	//queue Testing

	queueType newQueue;
	customerType newCustomer(1);
	customerType newCustomer2(2);
	customerType newCustomer3(56);
	customerType newCustomer4(78);
	customerType newCustomer5(23);
	customerType newCustomer6(12);
	customerType newCustomer7(70);
	customerType newCustomer8(42);

	newQueue.push(newCustomer);
	newQueue.print();
	//newQueue.printFULL();
	newQueue.push(newCustomer2);
	newQueue.print();
	newQueue.pop();
	newQueue.print();
	//newQueue.printFULL();
	newQueue.push(newCustomer3);
	newQueue.push(newCustomer4);
	newQueue.push(newCustomer5);
	newQueue.push(newCustomer6);
	newQueue.print();
	newQueue.pop();
	newQueue.pop();
	newQueue.print();



}