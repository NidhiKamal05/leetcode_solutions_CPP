
// 606. CONSTRUCT STRING FROM BINARY TREE

/** JAVA SOLUTION **/
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
/*class Solution {
    private String s = new String() ;
    private void dfs(TreeNode root) {
        if(root == null) {
            return ;
        }
        s += root.val ;
        if(root.left != null) {
            s += '(' ;
            dfs(root.left) ;
            s += ')' ;           
        }
        if(root.right != null) {
            if(root.left == null) {
                s += "()" ;
            }
            s += '(' ;
            dfs(root.right) ;
            s += ')' ;
        }
    }
    public String tree2str(TreeNode root) {
        dfs(root) ;
        return s ;
    }
}*/

/** C++ SOLUTION **/

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
    void dfs(TreeNode* root, string& s) {
        if(!root) {
            return ;
        }
        s += to_string(root->val) ;
        if(root->left) {
            s += '(' ;
            dfs(root->left, s) ;
            s += ')' ;           
        }
        if(root->right) {
            if(!root->left) {
                s += "()" ;
            }
            s += '(' ;
            dfs(root->right, s) ;
            s += ')' ;
        }
    }
public:
    string tree2str(TreeNode* root) {
        string s ;
        dfs(root, s) ;
        return s ;
    }
};


/*void dfs(TreeNode* root, string& s) {
        if(!root) {
            return ;
        }
        s += (root->val + '0') ;
        if(!root->left && !root->right) {
            // s += ')' ;
            return ;
        }
        s += '(' ;
        if(!root->left && root->right) {
            s += ')' ;
        }
        dfs(root->left, s) ;
        if(root->right) {
            s += '(' ;
        }
        dfs(root->right, s) ;
        s += ')' ;
    }
*/