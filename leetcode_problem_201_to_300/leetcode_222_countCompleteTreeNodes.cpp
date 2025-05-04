
// 222. COUNT COMPLETE TREE NODES

#include<iostream>
#include<queue>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
} 

// BFS
int countNodes(TreeNode* root) {
	int nodeCount = 0 ;
	if(root) {
		queue<TreeNode*> q ;
		q.push(root) ;
		while(!q.empty()) {
			int currSize = q.size() ;
			nodeCount += currSize ;
			for(int i=0; i<currSize; ++i) {
				TreeNode *tempNode = q.front() ;
				q.pop() ;
				if(tempNode->left) {
					q.push(tempNode->left) ;
				}
				if(tempNode->right) {
					q.push(tempNode->right) ;
				}
			}
		}
	}
	return nodeCount ;
}

// DFS
int countNodes(TreeNode* root) {
	if(!root) {
		return 0 ;
	}
	return 1 + countNodes(root->left) + countNodes(root->right) ;
}