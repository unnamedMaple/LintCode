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

int maxSubArray2(vector<int> &nums){
	int max = -9999;
	int n = nums.size();
	int *left = new int[n];
	int *right = new int[n];

	int minus = 0;

	for (int i = 0; i < nums.size(); i++){
		minus += nums[i];
		if (minus > max){
			max = minus;
		}
		if (minus<0){
			minus = 0;
		}
		left[i] = max;
	}

	max = -99999;
	minus = 0;
	for (int i = nums.size()-1; i>=0; i--){
		minus += nums[i];
		if (minus > max){
			max = minus;
		}
		if (minus<0){
			minus = 0;
		}
		right[i] = max;
	}

	max = -99999;
	minus = 0;
	for (int i = 0; i < nums.size() - 1; i++){
		minus = left[i] + right[i+1];
		if (minus > max){
			max = minus;
		}
	}

	return max;
}


int maxSubArrayK(vector<int> &nums, int left, int right, int k){
	int max = -9999;
	int minus = 0;
	if (k == 1){
		for (int i = 0; i < right - left; i++){
			minus += nums[left + i];
			if (minus > max){
				max = minus;
			}
			if (minus < 0){
				minus = 0;
			}
		}
		return max;
	}

	if (k >= 2){
		int *lefts = new int[right - left + 1];
		int *rights = new int[right - left + 1];
		max = -99999;
		minus = 0;
		for (int i = 0; i < right - left+1; i++){
			minus += nums[left+i];
			if (minus > max){
				max = minus;
			}
			if (minus<0){
				minus = 0;
			}
			lefts[i] = max;
		}

		max = -99999;
		minus = 0;
		for (int i = right - left - 1; i >= 0; i--){
			minus += nums[i];
			if (minus > max){
				max = minus;
			}
			if (minus<0){
				minus = 0;
			}
			rights[left+i] = max;
		}
		if (k == 2){
			max = -99999;
			minus = 0;
			for (int i = 0; i < right - left; i++){
				minus = lefts[i] + rights[i + 1];
				if (minus > max){
					max = minus;
				}
			}

			return max;
		}
		else{
			max = -99999;
			minus = 0;
			for (int i = 0; i <= right - left - 2; i++){
				for (int j = right - left; j > i + 1; j--){
					minus = lefts[i] + maxSubArrayK(nums, left + i + 1, left + j - 1, k - 2)+rights[j];
					if (minus > max){
						max = minus;
					}
				}
			}
			return max;
		}

	}

}


int maxSubArray3(vector<int> &nums, int k) {
	// write your code here



	int max = maxSubArrayK(nums,0,nums.size()-1,k);
	return max;

}


int maxDiffSubArrays(vector<int> &nums){
	int max;

	return max;
}