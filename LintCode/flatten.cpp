#include "Header.h"

/*
class NestedInteger {
public:
	// Return true if this NestedInteger holds a single integer,
	// rather than a nested list.
	bool isInteger() const;

	// Return the single integer that this NestedInteger holds,
	// if it holds a single integer
	// The result is undefined if this NestedInteger holds a nested list
	int getInteger() const;

	// Return the nested list that this NestedInteger holds,
	// if it holds a nested list
	// The result is undefined if this NestedInteger holds a single integer
	const vector<NestedInteger> &getList() const;

};



vector<int> flatten(vector<NestedInteger> &nestedList) {


	// Write your code here

	vector<int>ret;
	for (int i = 0; i < nestedList.size(); i++){
		NestedInteger tmp = nestedList[i];
		if (tmp.isInteger()){
			ret.push_back(tmp.getInteger());
		}
		else{
			vector<NestedInteger>subList = tmp.getList();
			vector<int> subret = flatten(subList);
			for (int j = 0; j < subret.size(); j++){
				ret.push_back(subret[j]);
			}
		}
	}
	return ret;
}
*/