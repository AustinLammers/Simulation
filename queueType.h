#pragma once

class queueType {


	customerType top();
	customerType back();
	qeueType();
	void push();
	customerType pop();


private:
int length;
int MAX_LENGTH;
customerType* queueContents;
int front;
int back;


}