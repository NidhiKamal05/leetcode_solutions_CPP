
// 2200. FIND ALL K-DISTANT INDICES IN AN ARRAY

#include<iostream>
#include<vector>
#include<set>

using namespace std ;

vector<int> findKDistinctIndices(vector<int>& nums, int key, int k) {
	vector<int> indices, keyIndex ;
	set<int> set ;
	for(int j=0; j<nums.size(); ++j) {
		if(nums[j] == key) {
			keyIndex.push_back(j) ;
		}
	}
	for(int j=0; j<keyIndex.size(); ++j) {
		for(int i=0; i<nums.size(); ++i) {
			if(abs(i-keyIndex[j]) <= k) {
				set.insert(i) ;
			}
		}
	}
	for(auto s : set) {
		indices.push_back(s) ;
	}
	return indices ;
}

int main() {
	vector<int> nums, indices ;
	int key, k, n, e ;
	
	cout << endl ;
	cout << "  FIND ALL K-DISTANT INDICES IN AN ARRAY " << endl ;
	cout << " ****************************************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, key = " ;
	cin >> key ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	indices = findKDistinctIndices(nums, key, k) ;
	
	cout << endl ;
	cout << "K-distant indices are......" << endl ;
	cout << "[ " ;
	for(int i : indices) {
		cout << i << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}