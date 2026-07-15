
// 3658. GCD OF ODD AND EVEN SUMS

/** T.C. - O() & S.C. - O() **/

/** C++ **/
// https://leetcode.com/problems/gcd-of-odd-and-even-sums/solutions/8398531/c-0-ms-runtime-beats-100-o1-solution-by-izfao/

/* JAVA */
// https://leetcode.com/problems/gcd-of-odd-and-even-sums/solutions/8398553/java-solution-runtime-0-ms-beats-100-o1-2przk/

#include<iostream>
#include<algorithm>

using namespace std ;

/**
* sum of n odd numbers : 1 + 3 + 5 + ... + 2n-1 = n * n
* sum of n even numbers : 2 + 4 + 6 + ... + 2n = n * (n + 1)
* gcd of (n * n) and (n * (n + 1))
* n * gcd(n, n + 1) = n					[since, gcd(n, n + 1) = 1]
* hence, return n
**/

int gcdOfOddEvenSums(int n) {
    return n ;
}

/** T.C. - O(logN) **/
/*int gcdOfOddEvenSums(int n) {
	int sumOdd =  n * n, sumEven = n * (n + 1) ;
    return __gcd(sumOdd, sumEven) ;
}*/

/** T.C. - O(N) **/
/*int gcdOfOddEvenSums(int n) {
    int sumOdd = 0, sumEven = 0 ;
    for(int num = 1; num <= n; ++num) {
        sumOdd += (num * 2 - 1) ;
        sumEven += (num * 2)  ;
    }
    return __gcd(sumOdd, sumEven) ;
}*/

int main() {
	int n, gcd ;
	
	cout << endl ;
	cout << "  GCD OF ODD AND EVEN SUMS " << endl ;
	cout << " ==========================" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	gcd = gcdOfOddEvenSums(n) ;
	
	cout << endl ;
	cout << "GCD = " << gcd << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}