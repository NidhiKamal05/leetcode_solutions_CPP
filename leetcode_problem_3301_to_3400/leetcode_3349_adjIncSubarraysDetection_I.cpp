
// 3349. ADJACENT INCREASING SUBARRAYS DETECTION I

#include<iostream>
#include<vector>

using namespace std ;

bool hasIncreasingSubarrays(vector<int>& nums, int k) {
    int n = nums.size(), len = 1, prevLen = 0 ;
    for(int i=1; i<n; ++i) {
        if(nums[i-1] < nums[i]) {
            ++len ;
        }
        else {
            prevLen = len ;
            len = 1 ;
        }
        if(len == 2 * k || (prevLen >= k && len >= k)) {
            return true ;
        }
    }
    return false ;
}

int main() {
	int n, e, k ;
	vector<int> nums ;
	bool ans ;
	
	cout << endl ;
	cout << "  ADJACENT INCREASING SUBARRAYS DETECTION I " << endl ;
	cout << " -------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter numbers in the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = hasIncreasingSubarrays(nums, k) ;
	
	cout << endl ;
	cout << (ans ? "TRUE...." : "FALSE....") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}