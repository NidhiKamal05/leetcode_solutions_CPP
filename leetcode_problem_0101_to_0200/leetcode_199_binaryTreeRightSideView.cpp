
// 199. BINARY TREE RIGHT SIDE VIEW

#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
}

vector<int> rightSideView(TreeNode* root) {
	vector<int> ans ;
	if(root) {
		queue<TreeNode*> q ;
		q.push(root) ;
		while(!q.empty()) {
			int currSize = q.size() ;
            int n = currSize ;
			for(int i=0; i<currSize; ++i) {
				TreeNode *node = q.front() ;
				q.pop() ;
				if(n == 1) {
					ans.push_back(node->val) ;
				}
				--n ;
				if(node->left) {
					q.push(node->left) ;
				}
				if(node->right) {
					q.push(node->right) ;
				}
			}
		}
	}
	return ans ;
}