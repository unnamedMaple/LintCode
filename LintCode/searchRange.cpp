#include "Header.h"
 class TreeNode {
 public:
     int val;
     TreeNode *left, *right;
     TreeNode(int val) {        
		this->val = val;
        this->left = this->right = NULL;
     }
 };


 void midSearch(vector<int> ret, TreeNode * node,int k1,int k2){

 }

vector<int> searchRange(TreeNode * root, int k1, int k2) {
	// write your code here
	TreeNode *tmp = root;
	vector<int> ret;
	stack<TreeNode *>mystack;
	
	
	while (tmp != NULL || !mystack.empty()){

		if (tmp == NULL){

			tmp = mystack.top();
			mystack.pop();

			
			if (tmp->val > k2){
				break;
			}

			if (tmp->val >= k1){
				ret.push_back(tmp->val);
			}
			
			

			tmp = tmp->right;

		}
		else
		{
			
			
			mystack.push(tmp);
			tmp = tmp->left;
		}
		
	}
	return ret;
}