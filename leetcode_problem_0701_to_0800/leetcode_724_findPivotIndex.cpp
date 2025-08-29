
// 724. FIND PIVOT INDEX

#include<iostream>
#include<vector>

using namespace std ;

int pivotIndex(vector<int>& nums) {
	int n = nums.size() ;
    int totalSum = accumulate(nums.begin(), nums.end(), 0) ;
    int leftSum = 0 ;
    for(int i=0; i<n; ++i) {
        int rightSum = totalSum - leftSum - nums[i] ;
        if(leftSum == rightSum) {
            return i ;
        }
        leftSum += nums[i] ;
    }
    return -1 ;
}

int main(){
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  FIND PIVOT INDEX " << endl ;
	cout << " ``````````````````" << endl ;
	
	cout << endl ;	
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;	
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = pivotIndex(nums) ;
	
	cout << endl ;
	cout << "Pivot index = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** WRONG ANSWER **/
/*int pivotIndex(vector<int>& nums) {
	int n = nums.size() ;
	int prefixSum, postfixSum ;
	for(int i=n-1; i>=0; --i) {
		prefixSum = 0 ;
		postfixSum = 0 ;
		if(i > 0) {
			for(int j=0; j<i; ++j) {
				prefixSum += nums[j] ;
			}
		}
		if(i < n-1) {
			for(int j=i+1; j<n; ++j) {
				postfixSum += nums[j] ;
			}
		}
		if(prefixSum == postfixSum) {
			return i ;
		}
	}
	return -1 ;
*/}