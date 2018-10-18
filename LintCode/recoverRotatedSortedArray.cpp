#include "Header.h"

void recoverRotatedSortedArray(vector<int> &nums) {
	// write your code here

	int i = 0;
	int m = nums.size();
	if (m == 0){
		return;
	}
	for (i = 0; i < m - 1; i++){
		if (nums[i + 1] < nums[i]){
			break;
		}
	}
	int tmp = i;
	for (i=0; i <=tmp; i++){
		nums.push_back(nums[i]);

	}
	nums.erase(nums.begin(), nums.begin() + tmp+1);
}