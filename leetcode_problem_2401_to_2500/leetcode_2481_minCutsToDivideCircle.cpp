
// 2481. MINIMUM CUTS TO DIVIDE A CIRCLE

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/solutions/8627700/c-0-ms-runtime-beats-100-memory-beats-93-z1o0/

/* JAVA */
// https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/solutions/8627702/java-o1-solution-beats-100-0-ms-by-nidhi-tyuj/

#include<iostream>

using namespace std ;

int numberOfCuts(int n) {
    return (n == 1) ? 0 : (n % 2 == 0) ? (n / 2) : n ;
}

int main() {
	int n, minCuts ;
	
	cout << endl ;
	cout << "  MINIMUM CUTS TO DIVIDE A CIRCLE " << endl ;
	cout << " ---------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter an integer : " ;
	cin >> n ;
	
	cout << endl ;
    minCuts = numberOfCuts(n) ;
	
	cout << "Minimum cuts = " << minCuts << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}