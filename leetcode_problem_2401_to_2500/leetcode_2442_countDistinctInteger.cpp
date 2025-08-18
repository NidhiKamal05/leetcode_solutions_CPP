
// 2442. COUNT NUMBER OF DISTINCT INTEGERS AFTER REVERSE OPERATIONS

#include<iostream>
#include<vector>
#include<unordered_set>
// #include<map>

using namespace std ;

int reverseInteger(int n) {
	int rev = 0 ;
	while(n) {
		rev = ((rev*10) + (n%10)) ;
		n /= 10 ;
	}
	return rev ;
}

int countDistinctIntegers(vector<int>& nums) {
	int l = nums.size() ;
	unordered_set<int> s ;
	for(int n : nums) {
		s.insert(n) ;
	}
	for(int num : nums) {
		int rev = reverseInteger(num) ;
		s.insert(rev) ;
	}
	return s.size() ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  COUNT NUMBER OF DISTINCT INTEGERS AFTER REVERSE OPERATIONS " << endl ;
	cout << " ````````````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    e = countDistinctIntegers(nums) ;
	
	cout << "Number of distinct integer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*int countDistinctIntegers(vector<int>& nums) {
	int l = nums.size() ;
	map<int, int> mp ;
	for(int n : nums) {
		mp[n]++ ;
	}
	for(int i=0; i<l; ++i) {
		int n = nums[i] ;
		int rev = 0 ;
		while(n) {
			rev = ((rev*10) + (n%10)) ;
			n /= 10 ;
		}
		mp[rev]++ ;
	}
	return mp.size() ;
}*/