
// 145. BINARY TREE POSTORDER TRAVERSAL

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

vector<int> postorderTraversal(TreeNode * root)
{
	if(root == NULL)
		return r ;
	else{
	    postorderTraversal(root->left) ;
	    postorderTraversal(root->right) ;
		r.push_back(root->val) ;
	}
	return r ;
}