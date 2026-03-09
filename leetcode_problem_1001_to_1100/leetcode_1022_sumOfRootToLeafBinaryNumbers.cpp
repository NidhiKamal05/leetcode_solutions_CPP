
// 1022. SUM OF ROOT TO LEAF BINARY NUMBERS

/** T.C. - O(N) & S.C. - O(H) **/

/* C++ */
// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/solutions/7604251/c-solution-runtime-beats-100-on-by-nidhi-d9if/

/* JAVA */
// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/solutions/7604258/java-on-solution-runtime-beats-100-easy-v38hw/

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
    int dfs(TreeNode* node, int sum) {
        if(node == NULL) {
            return 0 ;
        }
        sum = (sum << 1) + node->val ;
        if(node->left == NULL && node->right == NULL) {
            return sum ;
        }
        return dfs(node->left, sum) + dfs(node->right, sum) ;
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0) ;
    }
};