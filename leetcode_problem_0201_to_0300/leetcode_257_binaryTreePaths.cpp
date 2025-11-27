
// 257. BINARY TREE PATHS

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
    void paths(TreeNode* node, string s, vector<string>& allPaths) {
        if(!node) {
            return ;
        }
        s += to_string(node->val) ;
        if(!node->left && !node->right) {
            allPaths.push_back(s) ;
        }
        else {
            s.append("->") ;
        }
        paths(node->left, s, allPaths) ;
        paths(node->right, s, allPaths) ;
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> allPaths ;
        string s ;
        paths(root, s, allPaths) ;
        return allPaths ;
    }
};