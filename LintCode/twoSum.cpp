
#include "Header.h"
vector<int> twoSum(vector<int> &numbers, int target) {
	// write your code here

	map<int, int>myMap;
	int result;
	vector<int>ret(2,-1);
	for (int i = 0; i < numbers.size(); i++){
		if (myMap.find(numbers[i]) != myMap.end()){
			ret[0] = myMap[numbers[i]];
			ret[1] = i;
			return ret;
		}

		result = target - numbers[i];
		myMap[result] = i;
	}
}

vector<vector<int>> threeSum(vector<int> &numbers) {
	// write your code here
}


vector<vector<int>> fourSum(vector<int> &numbers, int target) {
	// write your code here
}

int threeSumClosest(vector<int> &numbers, int target) {
	// write your code here
}