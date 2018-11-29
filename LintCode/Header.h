#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <map>
using namespace std;
class ListNode {
public:
	int val;
	ListNode *next;
	ListNode(int val) {
		this->val = val;
		this->next = NULL;

	}

};
/*
int binarySearch(vector<int> &nums, int target);

vector<vector<int>> permute(vector<int> &nums);

vector<string> fizzBuzz(int n);
int binarySearch(vector<int> &nums, int target);


int nthUglyNumber(int n);
int  sumAandB(int a, int b);
int digitCounts(int k, int n);
int countTailZero(int n);
int kthLargestElement(int n, vector<int> &nums);
void rotateString(string &str, int offset);

vector<vector<int>> permuteUnique(vector<int> &nums);
bool searchMatrix(vector<vector<int>> &matrix, int target);
vector<vector<int>> subsets(vector<int> &nums);


vector<pair<int, double>> dicesSum(int n);

vector<int> flatten(vector<NestedInteger> &nestedList);

bool isInterleave(string &s1, string &s2, string &s3);
int partitionArray(vector<int> &nums, int k);
vector<vector<string>> solveNQueens(int n);
*/
vector<vector<int>> subsetsWithDup(vector<int> &nums);
void recoverRotatedSortedArray(vector<int> &nums);
string reverseWords(string &s);
int atoi(string &str);