
#include "Header.h"
int searchMatrix(vector<vector<int>> &matrix, int target) {
	// write your code here
	if (matrix.size() == 0){
		return 0;
	}

	int count = 0;
	int m = matrix.size();
	int n = matrix[0].size();
	int i = 0;
	int j = n-1;
	

	while (j >= 0 && i <= m - 1){
		if (matrix[i][j] > target){
			j--;
		}
		else if (matrix[i][j] == target){
			count++;
			i++;
			j--;
		}
		else{
			i++;
		}
	}


	return count;

}