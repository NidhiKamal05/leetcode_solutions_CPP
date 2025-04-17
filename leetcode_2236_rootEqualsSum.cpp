
// 2236. ROOT EQUALS SUM OF CHILD

#include<iostream>

using namespace std ;

struct TreeNode{
	int val ;
	TreeNode *left ;
	TreeNode *right ;
} ;

bool checkTree(TreeNode * root){
	if(root->val == (root->left->val + root->right->val))
		return true ;
	return false ;
}

int main(){
	TreeNode *root ;
	TreeNode *p ;
	TreeNode *q ;
	
	bool ans ;
	
	cout << endl ;
	cout << " ROOT EQUALS SUM OF CHILD " << endl ;
	cout << "**************************" << endl ;
	
	root = new TreeNode ;
	p = new TreeNode ;
	root->left = p ;
	q = new TreeNode ;
	root->right = q ;
	p->left = NULL ;
	p->right = NULL ;
	q->left = NULL ;
	q->right = NULL ;
	
	// root->val = 10 ;
	// root->left->val = 4 ;
	// root->right->val = 6 ;
	
	root->val = 5 ;
	root->left->val = 3 ;
	root->right->val = 1 ;
	
	ans = checkTree(root) ;
	
	cout << endl ;
	if(ans == 1)
		cout << "TRUE" ;
	else
		cout << "FALSE" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}