
// 3432. COUNT PARTITIONS WITH EVEN SUM DIFFERENCE

#include<iostream>
#include<vector>

using namespace std ;

int countPartitions(vector<int>& nums) {
	int cnt = 0 ;
	int n = nums.size() ;
	vector<int> prefixSum(n) ;
	prefixSum[0] = nums[0] ;
	for(int i=1; i<n; ++i) {
		prefixSum[i] = prefixSum[i-1]+nums[i] ;
	}
	int totalSum = prefixSum[n-1] ;
	for(int i=1; i<n; ++i) {
		if(abs((prefixSum[i-1]-(totalSum-prefixSum[i-1]))%2 == 0)) {
			++cnt ;
		}
	}
	return cnt ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  COUNT PARTITIONS WITH EVEN SUM DIFFERENCE " << endl ;
	cout << " ```````````````````````````````````````````" << endl ;
	
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
    e = countPartitions(nums) ;
	
	cout << "Count = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}