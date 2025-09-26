
// 637. AVERAGE OF LEVELS IN BINARY TREE

#include<iostream>
#include<queue>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
}

vector<double> averageOfLevels(TreeNode* root) {
	vector<double> avg ;
    queue<TreeNode*> q ;
    q.push(root) ;
    while(!q.empty()) {
        int currSize = q.size() ;
        double sum = 0 ;
        for(int i=0; i<currSize; ++i) {
            TreeNode *tempNode = q.front() ;
            q.pop() ;
            sum += (tempNode->val) ;
            if(tempNode->left) {
                q.push(tempNode->left) ;
            }
            if(tempNode->right) {
                q.push(tempNode->right) ;
            }
        }
        avg.push_back(sum / currSize) ;
    }
    return avg ;
}