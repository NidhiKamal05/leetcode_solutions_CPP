
// 113. PATH SUM II

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
    private List<List<Integer>> paths = new ArrayList<>() ;
    private List<Integer> path = new ArrayList<>() ;
    private void findPath(TreeNode node, int targetSum) {
        if(node == null) {
            return ;
        }
        path.add(node.val) ;
        targetSum -= node.val ;
        if((targetSum == 0) && (node.left == null) && (node.right == null)) {
            paths.add(new ArrayList<>(path)) ;
        }
        findPath(node.left, targetSum) ;
        findPath(node.right, targetSum) ;
        path.remove(path.size() - 1) ;
    }
    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {        
        findPath(root, targetSum) ;
        return paths ;
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
    void findPath(TreeNode* node, int targetSum, vector<int>& path, vector<vector<int>>& paths) {
        if(!node) {
            return ;
        }
        path.push_back(node->val) ;
        targetSum -= node->val ;
        if((targetSum == 0) && (!node->left) && (!node->right)) {
            paths.push_back(path) ;
        }
        findPath(node->left, targetSum, path, paths) ;
        findPath(node->right, targetSum, path, paths) ;
        path.pop_back() ;
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> paths ;
        vector<int> path ;
        findPath(root, targetSum, path, paths) ;
        return paths ;
    }
};