
// 3591. CHECK IF ANY ELEMENT HAS PRIME FREQUENCY

/** T.C. - O(N + K * M) & S.C. - O(K) **/

/* C++ */
// https://leetcode.com/problems/check-if-any-element-has-prime-frequency/solutions/7881251/c-0-ms-runtime-beats-100-easy-solution-b-d96r/

/* JAVA */
// https://leetcode.com/problems/check-if-any-element-has-prime-frequency/solutions/7881340/java-solution-beats-7007-by-nidhi_kamal-gjy0/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

bool isPrime(int n) {
	int cnt = 0 ;
	if(n <= 1) {
		return false ;
	}
	else {
		for(int i = 1; i <= n; ++i) {
			if(n % i == 0) {
				++cnt ;
			}
		}
	}
	return cnt > 2 ? false : true ;
}

bool checkPrimeFrequency(vector<int>& nums) {
	unordered_map<int, int> freq ;
	for(int& num : nums) {
		freq[num]++ ;
	}
	for(auto& f : freq) {
		if(isPrime(f.second)) {
			return true ;
		}
	}
	return false ;
}

int main() {
	int n, e ;
	vector<int> nums ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF ANY ELEMENT HAS PRIME FREQUENCY " << endl ;
	cout << " ==========================================" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = checkPrimeFrequency(nums) ;
	
	cout << endl ;
	cout << (ans ? "TRUE...." : "FALSE....") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}