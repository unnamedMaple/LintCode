
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

void minHeap(vector<int> &nums, int size,int i){
	
	int left = i * 2 + 1;
	int right = i * 2 + 2;
	int min = i;
	if (left < size){
		if (nums[left] < nums[min]){
			min = left;
		}
	}
	if (right < size){
		if (nums[right] < nums[min]){
			min = right;
		}
	}
	if (min != i){
		int tmp = nums[i];
		nums[i] = nums[min];
		nums[min] = tmp;
		minHeap(nums, size, min);
	}

}

int kthLargestElement(int n, vector<int> &nums) {
	// write your code here

	/*quik 
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
	
	for (int i = n - 1; i >= 0; i--){
		minHeap(nums, n, i);
	}
	for (int i = n; i < nums.size(); i++){
		if (nums[i]>nums[0]){
			int tmp = nums[0];
			nums[0] = nums[i];
			nums[i] = tmp;
			minHeap(nums, n, 0);
		}
	}
	return nums[0];
}