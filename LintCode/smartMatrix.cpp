#include "Header.h"
bool searchMatrix(vector<vector<int>> &matrix, int target) {
	// write your code here
	if (matrix.size() == 0)
		return false;
	int i = 0;
	for (i = 0; i<matrix.size(); i++)
	{
		if (matrix[i][0] == target)
			return true;
		else if (matrix[i][0]>target)
		{
			break;
		}
	}
	int n1 = 0;
	int n = matrix[i - 1].size();
	int a = 0, b = n - 1;
	if (matrix[i - 1][n - 1] == target)
		return true;
	if (n == 1 & matrix[i - 1][0] != target)
		return false;
	while (a <= b)
	{
		n1 = (b + a) / 2;
		if (matrix[i - 1][n1] == target)
		{
			for (int i = 0; i<n1; i++)
			{
				if (matrix[i - 1][n1 - 1] == target)
				{
					n1--;
				}
				else
					break;
			}
			return true;
		}
		else if (matrix[i - 1][n1]>target)
		{
			b = n1 - 1;
		}
		else
		{
			a = n1 + 1;
		}
	}
	return false;
}
