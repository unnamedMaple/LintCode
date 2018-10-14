#include "Header.h"
bool searchMatrix(vector<vector<int>> &matrix, int target) {
	// write your code here

	int left = 0;
	int right = matrix.size()-1;
	int mid = 0;


	if (matrix.size() == 0){
		return false;
	}
	

	while (left <= right){
		mid = (left + right) / 2;
		if (right - left == 0){
			int index = 0;//binarySearch(matrix[left], target);
			if (index != -1){
				return true;
			}
			else{
				return false;
			}
		}

		if (matrix[mid-1][0] <= target && matrix[mid][0] > target){
			int index = 0;//binarySearch(matrix[mid-1],target);
			if (index != -1){
				return true;
			}
		}

		if (target < matrix[mid-1][0]){
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	if (right == matrix.size()){
		int index = 0;// binarySearch(matrix[right - 1], target);
		if (index != -1){
			return true;
		}
	}


	return false;
}