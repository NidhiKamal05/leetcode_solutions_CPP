
// 1984. MINIMUM DIFFERENCE BETWEEN HIGHEST AND LOWEST OF K SCORES

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int minimumDifference(int[] nums, int k) {
        int n = nums.length ;
        Arrays.sort(nums) ;
        int minDiff = 100000 ;
        for(int i=0; i<=n-k; ++i) {
            minDiff = Math.min(minDiff, nums[i+k-1]-nums[i]) ;
        }
        return minDiff ;
    }
}*/

int minimumDifference(vector<int>& nums, int k) {
	int n = nums.size() ;
    sort(nums.begin(), nums.end()) ;
    int minDiff = 100000 ;
    for(int i=0; i<=n-k; ++i) {
        minDiff = min(minDiff, nums[i+k-1]-nums[i]) ;
    }
    return minDiff ;
}

int main() {
	int n, e, k ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  MINIMUM DIFFERENCE BETWEEN HIGHEST AND LOWEST OF K SCORES " << endl ;
	cout << " ***********************************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	e = minimumDifference(nums, k) ;
	
	cout << endl ;
	cout << "Minimum difference = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}