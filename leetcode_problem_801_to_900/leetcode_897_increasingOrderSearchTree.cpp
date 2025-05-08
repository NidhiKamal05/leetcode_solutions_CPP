
// 897. INCREASING ORDER SEARCH TREE

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
private:
    void inorderTraversal(TreeNode*& node, TreeNode* root) {
        if(root != NULL) {
            inorderTraversal(node, root->left) ;
            node->left = NULL ;
            node->right = new TreeNode(root->val) ;
            node = node->right ;
            inorderTraversal(node, root->right) ;
        }
    }

public:
    TreeNode* increasingBST(TreeNode * root) {
        TreeNode* dummy = new TreeNode() ;
        TreeNode* node = new TreeNode() ;
        dummy = node ;
        inorderTraversal(node, root) ;
        return dummy->right ;
    }
};