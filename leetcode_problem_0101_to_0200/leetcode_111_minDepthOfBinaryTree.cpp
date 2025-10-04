
// 111. MINIMUM DEPTH OF BINARY TREE

#include<iostream>
#include<queue>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
}

int minDepth(TreeNode* root) {
	int cnt = 0 ;
	if(root) {
		queue<TreeNode*> q ;
		q.push(root) ;
		while(!q.empty()) {
			int currSize = q.size() ;
			++cnt ;
			for(int i=0; i<currSize; ++i) {
				TreeNode *tempNode = q.front() ;
				q.pop() ;
				if(!tempNode->left && !tempNode->right) {
					return cnt ;
				}
				if(tempNode->left) {
					q.push(tempNode->left) ;
				}
				if(tempNode->right) {
					q.push(tempNode->right) ;
				}
			}
		}
	}
	return cnt ;
}