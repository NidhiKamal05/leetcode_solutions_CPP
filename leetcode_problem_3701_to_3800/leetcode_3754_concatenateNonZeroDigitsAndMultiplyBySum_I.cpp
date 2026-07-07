
// 3754. CONCATENATE NON-ZERO DIGITS AND MULTIPLY BY SUM I

/** T.C. - O(logN) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/solutions/8382654/c-0-ms-runtime-beats-100-memory-beats-98-6s9q/

/* JAVA */
// https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/solutions/8382663/java-runtime-beats-9985-tc-olog-n-sc-o1-g58tt/

#include<iostream>

using namespace std ;

long long sumAndMultiply(int n) {
    long long sum = 0, x = 0, power_10 = 1 ;
    while(n) {
        int digit = n % 10 ;
        if(digit != 0) {
            sum += digit ;
            x += digit * power_10 ;
            power_10 *= 10 ;
        }
        n /= 10 ;
    }
    return x * sum ;
}

int main() {
	int n, ans ;
	
	cout << endl ;
	cout << "  CONCATENATE NON-ZERO DIGITS AND MULTIPLY BY SUM I " << endl ;
	cout << " ```````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
    ans = sumAndMultiply(n) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}