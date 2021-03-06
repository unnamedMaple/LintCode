
#include "Header.h"
int searchInsert(vector<int> &A, int target) {
	// write your code here

	if (A.size() == 0){
		return 0;
	}

	int left = 0;
	int right = A.size() - 1;
	int mid = 0;


	while (left <= right){
		mid = (left + right) / 2;
		if (A[mid] == target){

			return mid;
		}
		if (A[mid] < target){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}

	if (A[mid] < target){
		return mid + 1;
	}

	return mid;

}