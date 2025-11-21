
// 1609. EVEN ODD TREE

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
    bool isEvenOddTree(TreeNode* root) {
        int level = 0 ;
        queue<TreeNode*> q ;
        q.push(root) ;
        while(!q.empty()) {
            int len = q.size() ;
            for(int i=0; i<len; ++i) {
                TreeNode* top = q.front() ;
                q.pop() ;
                if(level % 2) {
                    if(top->val % 2 || (i < len-1 && top->val <= q.front()->val)) {
                        return false ;
                    }
                }
                if(level % 2 == 0) {
                    if(top->val % 2 == 0 || (i < len-1 && top->val >= q.front()->val)) {
                        return false ;
                    }
                }
                if(top->left) {
                    q.push(top->left) ;
                }
                if(top->right) {
                    q.push(top->right) ;
                }
            }
            ++level ;
        }
        return true ;
    }
};