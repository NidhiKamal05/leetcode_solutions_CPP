
// 951. FIND EQUIVALENT BINARY TREES


// # Complexity
// - Time complexity: O(Min(N1,N2)) Where N1 And N2 Are The Number Of Nodes In The Trees

// - Space complexity: O(Min(H1,H2)) Where H1 And H2 Are The Heights Of  The Trees


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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) {
            return true ;
        }
        if((root1 && !root2) || (root2 && !root1)) {
            return false ;
        }
        if(root1->val != root2->val) {
            return false ;
        }
        bool swap = flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left) ;
        bool noSwap = flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right) ;
        return swap || noSwap ;
    }
};