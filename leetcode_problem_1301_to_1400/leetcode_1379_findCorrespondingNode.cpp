
// 1379. FIND A CORRESPONDING NODE OF A BINARY TREE IN A CLONE OF THAT TREE

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
    TreeNode* ans ;
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original) {
            getTargetCopy(original->left, cloned->left, target) ;
            if(original == target) {
                ans = cloned ;
            }
            getTargetCopy(original->right, cloned->right, target) ;
        }
        return ans ;
    }
};