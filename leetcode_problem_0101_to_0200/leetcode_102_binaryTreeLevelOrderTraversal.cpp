
// 102. BINARY TREE LEVEL ORDER TRAVERSAL

#include<iostream>
#include<queue>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
} ;

vector<vector<int>> levelOrder(TreeNode* root) {
	vector<vector<int>> levelOrder ;
	if(root) {
		vector<int> v ;
		queue<TreeNode*> q ;
		q.push(root) ;
		while(!q.empty()) {
			int currSize = q.size() ;
			for(int i=0; i<currSize; ++i) {
				TreeNode *tempNode = q.front() ;
				q.pop() ;
				v.push_back(tempNode->val) ;
				if(tempNode->left) {
					q.push(tempNode->left) ;
				}
				if(tempNode->right) {
					q.push(tempNode->right) ;
				}
			}
			levelOrder.push_back(v) ;
			v.clear() ;
		}
	}
	return levelOrder ;
}