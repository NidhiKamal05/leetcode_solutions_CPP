
// 2265. COUNT NODES EQUALS TO AVERAGE OF SUBTREE

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
    pair<int, int> dfs(TreeNode* root, int& nodes) {
        if(!root) {
            return {0, 0} ;
        }
        pair<int, int> leftSubtree = dfs(root->left, nodes) ;
        pair<int, int> rightSubtree = dfs(root->right, nodes) ;
        int sum = root->val + leftSubtree.first + rightSubtree.first ;
        int cnt = 1 + leftSubtree.second + rightSubtree.second ;
        int avg = sum / cnt ;
        if(avg == root->val) {
            ++nodes ;
        }
        return {sum, cnt} ;
    }
public:
    int averageOfSubtree(TreeNode* root) {
        int nodes = 0 ;
        dfs(root, nodes) ;
        return nodes ;
    }
};