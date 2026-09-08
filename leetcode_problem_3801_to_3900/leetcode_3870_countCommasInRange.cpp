
// 3870. COUNT COMMAS IN RANGE

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/count-commas-in-range/solutions/8509890/c-1-liner-o1-solution-0-ms-runtime-beats-er8y/

/* JAVA */
// https://leetcode.com/problems/count-commas-in-range/solutions/8509895/java-1-line-solution-o1-time-space-by-ni-k0ty/

#include<iostream>

using namespace std ;

int countCommas(int n) {
	return n > 999 ? n - 999 : 0 ;
}

int main() {
	int n, commas ;
	
	cout << endl ;
	cout << "  COUNT COMMAS IN RANGE " << endl ;
	cout << " ```````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
    commas = countCommas(n) ;
	
	cout << endl ;
	cout << "Total commas = " << commas << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}