
// 2652. SUM MULTIPLES

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/sum-multiples/solutions/8535909/c-solution-0-ms-runtime-beats-100-by-nid-ahyn/

/* JAVA */
// https://leetcode.com/problems/sum-multiples/solutions/8535910/java-brute-force-solution-easy-by-nidhi_-1e4w/

#include<iostream>

using namespace std ;

int sumOfMultiples(int n) {
	int sum = 0 ;
	for(int i = 1; i <= n; ++i) {
		if((i % 3 == 0) || (i % 5 == 0) || (i % 7 == 0)) {
			sum += i ;
		}
	}
	return sum ;
}

int main() {
	int n, sum ;
	
	cout << endl ;
	cout << "  SUM MULTIPLES " << endl ;
	cout << " ~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter an integer....\nn = " ;
	cin >> n ;
	
	cout << endl ;
    sum = sumOfMultiples(n) ;
	
	cout << "Sum = " << sum << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}