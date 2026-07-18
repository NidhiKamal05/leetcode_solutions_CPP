
// 1979. FIND GREATEST COMMON DIVISOR OF ARRAY

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/find-greatest-common-divisor-of-array/solutions/8405288/c-solution-0-ms-runtime-beats-100-on-by-unypw/

/* JAVA */
// https://leetcode.com/problems/find-greatest-common-divisor-of-array/solutions/8405294/java-beats-100-min-max-euclidean-algorit-ki9r/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int findGCD(vector<int>& nums) {
	int a = *min_element(nums.begin(), nums.end()) ;
	int b = *max_element(nums.begin(), nums.end()) ;
	return __gcd(a, b) ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  FIND GREATEST COMMON DIVISOR OF ARRAY " << endl ;
	cout << " ```````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = findGCD(nums) ;
	
	cout << endl ;
	cout << "GCD = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}