
// 1689. PARTIONING INTO MINIMUM NUMBER OF DECI-BINARY NUMBERS

/** T.C. - O(N) & S.C. - O(1) */

/* C++ */
// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/solutions/7616972/c-solution-tc-on-sc-o1-easy-by-nidhi_kam-eaha/

/* JAVA */
// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/solutions/7617014/java-solution-runtime-beats-9610-on-time-x40p/

#include<iostream>

using namespace std ;

int minPartitions(string n) {
    char maxNum = '0' ;
    for(char& c : n) {
        maxNum = max(maxNum, c) ;
    }
    return maxNum - '0' ;
}

int main() {
	int ans ;
	string n ;
	
	cout << endl ;
	cout << "  PARTIONING INTO MINIMUM NUMBER OF DECI-BINARY NUMBERS " << endl ;
	cout << " -------------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string(integer), n = " ;
	cin >> n ;
	
	ans = minPartitions(n) ;
	
	cout << endl ;	
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}