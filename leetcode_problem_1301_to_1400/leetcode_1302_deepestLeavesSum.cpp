
// 1302. DEEPEST LEAVES SUM

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/deepest-leaves-sum/solutions/8550386/c-solution-breadth-first-search-approach-llbs/

/* JAVA */
// https://leetcode.com/problems/deepest-leaves-sum/solutions/8550391/java-easy-solution-by-nidhi_kamal-6plq/

#include<iostream>
#include<queue>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
}

int deepestLeavesSum(TreeNode* root) {
	int sum = 0 ;
    queue<TreeNode*> q ;
    q.push(root) ;
    while(!q.empty()) {
        int currSize = q.size() ;
        sum = 0 ;
        for(int i = 0; i < currSize; ++i) {
            TreeNode* node = q.front() ;
            q.pop() ;
            if(!node->left && !node->right) {
                sum += node->val ;
            }
            if(node->left) {
                q.push(node->left) ;
            }
            if(node->right) {
                q.push(node->right) ;
            }
        }
    }
    return sum ;
}