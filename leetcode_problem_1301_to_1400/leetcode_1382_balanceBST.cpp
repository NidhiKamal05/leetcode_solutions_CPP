
// 1382. BALANCE A BINARY SEARCH TREE

/** C++ **/
// https://leetcode.com/problems/balance-a-binary-search-tree/solutions/7566008/c-simple-easy-solution-depth-first-searc-ni8d/

/** JAVA **/
// https://leetcode.com/problems/balance-a-binary-search-tree/solutions/7566049/java-solution-runtime-beats-9782-by-nidh-079m/

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
    void dfs(TreeNode* root, vector<int>& arr) {
        if(root) {
            dfs(root->left, arr) ;
            arr.push_back(root->val) ;
            dfs(root->right, arr) ;
        }
    }
    TreeNode* construct(const vector<int>& arr, int start, int end) {
        if(start > end) {
            return NULL ;
        }
        int mid = start + (end - start) / 2 ;
        TreeNode* root = new TreeNode(arr[mid]) ;
        root->left = construct(arr, start, mid - 1) ;
        root->right = construct(arr, mid + 1, end) ;
        return root ;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr ;
        dfs(root, arr) ;
        return construct(arr, 0, arr.size()-1) ;
    }
};