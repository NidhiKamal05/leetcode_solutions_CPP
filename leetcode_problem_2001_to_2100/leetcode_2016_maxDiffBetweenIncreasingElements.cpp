
// 2016. MAXIMUM DIFFERENCE BETWEEN INCREASING ELEMENTS

#include<iostream>
#include<vector>

using namespace std ;

int maximumDifference(vector<int>& nums) {
	int maxDiff = 0, minVal = INT_MAX ;
    for(int num : nums) {
        minVal = min(minVal, num) ;
        maxDiff = max(maxDiff, num-minVal) ;
    }
    return maxDiff == 0 ? -1 : maxDiff ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  MAXIMUM DIFFERENCE BETWEEN INCREASING ELEMENTS " << endl ;
	cout << " ````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = maximumDifference(nums) ;
	
	cout << endl ;
	cout << "Maximum Difference = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}