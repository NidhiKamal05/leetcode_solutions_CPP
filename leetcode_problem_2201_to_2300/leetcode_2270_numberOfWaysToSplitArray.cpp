
// 2270. NUMBER OF WAYS TO SPLIT ARRAY

#include<iostream>
#include<vector>

using namespace std ;

int waysToSplitArray(vector<int>& nums) {
	int ways = 0 ;
	long n = nums.size() ;
	vector<long> prefixSum(n) ;
	int sum = 0 ;
	for(int i=0; i<n; ++i) {
		sum += nums[i] ;
		prefixSum[i] = sum ;
	}
	for(int i=0; i<n-1; ++i) {
		if(prefixSum[i] >= prefixSum[n-1]-prefixSum[i]) {
			++ways ;
		}
	}
	return ways ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  NUMBER OF WAYS TO SPLIT ARRAY " << endl ;
	cout << " ```````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    e = waysToSplitArray(nums) ;
	
	cout << "Number of ways = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}