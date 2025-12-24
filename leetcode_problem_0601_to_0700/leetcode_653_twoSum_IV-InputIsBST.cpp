
// 653. TWO SUM IV - INPUT IS A BST

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
    void dfs(TreeNode* root, vector<int>& v) {
        if(root) {
            dfs(root->left, v) ;
            v.push_back(root->val) ;
            dfs(root->right, v) ;
        }
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v ;
        dfs(root, v) ;
        int i = 0 ;
        int j = v.size()-1 ;
        while(i < j) {
            if(v[i]+v[j] > k) {
                --j ;
            }
            else if(v[i]+v[j] < k) {
                ++i ;
            }
            else {
                return true ;
            }
        }
        return false ;
    }
};