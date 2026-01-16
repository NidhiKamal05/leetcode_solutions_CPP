
// 1448. COUNT GOOD NODES IN BINARY TREE

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
    void dfs(TreeNode* root, int curMax, int& cnt) {
        if(root) {
            if(root->val >= curMax) {
                ++cnt;
                curMax = root->val ;
            }
            dfs(root->left, curMax, cnt) ;
            dfs(root->right, curMax, cnt) ;
        }
    }
public:
    int goodNodes(TreeNode* root) {
        int cnt = 0 ;
        dfs(root, root->val, cnt) ;
        return cnt ;
    }
};