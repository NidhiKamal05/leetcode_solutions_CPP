
// 98. VALIDATE BINARY SEARCH TREE

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
    void inOrder(TreeNode* root, vector<int>& arr) {
        if(root) {
            inOrder(root->left, arr) ;
            arr.push_back(root->val) ;
            inOrder(root->right, arr) ;
        }
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> arr ;
        inOrder(root, arr) ;
        for(int i=0; i<arr.size()-1; ++i) {
            if(arr[i] >= arr[i+1]) {
                return false ;
            }
        }
        return true ;
    }
};
 
 
 

/** WRONG ANSWER **/ 
// class Solution {
// public:
    // bool isValidBST(TreeNode* root) {
        // if(root) {
            // if(root->left && (root->left->val > root->val)) {
                // return false ;
            // }
            // if(root->right && (root->right->val < root->val)) {
                // return false ;
            // } 
            // isValidBST(root->left) ;
            // isValidBST(root->right) ;
        // }
        // return true ;
    // }
// };