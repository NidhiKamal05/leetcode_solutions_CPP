
// 700. SEARCH IN A BINARY SEARCH TREE

#include<iostream>

using namespace std ;

struct TreeNode
{
	int val ;
	TreeNode *left ;
	TreeNode *right ;
}

TreeNode * searchBST(TreeNode * root, int val)
{
	if(root == NULL)
		return NULL ;
	if(val < root->val)
	    return searchBST(root->left, val) ;
	else if(val > root->val)
	    return searchBST(root->right, val) ;
	else
		return root ;
	return NULL ;
}