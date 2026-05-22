
// 1403. MINIMUM SUBSEQUENCE IN NON INCREASING ORDER

/** T.C. - O(NLogN) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/solutions/8285827/c-0-ms-runtime-beats-100-greedy-solution-yrie/

/* JAVA */
// https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/solutions/8285841/java-solution-by-nidhi_kamal-3yyh/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

vector<int> minSubsequence(vector<int>& nums) {
    sort(nums.begin(), nums.end()) ;
    int totalSum = accumulate(nums.begin(), nums.end(), 0) ;
    int sum = 0 ;
    vector<int> ans ;
    for(int i = nums.size() - 1; i >= 0; --i) {
        sum += nums[i] ;
        ans.push_back(nums[i]) ;
        if(sum > totalSum - sum) {
            break ;
        }
    }
    return ans ;
}

int main() {
	int n, e ;
	vector<int> nums, subsequence ;
	
	cout << endl ;
	cout << "  MINIMUM SUBSEQUENCE IN NON INCREASING ORDER " << endl ;
	cout << " *********************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	subsequence = minSubsequence(nums) ;
	
	cout << endl ;
	cout << "Subsequence....." << endl ;
	cout << "[ " ;
	for(int& num : subsequence) {
		cout << num << " " ;
	}
	cout << "]" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*vector<int> minSubsequence(vector<int>& nums) {
	// if(nums.size() == 1) {
        // return nums ;
    // }
    sort(nums.begin(), nums.end()) ;
    vector<int> ans, prefSum ;
    int pref = 0 ;
    for(int num : nums) {
        pref += num ;
        prefSum.push_back(pref) ;
    }
    int sum = 0 ;
    for(int i = prefSum.size() - 1; i >= 0; --i) {
        sum += nums[i] ;
        ans.push_back(nums[i]) ;
        if(sum > prefSum[i - 1]) {
            break ;
        }
    }
    return ans ;
}*/