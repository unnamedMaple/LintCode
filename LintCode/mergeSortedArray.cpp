#include "Header.h"
vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
	// write your code here
	vector<int> C;
	C.resize(A.size() + B.size());
	merge(A.begin(), A.end(), B.begin(), B.end(), C.begin());
	return C;

}