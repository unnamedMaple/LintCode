
#include "Header.h"
using namespace std;
int main(){
	int a[5] = { 9, 3, 2, 4, 8 };
	vector<int> nums(a, a + 5);
	int n = 3;

	cout << kthLargestElement(3,nums);
	while (1);
	return 0;
}