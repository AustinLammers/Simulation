#pragma once
#include "customerType.h"

class queueType {

public:
	customerType top();
	customerType bottom();
	queueType();
	void push(customerType newCust);
	customerType pop();
	void print();
	void printFULL();
	//getters
	int getLength();
	int getMaxLength();



private:
int length;
int MAX_LENGTH;
customerType* queueContents;
int front;
int back;


};