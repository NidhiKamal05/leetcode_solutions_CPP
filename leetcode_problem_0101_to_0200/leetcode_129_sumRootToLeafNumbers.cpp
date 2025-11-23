
// 129. SUM ROOT TO LEAF NUMBERS

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
    private int dfs(TreeNode root, int val) {
        if(root == null) {
            return 0 ;
        }
        val = val * 10 + root.val ;
        if(root.left == null && root.right == null) {
            return val ;
        }
        return dfs(root.left, val) + dfs(root.right, val) ;
    }

    public int sumNumbers(TreeNode root) {
        return dfs(root, 0) ;
    }
}*/


/** C++ SOLUTION **/

/** DFS APPROACH **/
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
    int dfs(TreeNode* root, int val) {
        if(!root) {
            return 0 ;
        }
        val = val * 10 + root->val ;
        if(!root->left && !root->right) {
            return val ;
        }
        return dfs(root->left, val) + dfs(root->right, val) ;
    }
public:
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0) ;
    }
};

/** BFS APPROACH **/