
// 94. BINARY TREE INORDER TRAVERSAL

#include<iostream>
#include<vector>

using namespace std ;

struct TreeNode
{
	int val ;
	TreeNode *left ;
	TreeNode *right ;
}

vector<int> r{} ;

vector<int> inorderTraversal(TreeNode * root)
{
	if(root == NULL)
		return r ;
	else{
	    inorderTraversal(root->left) ;
	    r.push_back(root->val) ;
	    inorderTraversal(root->right) ;
	}
	return r ;
}