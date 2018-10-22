#include "Header.h"
class MyQueue {
public:
	stack<int>pushS;
	stack<int>popS;
	MyQueue() {
		// do intialization if necessary
	}

	void reverse(){
		while (!pushS.empty()){
			popS.push(pushS.top());
			pushS.pop();
		}
	}
	/*
	* @param element: An integer
	* @return: nothing
	*/
	void push(int element) {
		// write your code here

		pushS.push(element);
	}

	/*
	* @return: An integer
	*/
	int pop() {
		// write your code here
		if (popS.empty()){
			reverse();
		}
		int ret = popS.top();
		popS.pop();
		return ret;

	}

	/*
	* @return: An integer
	*/
	int top() {
		// write your code here
		if (popS.empty()){
			reverse();
		}
		int ret = popS.top();
		return ret;
	}
};