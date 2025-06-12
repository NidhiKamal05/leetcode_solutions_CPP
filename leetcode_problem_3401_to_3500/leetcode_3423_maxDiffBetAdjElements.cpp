
// 3423. MAXIMUM DIFFERENCE BETWEEN ADJACENT ELEMENTS IN A CIRCULAR ARRAY

#include<iostream>
#include<vector>

using namespace std ;

int maxAdjacentDistance(vector<int>& nums) {
	int n = nums.size() ;
	int maxDiff = 0 ;
	for(int i=1; i<n; ++i) {
		maxDiff = max(maxDiff, abs(nums[i]-nums[i-1])) ;
	}
	maxDiff = max(maxDiff, abs(nums[0]-nums[n-1])) ;
	return maxDiff ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  MAXIMUM DIFFERENCE BETWEEN ADJACENT ELEMENTS IN A CIRCULAR ARRAY " << endl ;
	cout << " ==================================================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = maxAdjacentDistance(nums) ;	
	
	cout << endl ;	
	cout << "Maximum Difference = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}