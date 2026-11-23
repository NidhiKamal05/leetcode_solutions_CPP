
// 2415. REVERSE ODD LEVELS OF BINARY TREE

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/solutions/8622487/c-solution-by-nidhi_kamal-9vls/

/* JAVA */
// https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/solutions/8622493/java-bfs-solution-by-nidhi_kamal-ru6s/

#include<iostream>
#include<queue>

using namespace std ;

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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q ;
        q.push(root) ;
        bool flag = false ;
        while(!q.empty()) {
            int currentSize = q.size() ;
            vector<TreeNode*> currentLevelNodes ;
            for(int i = 0; i < currentSize; ++i) {
                TreeNode *node = q.front() ;
                q.pop() ;
                currentLevelNodes.push_back(node) ;
                if(node->left) {
                    q.push(node->left) ;
                }
                if(node->right) {
                    q.push(node->right) ;
                }
            }
            if(flag) {
                int i = 0 ;
                int j = currentLevelNodes.size() - 1 ;
                while(i < j) {
                    swap(currentLevelNodes[i++]->val, currentLevelNodes[j--]->val) ;
                }
            }
            flag = (flag == false) ? true : false ;
        }
        return root ;
    }
};

/*struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
} ;

TreeNode* reverseOddLevels(TreeNode* root) {
	queue<TreeNode*> q ;
	q.push(root) ;
	bool flag = false ;
	while(!q.empty()) {
		int currentSize = q.size() ;
		vector<TreeNode*> currentLevelNodes ;
		for(int i=0; i<currentSize; ++i) {
			TreeNode *node = q.front() ;
			q.pop() ;
			currentLevelNodes.push_back(node) ;
			if(node->left) {
				q.push(node->left) ;
			}
			if(node->right) {
				q.push(node->right) ;
			}
		}
		if(flag) {
			int i = 0 ;
			int j = currentLevelNodes.size()-1 ;
			while(i < j) {
				swap(currentLevelNodes[i++]->val, currentLevelNodes[j--]->val) ;
			}
		}
		flag = (flag==false) ? true : false ;
	}
	return root ;
}*/