
// 3471. FIND THE LARGEST ALMOST MISSING INTEGER

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/find-the-largest-almost-missing-integer/solutions/8468116/c-0-ms-runtime-beats-100-on-solution-by-88ki9/

/* JAVA */
// https://leetcode.com/problems/find-the-largest-almost-missing-integer/solutions/8468137/java-solution-hash-map-math-tc-sc-on-by-5a1p3/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std ;

int largestInteger(vector<int>& nums, int k) {
	unordered_map<int, int> freq ;
	for(int& num : nums) {
		freq[num]++ ;
	}
	int n = nums.size() ;
	if(k == n) {
		return *max_element(nums.begin(), nums.end()) ;
	}
	if(k == 1) {
		int ans = -1 ;
		for(int& num : nums) {
			if(freq[num] == 1 && num > ans) {
				ans = num ;
			}
		}
		return ans ;
	}
	if(freq[nums[0]] == 1 && freq[nums[n - 1]] == 1) {
		return max(nums[0], nums[n - 1]) ;
	}
	if(freq[nums[0]] == 1 && freq[nums[n - 1]] > 1) {
		return nums[0] ;
	}
	if(freq[nums[0]] > 1 && freq[nums[n - 1]] == 1) {
		return nums[n - 1] ;
	}
	return -1 ;
}

int main() {
	vector<int> nums ;
	int n, e, k ;
	
	cout << endl ;
	cout << "  FIND THE LARGEST ALMOST MISSING INTEGER " << endl ;
	cout << " `````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
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
	
    e = largestInteger(nums, k) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}