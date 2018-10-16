
#include "Header.h"

int main(){
	/*
	int num[] = { 4,1,0 };
	vector<int> nums(&num[0],&num[3]);

	vector<vector<int>>p = subsets(nums);
	
	for (int j = 0; j < p.size(); j++){
		vector<int> it = p[j];
		for (int i = 0; i < it.size(); i++){
			cout << it[i] << " ";
		}
		cout << endl;
	}
	

	vector<pair<int, double>>list = dicesSum(2);
	for (int i = 0; i < list.size(); i++){
		pair<int, double>p = list[i];
		cout << p.first << " " << p.second << endl;
	}
	

	string s1 = "aabcc";
	string s2 = "dbbca";
	string s3 = "aadbbbaccc";

	if (isInterleave(s1,s2,s3)){
	
	
		cout << "yes";
	}
	else{
		cout << s1.length() << " " << s2.length() << " " << s3.length();
		cout << "no";
	}
	

	int num[] = { 4, 1, 0 };
	vector<int> nums(&num[0], &num[3]);
	vector<int>::iterator itL = nums.begin(), itR = nums.begin()+1;
	itL = nums.erase(itL);
	itR = nums.erase(itR);

	for (itR = nums.begin(); itR != nums.end(); itR++){
		cout << *itR << " ";
	}
	

	int num[] = { 3, 2, 2,1 };

	vector<int> nums(&num[0], &num[4]);

	//cout<<partitionArray(nums, 2);
	vector<int>::iterator itR;

	nums.insert(nums.begin() + 1, 4);
	nums.erase(nums.begin() + 1);
	for (itR = nums.begin(); itR != nums.end(); itR++){
		cout << *itR << " ";
	}
	*/

	vector<vector<string>>q = solveNQueens(4);
	for (int i = 0; i < q.size(); i++){
		vector<string>t = q[i];
		for (int j = 0; j < t.size(); j++){
			cout << t[j] << "  ";
		}
		cout << endl;
	}

	while (1);
	return 0;
}