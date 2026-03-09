
// 762. PRIME NUMBER OF SET BITS IN BINARY REPRESENTATION

/* T.C. - O(N * Sqrt(M)) & S.C. - O(1) */

/* C++ */
// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/solutions/7596882/c-math-bit-manipulation-by-nidhi_kamal-vt2l/

/* JAVA */
// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/solutions/7596892/java-solution-easy-and-simple-by-nidhi_k-sv91/

#include<iostream>

using namespace std ;

bool isPrime(int num) {
    if(num <= 1) {
        return false ;
    }
    for(int i=2; i*i <= num; ++i) {
        if(num % i == 0) {
            return false ;
        }
    }
    return true ;
}

int countPrimeSetBits(int left, int right) {
    int cnt = 0 ;
    for(int num=left; num<=right; ++num) {
        int setBits = __builtin_popcount(num) ;
        if(isPrime(setBits)) {
            ++cnt ;
        }
    }
    return cnt ;
}

int main() {
	int left, right, ans ;
	
	cout << endl ;
	cout << "  PRIME NUMBER OF SET BITS IN BINARY REPRESENTATION " << endl ;
	cout << " ---------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter range...." << endl ;
	cout << "Left = " ;
	cin >> left ;
	cout << "Right = " ;
	cin >> right ;
	
	ans = countPrimeSetBits(left, right) ;
	
	cout << endl ;	
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}