
// 2913. SUBARRAYS DISTINCT ELEMENT SUM OF SQUARES I

/** T.C. - O(N^2) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/solutions/8573954/c-brute-force-solution-by-nidhi_kamal-wgxz/

/* JAVA */
// https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/solutions/8573957/java-solution-beats-7567-on2-by-nidhi_ka-g12x/

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

int sumCounts(vector<int>& nums) {
	int n = nums.size(), ans = 0 ;
	for(int i = 0; i < n; ++i) {
		unordered_set<int> st ;
		for(int j = i; j < n; ++j) {
			st.insert(nums[j]) ;
			ans += (st.size() * st.size()) ;
		}
	}
	return ans ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  SUBARRAYS DISTINCT ELEMENT SUM OF SQUARES I " << endl ;
	cout << " `````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = sumCounts(nums) ;
	
	cout << endl ;
	cout << "Sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}