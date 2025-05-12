
// 2918. MINIMUM EQUAL SUM OF TWO ARRAYS AFTER REPLACING ZEROS

#include<iostream>
#include<vector>

using namespace std ;

long long minSum(vector<int>& nums1, vector<int>& nums2) {
    long long cnt1 = 0, sum1 = 0, cnt2 = 0, sum2 = 0 ;
    for(int num : nums1) {
        sum1 += num ;
        if(num == 0) {
            ++cnt1 ;
            ++sum1 ;
        }
    }
    for(int num : nums2) {
        sum2 += num ;
        if(num == 0) {
            ++cnt2 ;
            ++sum2 ;
        }
    }
    if((!cnt1 && sum1 < sum2) || (!cnt2 && sum2 < sum1)) {
        return -1 ;
    }
    return max(sum1, sum2) ;
}

int main() {
	vector<int> nums1, nums2 ;
	int n, e ;
	long long ans ;
	
	cout << endl ;
	cout << "  MINIMUM EQUAL SUM OF TWO ARRAYS AFTER REPLACING ZEROS " << endl ;
	cout << " =======================================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array1 : " ;
	cin >> n ;	
	
	cout << endl ;
	cout << "Enter elements of array1....." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array2 : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of array1....." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums2.push_back(e) ;
	}
	
	ans = minSum(nums1, nums2) ;
	
	cout << endl ;
	cout << "Minimum Sum = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}