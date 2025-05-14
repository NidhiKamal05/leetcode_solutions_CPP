
// 144. BINARY TREE PREORDER TRAVERSAL

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

vector<int> preorderTraversal(TreeNode * root)
{
	if(root == NULL)
		return r ;
	else{
		r.push_back(root->val) ;
	    preorderTraversal(root->left) ;
	    preorderTraversal(root->right) ;
	}
	return r ;
}