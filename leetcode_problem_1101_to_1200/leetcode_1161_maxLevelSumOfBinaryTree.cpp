
// 1161. MAXIMUM LEVEL SUM OF A BINARY TREE

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
    public int maxLevelSum(TreeNode root) {
        int maxSum = Integer.MIN_VALUE, level = 0, ans = 0 ;
        Queue<TreeNode> q = new LinkedList<>() ;
        q.offer(root) ;
        while(!q.isEmpty()) {
            ++level ;
            int currSize = q.size() ;
            int levelSum = 0 ;
            for(int i=0; i<currSize; ++i) {
                TreeNode node = q.poll() ;
                levelSum += node.val ;
                if(node.left != null) {
                    q.offer(node.left) ;
                }
                if(node.right != null) {
                    q.offer(node.right) ;
                }
            }
            if(levelSum > maxSum) {
                maxSum = levelSum ;
                ans = level ;
            }
        }
        return ans ;
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
public:
    int maxLevelSum(TreeNode* root) {
        int maxSum = INT_MIN, level = 0, ans = 0 ;
        queue<TreeNode*> q ;
        q.push(root) ;
        while(!q.empty()) {
            ++level ;
            int currSize = q.size() ;
            int levelSum = 0 ;
            for(int i=0; i<currSize; ++i) {
                TreeNode* node = q.front() ;
                levelSum += node->val ;
                q.pop() ;
                if(node->left) {
                    q.push(node->left) ;
                }
                if(node->right) {
                    q.push(node->right) ;
                }
            }
            if(levelSum > maxSum) {
                maxSum = levelSum ;
                ans = level ;
            }
        }
        return ans ;
    }
};