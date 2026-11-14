
// 3364. MINIMUM POSITIVE SUM SUBARRAY

/** T.C. - O(n * r) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-positive-sum-subarray/solutions/8612355/c-solution-by-nidhi_kamal-6gga/

/* JAVA */
// https://leetcode.com/problems/minimum-positive-sum-subarray/solutions/8612359/java-by-nidhi_kamal-2y03/

#include<iostream>
#include<vector>

using namespace std ;

int minimumSumSubarray(vector<int>& nums, int l, int r) {
	int n = nums.size(), minSum = INT_MAX ;
	for(int i = 0; i < n; ++i) {
		int sum = 0 ;
		for(int j = i; j < min(i + r, n); ++j){
			sum += nums[j] ;
			if(j - i + 1 >= l && sum > 0 && sum < minSum) {
				minSum = sum ;
			}
		}
	}
	return minSum == INT_MAX ? -1 : minSum ;
}

int main() {
	vector<int> nums ;
	int n, e, l, r ;
	
	cout << endl ;
	cout << "  MINIMUM POSITIVE SUM SUBARRAY " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, l = " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter an integer, r = " ;
	cin >> r ;
	
	e = minimumSumSubarray(nums, l, r) ;
	
	cout << endl ;
	cout << "Minimum Sum = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}