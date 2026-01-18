
// 2908. MINIMUM SUM OF MOUNTAIN TRIPLETS I

#include<iostream>
#include<vector>

using namespace std ;

int minimumSum(vector<int>& nums) {
	int n = nums.size() ;
	int minSum = 151 ;
	bool flag = false ;
	for(int i=0; i<n-2; ++i) {
		for(int j=i+1; j<n-1; ++j) {
			for(int k=j+1; k<n; ++k) {
				if((nums[i]<nums[j]) && (nums[j]>nums[k])) {
					flag = true ;
					minSum = min(minSum, nums[i]+nums[j]+nums[k]) ;
				}
			}
		}
	}
	return flag ? minSum : -1 ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  MINIMUM SUM OF MOUNTAIN TRIPLETS I " << endl ;
	cout << " ====================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = minimumSum(nums) ;
	
	cout << endl ;
	cout << "Minimum Sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}