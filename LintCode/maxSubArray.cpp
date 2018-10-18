#include "Header.h"
int maxSubArray(vector<int> &nums) {
	// write your code here
	int minus = 0;
	int max = -9999;
	for (int i = 0; i < nums.size(); i++){
		minus += nums[i];
		if (minus > max){
			max = minus;
		}
		if(minus<0){
			minus = 0;
		}
	}
	return max;
}