
// 1339. MAXIMUM PRODUCT OF SPLITTED BINARY TREE

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
    private static final int MOD = 1000000007 ;
    private long totalSum = 0 ;
    private long ans = 0 ;

    private long dfs(TreeNode root) {
        if(root == null) {
            return 0 ;
        }
        long subSum = root.val + dfs(root.left) + dfs(root.right) ;
        if(totalSum > 0) {
            long prod = (totalSum - subSum) * subSum ;
            ans = Math.max(ans, prod) ;
        }
        return subSum ;
    }

    public int maxProduct(TreeNode root) {
        totalSum = dfs(root) ;        
        dfs(root) ;
        return (int)(ans % MOD) ;
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
    const int MOD = 1e9 + 7 ;
    long long totalSum = 0 ;
    long long ans = 0 ;

    long long dfs(TreeNode* root) {
        if(!root) {
            return 0 ;
        }
        long long subSum = root->val + dfs(root->left) + dfs(root->right) ;
        if(totalSum > 0) {
            long long prod = (totalSum - subSum) * subSum ;
            ans = max(ans, prod) ;
        }
        return subSum ;
    }

public:
    int maxProduct(TreeNode* root) {        
        totalSum = dfs(root) ;        
        dfs(root) ;
        return ans % MOD ;
    }
};