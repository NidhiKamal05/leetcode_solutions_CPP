
// 2873. MAXIMUM VALUE OF AN ORDERED TRIPLET I

#include<iostream>
#include<vector>

using namespace std ;

long long maximumTripletValue(vector<int>& nums) {
	int n = nums.size() ;
	long long maxVal = 0 ;
	for(int i=0; i<n-2; ++i) {
		for(int j=i+1; j<n-1; ++j) {
			for(int k=j+1; k<n; ++k) {
				long long val = (long)(nums[i]-nums[j])*nums[k] ;
				maxVal = max(maxVal, val) ;
			}
		}
	}
	return maxVal ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	long long maxVal ;
	
	cout << endl ;
	cout << "  MAXIMUM VALUE OF AN ORDERED TRIPLET I " << endl ;
	cout << " ***************************************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    maxVal = maximumTripletValue(nums) ;
	
	cout << endl ;
	cout << "Maximum Value = " << maxVal << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}