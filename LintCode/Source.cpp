
#include "Header.h"
using namespace std;
int main(){
	int num[] = { 1, 2, 3 };
	vector<int> nums(&num[0],&num[3]);

	vector<vector<int>>p = permute(nums);

	for (int j = 0; j < p.size(); j++){
		vector<int> it = p[j];
		for (int i = 0; i < it.size(); i++){
			cout << it[i] << " ";
		}
		cout << endl;
	}
	while (1);
	return 0;
}