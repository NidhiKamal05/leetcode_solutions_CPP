
// 3622. CHECK DIVISIBILITY BY DIGIT SUM AND PRODUCT

/** T.C. - O(log N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/solutions/8123983/c-0-ms-runtime-beats-100-olog-n-time-by-iqduh/

/* JAVA */
// https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/solutions/8124001/java-easy-solution-by-nidhi_kamal-ut9k/

#include<iostream>

using namespace std ;

bool checkDivisibility(int n) {
	int x = n, sum = 0, product = 1 ;
	while(x) {
		int digit = x % 10 ;
		sum += digit ;
		product *= digit ;
		x /= 10 ;
	}
	return n % (sum + product) == 0 ;
}

int main() {
	int n ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK DIVISIBILITY BY DIGIT SUM AND PRODUCT " << endl ;
	cout << " =============================================" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
    ans = checkDivisibility(n) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}