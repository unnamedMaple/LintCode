#include "Header.h"
int partitionArray(vector<int> &nums, int k) {
	// write your code here
	int left = 0;
	int right = nums.size() - 1;
	int tmp = k;

	while (left < right){
		while (nums[right] >= tmp){
			right--;
		}
		
		while (nums[left] < tmp){
			left++;
		}

		if (left < right){
			int num = nums[left];
			nums[left] = nums[right];
			nums[right] = num;

		}
		
	}
	return right+1;

}