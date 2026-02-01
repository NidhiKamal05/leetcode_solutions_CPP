
// 3010. DIVIDE AN ARRAY INTO SUBARRAYS WITH MINIMUM COST I

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int minimumCost(vector<int>& nums) {
    sort(nums.begin()+1, nums.end()) ;
    return nums[0] + nums[1] + nums[2] ;
}

int main() {
	vector<int> nums ;	
	int n, e ;
	
	cout << endl ;
	cout << "  DIVIDE AN ARRAY INTO SUBARRAYS WITH MINIMUM COST I " << endl ;
	cout << " ****************************************************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = minimumCost(nums) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}