
// 110. BALANCED BINARY TREE


/** C++ **/
https://leetcode.com/problems/balanced-binary-tree/solutions/7563451/c-solution-breadth-first-search-easy-by-nska5/?envType=daily-question&envId=2026-02-08

/** JAVA **/
// https://leetcode.com/problems/balanced-binary-tree/solutions/7563469/java-beginner-friendly-solution-easy-bfs-pyls/?envType=daily-question&envId=2026-02-08


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
    int height(TreeNode* root) {
        if(!root) {
            return 0 ;
        }
        return 1 + max(height(root->left), height(root->right)) ;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(!root) {
            return true ;
        }
        queue<TreeNode*> q ;
        q.push(root) ;
        while(!q.empty()) {
            TreeNode* node = q.front() ;
            q.pop() ;
            int leftheight = height(node->left) ;
            int rightheight = height(node->right) ;
            if(abs(leftheight - rightheight) > 1) {
                return false ;
            }
            if(node->left) {
                q.push(node->left) ;
            }
            if(node->right) {
                q.push(node->right) ;
            }
        }
        return true ;
    }
};