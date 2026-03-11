
// 1545. FIND KTH BIT IN NTH BINARY STRING

/** T.C. - O(2^N) & S.C. - O(2^N) **/

/* C++ */
// https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/solutions/7622039/c-solution-by-nidhi_kamal-6y16/

/* JAVA */
// https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/solutions/7622083/java-by-nidhi_kamal-bikc/

#include<iostream>

using namespace std ;

char findKthBit(int n, int k) {
    string s = "0" ;
    while(n > 1 && k > s.length()) {
        string t = s ;
        s += '1' ;
        for(int j=t.length()-1; j>=0; --j) {
            char invertedBit = t[j] == '1' ? '0' : '1' ;
            s += invertedBit ;
        }
        --n ;
    }
    return s[k - 1] ;
}

int main() {
	int n, k ;
	char ans ;
	
	cout << endl ;
	cout << "  FIND KTH BIT IN NTH BINARY STRING " << endl ;
	cout << " -----------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = findKthBit(n, k) ;
	
	cout << endl ;	
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}