
#include "Header.h"
using namespace std;
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
	*/

	vector<pair<int, double>>list = dicesSum(2);
	for (int i = 0; i < list.size(); i++){
		pair<int, double>p = list[i];
		cout << p.first << " " << p.second << endl;
	}
	while (1);
	return 0;
}