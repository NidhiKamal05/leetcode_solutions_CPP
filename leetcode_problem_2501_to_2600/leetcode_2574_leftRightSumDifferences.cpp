
// 2574. LEFT AND RIGHT SUM DIFFERENCES

#include<iostream>
#include<vector>

using namespace std ;

vector<int> leftRightDifference(vector<int>& nums) {
	int n = nums.size() ;
	vector<int> ans(n) ;
	int leftSum, rightSum ;
	for(int i=0; i<n; ++i) {
		leftSum = 0 ;
		rightSum = 0 ;
		for(int j=0; j<i; ++j) {
			leftSum += nums[j] ;
		}
		for(int j=i+1; j<n; ++j) {
			rightSum += nums[j] ;
		}
		ans[i] = abs(leftSum - rightSum) ;
	}
	return ans ;
}

int main(){
	vector<int> nums ;
	vector<int> ans ;
	int l, e ;
	
	cout << endl ;
	cout << "  LEFT AND RIGHT SUM DIFFERENCES " << endl ;
	cout << " ````````````````````````````````" << endl ;
	
	cout << endl ;	
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;	
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = leftRightDifference(nums) ;
	
	cout << endl ;
	cout << "Resultant array......" << endl ;
	for(int i=0; i<ans.size(); ++i)
		cout << " " << ans.at(i) << " " ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}