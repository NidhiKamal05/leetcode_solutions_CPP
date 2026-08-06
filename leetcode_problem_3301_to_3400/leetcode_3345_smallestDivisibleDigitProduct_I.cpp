
// 3345. SMALLEST DIVISIBLE DIGIT PRODUCT I

/** T.C. - O(logN) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/smallest-divisible-digit-product-i/solutions/8445571/c-0-ms-runtime-beats-100-olog-n-time-by-sfwfw/

/* JAVA */
// https://leetcode.com/problems/smallest-divisible-digit-product-i/solutions/8445584/java-solution-beats-100-0-ms-brute-force-9v2a/

#include<iostream>

using namespace std ;

int digitsProduct(int num) {
    int prod = 1 ;
    while(num) {
        prod *= (num % 10) ;
        if(prod == 0) {
            break ;
        }
        num /= 10 ;
    }
    return prod ;
}

int smallestNumber(int n, int t) {
    for(int num = n; num < n + 10; ++num) {
        if(digitsProduct(num) % t == 0) {
            return num ;
        }
    }
    return -1 ;
}

int main() {
	int n, t, ans ;
	
	cout << endl ;
	cout << "  SMALLEST DIVISIBLE DIGIT PRODUCT I " << endl ;
	cout << " ````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter an integer, t = " ;
	cin >> t ;
	
    ans = smallestNumber(n, t) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}