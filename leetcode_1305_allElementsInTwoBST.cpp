
// 1305. ALL ELEMENTS IN TWO BINARY SEARCH TREES

#include<iostream>
#include<vector>

using namespace std ;

struct TreeNode {
	int val ;
	TreeNode *left ;
	TreeNode *right ;
} ;

vector<int> arr ;

void list(TreeNode* root) {
	if(root != NULL){
		list(root->left) ;
		arr.push_back(root->val) ;
		list(root->right) ;
	}
}

vector<int> getElements(TreeNode* root1, TreeNode* root2) {
	list(root1) ;
	list(root2) ;
	// sort(arr.begin(), arr.end()) ;
	return arr ;
}

int main() {
	vector<int> array ;
	
	cout << endl ;
	cout << "  ALL ELEMENTS IN TWO BINARY SEARCH TREES " << endl ;
	cout << " `````````````````````````````````````````" << endl ;
	
	TreeNode * root1 = new TreeNode ;
	root1->val = 2 ;
	root1->left->val = 1 ;
	root1->right->val = 4 ;
	TreeNode * root2 = new TreeNode ;
	root2->val = 1 ;
	root2->left->val = 0 ;
	root2->right->val = 3 ;
	
    array = getElements(root1, root2) ;
	
	if(!array.empty())
        for(int i=0; i<array.size(); i++)
	    	cout << " " << array.at(i) << " " ;
	else
		cout << "NOT FOUND" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}