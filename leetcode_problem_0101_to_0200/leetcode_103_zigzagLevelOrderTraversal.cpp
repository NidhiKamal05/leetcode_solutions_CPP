
// 103. BINARY TREE ZIGZAG LEVEL ORDER TRAVERSAL

#include<iostream>
#include<queue>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
}

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
	vector<vector<int>> zigzagLevelOrder ;
	if(root) {
		int x = -1 ;
		queue<TreeNode*> q ;
		q.push(root) ;
		while(!q.empty()) {
			vector<int> v ;
			int currSize = q.size() ;
			x *= (-1) ;
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
			if(x == -1) {
				reverse(v.begin(), v.end()) ;
			}
			zigzagLevelOrder.push_back(v) ;
		}
	}
	return zigzagLevelOrder ;
}