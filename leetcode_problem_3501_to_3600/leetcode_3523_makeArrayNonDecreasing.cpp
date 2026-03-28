
// 3523. MAKE ARRAY NON-DECREASING

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/make-array-non-decreasing/solutions/7708189/c-0-ms-runtime-beats-100-memory-beats-93-x8dx/

/* JAVA */
// https://leetcode.com/problems/make-array-non-decreasing/solutions/7708220/java-solution-runtime-beats-100-on-time-seia2/

#include<iostream>
#include<vector>

using namespace std ;

int maximumPossibleSize(vector<int>& nums) {
    int prev = 0, maxSize = 0 ;
    for(int num : nums) {
        if(num >= prev) {
            prev = num ;
            ++maxSize ;
        }
    }
    return maxSize ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  MAKE ARRAY NON-DECREASING " << endl ;
	cout << " ===========================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = maximumPossibleSize(nums) ;
	
	cout << endl ;
	cout << "Maximum possible size = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}