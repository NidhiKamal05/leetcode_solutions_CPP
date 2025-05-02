
// 108. CONVERT SORTED ARRAY TO BINARY SEARCH TREE

#include<iostream>
#include<vector>

using namespace std ;

struct TreeNode{
	int val ;
	TreeNode *left ;
	TreeNode *right ;
} ;

TreeNode * helper(vector<int> & nums, int start, int end){
	int mid = (start+((end-start)/2)) ;
	TreeNode *t = new TreeNode(nums.at(mid)) ;
	t->left = helper(nums, start, mid-1) ;
	t->right = helper(nums, mid+1, end) ;
	return t ;
}

TreeNode * sortedArrayToBST(vector<int> & nums){
	return helper(nums, 0, nums.size()-1) ;
}