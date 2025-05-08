
// 2874. MAXIMUM VALUE OF AN ORDERED TRIPLET II

#include<iostream>
#include<vector>

using namespace std ;

long long maximumTripletValue(vector<int>& nums) {
    int n = nums.size() ;
    long long maxVal = 0 ;
    long maxElement = 0 ;
    long maxDiff = 0 ;
    for(int i=0; i<n; ++i) {
        maxVal = max(maxVal, (long long)(maxDiff*nums[i])) ;
        maxDiff = max(maxDiff, (long)(maxElement-nums[i])) ;
        maxElement = max(maxElement, (long)nums[i]) ;
    }
    return maxVal ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	long long maxVal ;
	
	cout << endl ;
	cout << "  MAXIMUM VALUE OF AN ORDERED TRIPLET II " << endl ;
	cout << " ****************************************" << endl ;
	
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