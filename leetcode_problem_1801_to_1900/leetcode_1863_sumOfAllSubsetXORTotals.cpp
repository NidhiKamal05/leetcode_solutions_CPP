
// 1863. SUM OF ALL SUBSET XOR TOTALS

#include<iostream>
#include<vector>

using namespace std ;

// BIT MANIPULATION
/*
if nums = [a,b,c], n = 3
then xorSumOfSubsets = a+b+c+(a^b)+(b^c)+(c^a)+(a^b^c)
totalOR = a|b|c ;
xorSumOfSubsets = totalOR * 2^(n-1)
*/

int subsetXORSum(vector<int>& nums) {
	int totalOR = 0 ;
    for(int& num : nums) {
        totalOR |= num ;
    }
    return totalOR * (1 << nums.size()-1) ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  SUM OF ALL SUBSET XOR TOTALS " << endl ;
	cout << " ``````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = subsetXORSum(nums) ;
	
	cout << endl ;
	cout << "Sum of XOR = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



// int subsetXORSum(vector<int>& nums) {
	// int n = nums.size() ;
	// int sum = 0 ;
	// for(int i=0; i<n-1; ++i) {
		// cout << endl << nums[i] << "-- " ;
		// sum += nums[i] ;
		// int XOR = nums[i] ;
		// for(int j=i+1; j<n; ++j) {
			// cout << nums[j] << "," ;
			// sum += (XOR ^= nums[j]) ;
		// }
	// }
	// sum += nums[n-1] ;
	// if(n > 2) {
		// for(int i=n-1; i>1; --i) {
			// cout << endl << nums[i] << "== " ;
			// for(int j=i-2; j>=0; --j) {
				// cout << nums[j] << "," ;
				// sum += (nums[i] ^ nums[j]) ;
			// }
		// }
	// }
	// return sum ;
// }