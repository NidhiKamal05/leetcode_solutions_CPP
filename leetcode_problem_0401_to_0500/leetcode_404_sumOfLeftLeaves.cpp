
// 404. SUM OF LEFT LEAVES

#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
}

/*** BFS ***/
int sumOfLeftLeaves(TreeNode* root) {
    int sum = 0 ;
    queue<TreeNode*> q ;
    q.push(root) ;
    while(!q.empty()) {
        int currSize = q.size() ;
        for(int i=0; i<currSize; ++i) {
            TreeNode *node = q.front() ;
            q.pop() ;
            if(node->left && !node->left->left && !node->left->right) {
                sum += node->left->val ;
            }
            if(node->left) {
                q.push(node->left) ;
            }
            if(node->right) {
                q.push(node->right) ;
            }
        }
    }
    return sum ;
}

/*** DFS ***/
/**
 * Definition for a binary tree root.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/*class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) {
            return 0 ;
        }
        int sum = 0 ;
        if(root->left && !root->left->left && !root->left->right) {
            sum += root->left->val ;
        }
        sum += sumOfLeftLeaves(root->left) ;
        sum += sumOfLeftLeaves(root->right) ;
        return sum ;
    }
};*/