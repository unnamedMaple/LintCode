
#include "Header.h"
using namespace std;
int main(){
	int num[] = { 1, 2, 3, 3, 4, 5, 10 };
	vector<int> nums(&num[0], &num[7]);
	cout << binarySearch(nums, 0);
	while (1);
	return 0;
}