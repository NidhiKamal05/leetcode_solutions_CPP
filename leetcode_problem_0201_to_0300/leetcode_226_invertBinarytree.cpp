
// 226. INVERT BINARY TREE

#include<iostream>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
} ;

TreeNode* invertTree(TreeNode* root) {
	if(!root)
		return root ;
	TreeNode *temp = new TreeNode ;
	temp = root->left ;
	root->left = root->right ;
	root->right = temp ;
	invertTree(root->left) ;
	invertTree(root->right) ;
	return root ;
}