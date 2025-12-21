
// 114. FLATTEN BINARY TREE TO LINKED LIST

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root) {
            return ;
        }
        flatten(root->left) ;
        flatten(root->right) ;
        TreeNode *tempRightNode = root->right ;
        root->right = root->left ;
        root->left = NULL ;
        TreeNode *currentNode = root ;
        while(currentNode->right) {
            currentNode = currentNode->right ;
        }
        currentNode->right = tempRightNode ;
    }
};