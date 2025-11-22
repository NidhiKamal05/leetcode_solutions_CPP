
// 1800. MAXIMUM ASCENDING SUBARRAY SUM

#include<iostream>
#include<vector>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int maxAscendingSum(int[] nums) {
        int maxSum = 0, n = nums.length, sum = nums[0] ;
        for(int i=1; i<n; ++i) {
            if(nums[i-1] < nums[i]) {
                sum += nums[i] ;
            }
            else {
                maxSum = Math.max(maxSum, sum) ;
                sum = nums[i] ;
            }
        }
        maxSum = Math.max(maxSum, sum) ;
        return maxSum ;
    }
}*/

int maxAscendingSum(vector<int>& nums) {
    int maxSum = 0, n = nums.size(), sum = nums[0] ;
    for(int i=1; i<n; ++i) {
        if(nums[i-1] < nums[i]) {
            sum += nums[i] ;
        }
        else {
            maxSum = max(maxSum, sum) ;
            sum = nums[i] ;
        }
    }
    maxSum = max(maxSum, sum) ;
    return maxSum ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  MAXIMUM ASCENDING SUBARRAY SUM " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = maxAscendingSum(nums) ;
	
	cout << endl ;
	cout << "Maximum sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}