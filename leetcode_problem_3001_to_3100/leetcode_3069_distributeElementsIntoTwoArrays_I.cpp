
// 3069. DISTRIBUTE ELEMENTS INTO TWO ARRAYS I

#include<iostream>
#include<vector>

using namespace std ;

vector<int> resultArray(vector<int>& nums) {
	vector<int> arr1 ;
	vector<int> arr2 ;
	arr1.push_back(nums[0]) ;
	arr2.push_back(nums[1]) ;
	int l1 = 0 ;
	int l2 = 0 ;
	for(int i=2; i<nums.size(); ++i) {
		if(arr1[l1] > arr2[l2]) {
			arr1.push_back(nums[i]) ;
			++l1 ;
		}
		else {
			arr2.push_back(nums[i]) ;
			++l2 ;
		}
	}
	vector<int> result ;
	for(int i=0; i<arr1.size(); ++i) {
		result.push_back(arr1[i]) ;
	}
	for(int i=0; i<arr2.size(); ++i) {
		result.push_back(arr2[i]) ;
	}
	return result ;
}

int main() {
	vector<int> nums ;
	vector<int> ans ;
	int l, e ;
	
	cout << endl ;
	cout << "  DISTRIBUTE ELEMENTS INTO TWO ARRAYS I " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = resultArray(nums) ;
	
	cout << endl ;
	for(int i=0; i<ans.size(); ++i)
		cout << " " << ans[i] << " " ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}