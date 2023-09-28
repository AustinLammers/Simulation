#include "queueType"


	queueType::top(){
		return queueContents[front];

	}
	
	queueType::back(){
		return queueContents[back];

	}

	queueType::queueType(){
		 queueContents = new customerType[100];
		 front = 0;
		 back = 0;
		 MAX_LENGTH = 100;
		 length = 0;

	}

	void queueType::push() {


	}

	customerType queueType::pop() {



	}

