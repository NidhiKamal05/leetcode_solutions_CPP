
// 515. FIND LARGEST VALUE IN EACH TREE ROW

#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

vector<int> largestValues(TreeNode* root) {
	vector<int> ans ;
	if(!root) {
		return ans ;
	}
	queue<TreeNode*> q ;
	q.push(root) ;
	while(!q.empty()) {
		int currSize = q.size() ;
		int currMax = INT_MIN ;
		for(int i=0; i<currSize; ++i) {
			TreeNode *node = q.front() ;
			q.pop() ;
			currMax = max(currMax, node->val) ;
			if(node->left) {
				q.push(node->left) ;
			}
			if(node->right) {
				q.push(node->right) ;
			}
		}
		ans.push_back(currMax) ;
	}
	return ans ;
}

int main() {
	
	
	system("pause") ;
	
	return 0 ;
}