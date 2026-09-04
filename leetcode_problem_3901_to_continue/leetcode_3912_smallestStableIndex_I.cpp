
// 3912. SMALLEST STABLE INDEX I

/** T.C. - O(N^2) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/smallest-stable-index-i/solutions/8501414/c-0-ms-runtime-beats-100-memory-beats-85-ce4f/

/* JAVA */
// https://leetcode.com/problems/smallest-stable-index-i/solutions/8501441/java-solution-beats-9979-runtime-1-ms-br-46g7/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int firstStableIndex(vector<int>& nums, int k) {
	int n = nums.size() ;
	for(int idx = 0; idx < n; ++idx) {
		int max = *max_element(nums.begin(), nums.begin() + idx + 1) ;
		int min = *min_element(nums.begin() + idx, nums.end()) ;
		if(max - min <= k) {
			return idx ;
		}
	}
	return -1 ;
}

int main() {
	vector<int> nums ;
	int n, k, e ;
	
	cout << endl ;
	cout << "  SMALLEST STABLE INDEX I " << endl ;
	cout << " *************************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
    e = firstStableIndex(nums, k) ;
	
	cout << endl ;
	cout << "Smallest stable index = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}