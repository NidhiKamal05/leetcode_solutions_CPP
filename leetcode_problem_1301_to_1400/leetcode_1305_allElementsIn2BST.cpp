
// 1305. ALL ELEMENTS IN TWO BINARY SEARCH TREE

#include<iostream>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
}

void inorder(TreeNode* root, vector<int>& ans) {
	if(root) {
		inorder(root->left, ans) ;
		ans.push_back(root->val) ;
		inorder(root->right, ans) ;
	}
}

vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
	vector<int> elements ;
	inorder(root1, elements) ;
	inorder(root2, elements) ;
	sort(elements.begin(), elements.end()) ;
	return elements ;
}