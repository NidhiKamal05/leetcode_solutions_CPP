
// 3701. COMPUTE ALTERNATING SUM

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/compute-alternating-sum/solutions/7632137/c-0-ms-runtime-beats-100-easy-solution-b-f1ab/

/* JAVA */
// https://leetcode.com/problems/compute-alternating-sum/solutions/7632146/java-solution-runtime-beats-9863-0-ms-by-cakq/

#include<iostream>
#include<vector>

using namespace std ;

int alternatingSum(vector<int>& nums) {
    int sum = 0, n = nums.size() ;
    for(int i=0; i<n; ++i) {
        sum += i % 2 ? -nums[i] : nums[i] ;
    }
    return sum ;
}

int main() {
	int n, e ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  COMPUTE ALTERNATING SUM " << endl ;
	cout << " -------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e;
		nums.push_back(e) ;
	}
	
	e = alternatingSum(nums) ;
	
	cout << endl ;	
	cout << "Answer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}