
#include "Header.h"
int binarySearch(vector<int> &nums, int target) {
	// write your code here

	int left = 0;
	int right = nums.size();
	int mid = 0;
	while (left <= right){
		mid = (left + right) / 2;
		if (nums[mid] == target){
			int tmp = mid;
			int flag = 1;
			while (flag == 1){
				if (nums[tmp] == target){
					mid = tmp;
					tmp--;
				}
				else{
					flag = 0;
				}
			}
			return mid;
		}
		if (nums[mid] < target){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	return -1;
}