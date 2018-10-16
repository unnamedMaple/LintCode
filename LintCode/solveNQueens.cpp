#include "Header.h"

vector<vector<string>> solveNQueens(int n) {
	// write your code here

	vector<vector<string>>ret;
	if (n == 0){
		return ret;
	}

	string origin = "Q";
	vector<string>strL;
	strL.push_back(origin);

	
	ret.push_back(strL);
	
	for (int i = 1; i < n; i++){


		string newLine = "Q";
		for (int j = 0; j < i; j++){
			newLine += ".";

		}
		int presize = ret.size();

		for (int j = 0; j <presize; j++){
			vector<string>tmp = ret[0];

			for (int k = 0; k < tmp.size();k++){
				tmp[k] = "." + tmp[k];
			}

			for (int k = 0; k < i + 1; k++){
				vector<string>newQue;
				tmp.insert(tmp.begin() + k, newLine);
				newQue = tmp;
				ret.push_back(newQue);
				tmp.erase(tmp.begin() + k);
			}
			ret.erase(ret.begin());

		}
	}
	return ret;

}