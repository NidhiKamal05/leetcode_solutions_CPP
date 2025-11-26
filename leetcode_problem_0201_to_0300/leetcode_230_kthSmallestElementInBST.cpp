
// 230. KTH SMALLEST ELEMENT IN A BST

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
    void inOrder(TreeNode* root, int& cnt, int k, int& ans) {
        if(!root) {
            return ;
        }
        inOrder(root->left, cnt, k, ans) ;
        ++cnt ;
        if(cnt == k) {
            ans = root->val ;
            return ;
        }
        inOrder(root->right, cnt, k, ans) ;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0, cnt = 0 ;
        inOrder(root, cnt, k, ans) ;
        return ans ;
    }
};