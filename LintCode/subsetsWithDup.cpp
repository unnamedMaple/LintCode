#include "Header.h"


vector<vector<int>> reSubsetsWithDup(vector<int> &nums){
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
	int dup = 0;
	for (int i = 1; i < nums.size(); i++){
		if (nums[i] == fir){
			dup = 1;
		}
		subnums.push_back(nums[i]);
	}
	vector<vector<int>>sub = reSubsetsWithDup(subnums);
	for (int j = 0; j < sub.size(); j++){
		vector<int>tmp = sub[j];
		if (dup >= 1){
			int du = 0;
			for (int k = 0; k<tmp.size(); k++){
				if (tmp[k] == fir){
					du++;
				}
			}

			if (du == dup){
				tmp.insert(tmp.begin(), fir);
				ret.push_back(tmp);
			}
		}
		else{
			tmp.insert(tmp.begin(), fir);
			ret.push_back(tmp);
		}
		
	}
	ret.insert(ret.end(), sub.begin(), sub.end());
	return ret;
}

vector<vector<int>> subsetsWithDup(vector<int> &nums) {
	// write your code here
	sort(nums.begin(), nums.end());
	vector<vector<int>>ret = reSubsetsWithDup(nums);
	return ret;
}