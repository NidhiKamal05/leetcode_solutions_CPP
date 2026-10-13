
// 3727. MAXIMUM ALTERNATING SUM OF SQUARES

/** T.C. - O(NlogN) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/maximum-alternating-sum-of-squares/solutions/8570790/c-solution-greedy-approach-sorting-by-ni-xvi7/

/* JAVA */
// https://leetcode.com/problems/maximum-alternating-sum-of-squares/solutions/8570807/java-by-nidhi_kamal-5qcu/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

long long maxAlternatingSum(vector<int>& nums) {
	int n = nums.size() ;
    for(int i = 0; i < n; ++i) {
        nums[i] *= nums[i] ;
    }
    sort(nums.begin(), nums.end()) ;
    long long sum1 = 0, sum2 = 0 ;
    for(int i = 0; i < (n / 2); ++i) {
        sum2 += nums[i] ;
    }
    for(int i = (n / 2); i < n; ++i) {
        sum1 += nums[i] ;
    }
    return sum1 - sum2 ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	long long score ;
	
	cout << endl ;
	cout << "  MAXIMUM ALTERNATING SUM OF SQUARES " << endl ;
	cout << " ````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    score = maxAlternatingSum(nums) ;
	
	cout << endl ;
	cout << "Score = " << score << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}