
// 501. FIND MODE IN BINARY SEARCH TREE

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
    void dfs(TreeNode* root, unordered_map<int, int>& freq) {
        if(root) {            
            freq[root->val]++ ;
            dfs(root->left, freq) ;
            dfs(root->right, freq) ;
        }
    }
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> freq ;
        dfs(root, freq) ;
        int maxFreq = 0 ;
        for(auto& f : freq) {
            maxFreq = max(maxFreq, f.second) ;
        }
        vector<int> ans ;
        for(auto& f : freq) {
            if(f.second == maxFreq) {
                ans.push_back(f.first) ;
            }
        }
        return ans ;
    }
};