
// 2196. CREATE BINARY TREE FROM DESCRIPTIONS

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/create-binary-tree-from-descriptions/solutions/8319856/c-solution-breadth-first-search-hash-map-s92e/

/* JAVA */
// https://leetcode.com/problems/create-binary-tree-from-descriptions/solutions/8319870/java-by-nidhi_kamal-nrln/

#include<iostream>
#include<queue>
#include<vector>
#include<unordered_set>
#include<unordered_map>

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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_set<int> parents, children ;
        unordered_map<int, vector<pair<int, int>>> parentToChildren ;
        for(auto& d : descriptions) {
            parents.insert(d[0]) ;
            children.insert(d[1]) ;
            parentToChildren[d[0]].push_back({d[1], d[2]}) ;
        }
        int rootVal ;
        for(int val : parents) {
            if(children.find(val) == children.end()) {
                rootVal = val ;
                break ;
            }
        }
        TreeNode* root = new TreeNode(rootVal) ;
        queue<TreeNode*> queue ;
        queue.push(root) ;
        while(!queue.empty()) {
            TreeNode* parent = queue.front() ;
            queue.pop() ;
            for(auto& childInfo : parentToChildren[parent->val]) {
                TreeNode* child = new TreeNode(childInfo.first) ;
                queue.push(child) ;
                if(childInfo.second == 1) {
                    parent->left = child ;
                }
                else {
                    parent->right = child ;
                }
            }
        }
        return root ;
    }
};