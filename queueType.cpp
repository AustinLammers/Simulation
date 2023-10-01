#include "queueType.h"
#include <iostream>



	customerType queueType::top() {
		return queueContents[front];

	}
	
	customerType queueType::bottom() {
		return queueContents[back];

	}

	void queueType::push(customerType newCust) {

		
			if (back < MAX_LENGTH - 1) back++;
			else if (front > 0) back = 0;
			else abort();
			length++;
			queueContents[back] = newCust;

		

	}

	customerType queueType::pop() {

		int currID = front;
		if (front < MAX_LENGTH - 1) front++;
		else if (back > 0) front = 0;
		else abort();
		length--;
		return queueContents[currID];


	}

	void queueType::print() {

		for (int i = front; i <= back; i++) {

			std::cout << queueContents[i].getID() << ", ";

		}

		std::cout << "\n\n";

	}

	void queueType::printFULL() {

		for (int i = 0; i < MAX_LENGTH; i++) {

			std::cout << queueContents[i].getID() << ", ";

		}

		std::cout << "\n\n";
	}

	int queueType::getLength() {

		return length;

	}

	int queueType::getMaxLength() {

		return MAX_LENGTH;

	}

	queueType::queueType() {
		 front = 0;
		 back = -1;
		 MAX_LENGTH = 100;
		 length = 0;
		 queueContents = new customerType[MAX_LENGTH];

	}