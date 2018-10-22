#include "Header.h"
vector<long long> productExcludeItself(vector<int> &nums) {
	// write your code here
	vector<long long>ret;
	long long tmp = 1;
	for (int i = 0; i < nums.size(); i++){
		tmp = 1;
		for (int j = 0; j < nums.size(); j++){
			if (j != i){
				tmp *= nums[j];
			}
		}
		ret.push_back(tmp);
	}
	return ret;
}