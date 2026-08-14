
// 2996. SMALLEST MISSING INTEGER GREATER THAN SEQUENTIAL PREFIX SUM

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/solutions/8455260/c-0-ms-runtime-beats-100-by-nidhi_kamal-8hxv/

/* JAVA */
// https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/solutions/8455323/java-solution-by-nidhi_kamal-7no3/

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

int missingInteger(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end()) ;
    int sum = nums[0], n = nums.size() ;
    for(int i = 1; i < n; ++i) {
        if(nums[i] == nums[i - 1] + 1) {
            sum += nums[i] ;
        }
        else {
            break ;
        }
    }
    // while(numSet.contains(sum)) {
    while(numSet.count(sum)) {
        sum += 1 ;
    }
    return sum ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  SMALLEST MISSING INTEGER GREATER THAN SEQUENTIAL PREFIX SUM " << endl ;
	cout << " =============================================================" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = missingInteger(nums) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}