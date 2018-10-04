
#include "Header.h"

int partition(vector<int> &nums, int left, int right){
	int tmp = nums[left];
	while (left < right){
		while (nums[right] < tmp && left < right){
			right--;
		}
		nums[left] = nums[right];
		while (nums[left] > tmp && left < right){
			left++; 
		}
		nums[right] = nums[left];

	}
	nums[left] = tmp;
	return left;
}

void minHeap(vector<int> &nums, int size){
	int i = 0;
	int left = i * 2 + 1;
	int right = i * 2 + 2;
	int flag = 0;
	while (flag != 1){
		
	}
}

int kthLargestElement(int n, vector<int> &nums) {
	// write your code here

	/*
	int left = 0;
	int right = nums.size() - 1;
	int pos = partition(nums, left, right);
	while (pos + 1 != n){
		if (pos + 1 < n){
			pos = partition(nums, pos + 1, right);
		}
		else if (pos + 1 > n){
			
			pos = partition(nums, left, pos + 1);
		}
	}
	return nums[pos];
	*/
	int par = 0;
	if (n + 1 % 2 == 0){
		par = n + 1 / 2 - 1;
	}
	else
	{
		par = n + 1 / 2;
	}
	for (int i = par; i >=0; i--){
		int small = i;
		if (nums[small] > nums[i * 2 + 1]){
			small = i * 2 + 1;
		}
		if (nums[small] > nums[i * 2 + 2]){
			small = i * 2 + 2;
		}
		if (small != i){
			int tmp = nums[i];
			nums[i] = nums[small];
			nums[small] = tmp;
		}
	}
	for (int i = n; i < nums.size(); i++){
		if (nums[0] < nums[i]){
			int tmp = nums[0];
			nums[0] = nums[i];
			nums[i] = tmp;
			minHeap(nums, n);
		}
	}
	
}