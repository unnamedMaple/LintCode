#include "Header.h"



vector<vector<int>> permute(vector<int> &nums) {
	// write your code here
	vector<vector<int>>ret;
	if (nums.size() == 0){
		vector<int>p;
		ret.push_back(p);
		return ret;
	}
	if (nums.size() == 1){
		vector<int>p;
		p.push_back(nums[0]);
		
		ret.push_back(p);
		return ret;
	}
	
	for (int i = 0; i < nums.size(); i++){
		
		vector<int>sub;
		for (int j = 0; j < nums.size(); j++){
			if (j != i){
				sub.push_back(nums[j]);
			}
		}
		vector<vector<int>> subret = permute(sub);
		for (int k = 0; k < subret.size(); k++){
			vector<int>newv;
			newv.insert(newv.end(),nums[i]); 
			newv.insert(newv.end(), subret[k].begin(), subret[k].end());
			ret.push_back(newv);
		}
	}
	return ret;
}