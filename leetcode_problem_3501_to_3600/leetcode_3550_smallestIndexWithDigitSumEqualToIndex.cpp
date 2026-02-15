
// 3550. SMALLEST INDEX WITH DIGIT SUM EQUAL TO INDEX

/* C++ */
// https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/solutions/7581698/c-solution-runtime-beats-100-o1-space-by-pst6/

/* JAVA */
// https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/solutions/7581710/java-easy-solution-1-ms-runtime-beats-10-dwif/

#include<iostream>
#include<vector>

using namespace std ;

int sumOfDigits(int num) {
	int sum = 0 ;
	while(num) {
		sum += (num % 10) ;
		num /= 10 ;
	}
	return sum ;
}

int smallestIndex(vector<int>& nums) {
	int n = nums.size() ;
	for(int i=0; i<n; ++i) {
		if(sumOfDigits(nums[i]) == i) {
			return i ;
		}
	}
	return -1 ;
}

int main() {
	int n, e ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  SMALLEST INDEX WITH DIGIT SUM EQUAL TO INDEX " << endl ;
	cout << " ==============================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = smallestIndex(nums) ;
	
	cout << endl ;
	cout << "Smallest index = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}