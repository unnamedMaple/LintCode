#include "Header.h"
vector<vector<string> > res;

vector<vector<string>> solveNQueens(int n) {
	// write your code here
	if (n == 0){
		return res;
	}

	vector<int>Q(n, -1);
	reNqueens(Q, 0);
	
	return res;

	
}

void reNqueens( vector<int>&Q, int n){
	int size = Q.size();
	if (n == size){
		vector<string>tmpres(n, string(n, '.'));
		for (int i = 0; i < n; i++)
			tmpres[i][Q[i]] = 'Q';
		res.push_back(tmpres);
		return;
	}

	for (int col = 0; col < n; col++)
		if (isValid(Q, n, col))
		{
			Q[n] = col;
			reNqueens(Q, n + 1);
			Q[n] = -1;;
		}
}


bool isValid(vector<int> &state, int row, int col)
{
	for (int i = 0; i < row; i++)
		if (state[i] == col || abs(row - i) == abs(col - state[i]))
			return false;
	return true;
}