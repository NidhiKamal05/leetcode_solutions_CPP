
// 1920. BUILD ARRAY FROM PERMUTATION

#include<iostream>
#include<vector> 

using namespace std ;

vector<int> buildArray(vector<int>& nums) {
	int n = nums.size() ; 
	vector<int> ans(n) ;
	for(int i=0; i<n; ++i)
		ans[i] = nums[nums[i]] ;
	return ans ;
}

int main() {
	vector<int> nums, ans ;
	int e, l ;
	
	cout << endl ;
	cout << "  BUILD ARRAY FROM PERMUTATION " << endl ;
	cout << " ------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array......."  << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = buildArray(nums) ;
	
	cout << endl ;
	cout << "Resultant array......."  << endl ;
	for(int i : ans) {
		cout << " " << i << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}