#include "Header.h"
class MinStack {
public:
	stack<int> mystack;
	stack<int> minS;
	int size;
	MinStack() {
		// do intialization if necessary
		size = 0;
		
	}

	/*
	* @param number: An integer
	* @return: nothing
	*/
	void push(int number) {
		// write your code here
		if (size == 0){
			minS.push(number);
		}
		else{
			if (minS.top() >= number){
				minS.push(number);
			}
		}
		mystack.push(number);
		size++;
		
	}

	/*
	* @return: An integer
	*/
	int pop() {
		// write your code here
		int tmp = mystack.top();
		mystack.pop();
		if (tmp == minS.top()){
			minS.pop();
		}
		size--;
		return tmp;
	}

	/*
	* @return: An integer
	*/
	int min() {
		// write your code here
		return minS.top();
	}
};