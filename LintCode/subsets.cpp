#include "Header.h"

vector<vector<int>> reSubsets(vector<int> &nums){
	vector<vector<int>>ret;


	if (nums.size() == 0){
		vector<int>empty;
		ret.push_back(empty);
		return ret;
	}
	if (nums.size() == 1){
		vector<int>empty;
		ret.push_back(empty);
		ret.push_back(nums);
		return ret;
	}


	int fir = nums[0];

	vector<int>subnums;
	for (int i = 1; i < nums.size(); i++){
		subnums.push_back(nums[i]);
	}

	vector<vector<int>>sub = reSubsets(subnums);
	for (int j = 0; j < sub.size(); j++){
		vector<int>tmp = sub[j];
		tmp.insert(tmp.begin(), fir);
		ret.push_back(tmp);
	}
	ret.insert(ret.end(), sub.begin(), sub.end());

	return ret;
}



vector<vector<int>> subsets(vector<int> &nums) {
	// write your code here
	sort(nums.begin(),nums.end());
	vector<vector<int>>ret = reSubsets(nums);
	return ret;
}