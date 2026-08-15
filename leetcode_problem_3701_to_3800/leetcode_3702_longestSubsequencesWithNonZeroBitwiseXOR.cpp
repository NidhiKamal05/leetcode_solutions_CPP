
// 3702. LONGEST SUBSEQUENCES WITH NON-ZERO BITWISE XOR

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/solutions/8462725/c-0-ms-runtime-beats-100-on-solution-by-6bzif/

/* JAVA */
// https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/solutions/8462728/java-solution-by-nidhi_kamal-u86v/

#include<iostream>
#include<vector>

using namespace std ;

int longestSubsequence(vector<int>& nums) {
	int xorTotal = 0, n = nums.size() ;
    bool allZero = true ;
    for(int& num : nums) {
        xorTotal ^= num ;
        if(num != 0) {
            allZero = false ;
        }
    }
    if(xorTotal != 0) {
        return n ;
    }
    return allZero ? 0 : n - 1 ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  LONGEST SUBSEQUENCES WITH NON ZERO BITWISE XOR " << endl ;
	cout << " ------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = longestSubsequence(nums) ;
	
	cout << endl ;
	cout << "Length of longest subsequence = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}