
// 3201. FIND THE MAXIMUM LENGTH OF VALID SUBSEQUENCE I

#include<iostream>
#include<vector>

using namespace std ;

int maximumLength(vector<int>& nums) {
	int maxLen = 0 ;
	int oddCnt = 0, evenCnt = 0 ;
	for(int& num : nums) {
		if(num%2) {
			++oddCnt ;
		}
		else {
			++evenCnt ;
		}
	}
	maxLen = oddCnt > evenCnt ? oddCnt : evenCnt ;
	oddCnt = 0, evenCnt = 0 ;
	bool flag = nums[0]%2 ? true : false ;
	for(int i=1; i<nums.size(); ++i) {
		if(nums[i]%2 && !flag) {
			flag = true ;
			++oddCnt ;
		}
		if(!(nums[i]%2) && flag) {
			flag = false ;
			++evenCnt ;
		}
	}
	maxLen = max(maxLen, oddCnt+evenCnt+1) ;
	return maxLen ;
}

int main() {
	int n, e ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  FIND THE MAXIMUM LENGTH OF VALID SUBSEQUENCE I " << endl ;
	cout << " ************************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = maximumLength(nums) ;
	
	cout << endl ;
	cout << "Maximum Length = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}