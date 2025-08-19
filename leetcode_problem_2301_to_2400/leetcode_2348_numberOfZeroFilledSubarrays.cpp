
// 2348. NUMBER OF ZERO-FILLED SUBARRAYS

#include<iostream>
#include<vector>

using namespace std ;

long long zeroFilledSubarray(vector<int>& nums) {
    long long ans = 0, zeroCnt = 0 ;
    for(int & num : nums) {
        if(num == 0) {
            ++zeroCnt ;
            ans += zeroCnt ;
        }
        else {
            zeroCnt = 0 ;
        }
    }
    return ans ;
}

int main() {
	int n, e ;
	vector<int> nums ;
	long long ans ;
	
	cout << endl ;
	cout << "  NUMBER OF ZERO-FILLED SUBARRAYS " << endl ;
	cout << " *********************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = zeroFilledSubarray(nums) ;
	
	cout << endl ;
	cout << "Number of subarrays = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}