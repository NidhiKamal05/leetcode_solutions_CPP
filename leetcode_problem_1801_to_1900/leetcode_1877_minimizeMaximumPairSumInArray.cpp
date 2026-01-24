
// 1877. MINIMIZE MAXIMUM PAIR SUM IN ARRAY

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int minPairSum(vector<int>& nums) {
	sort(nums.begin(), nums.end()) ;
	int ans = 0 ;
	int i = 0, j = nums.size() - 1 ;
	while(i < j) {
		int sum = nums[i++] + nums[j--] ;
		ans = max(sum, ans) ;
	}
	return ans ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  MINIMIZE MAXIMUM PAIR SUM IN ARRAY " << endl ;
	cout << " ====================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = minPairSum(nums) ;
	
	cout << endl ;
	cout << "Minimized maximum pair sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}