
// 1461. CHECK IF A STRING CONTAINS ALL BINARY CODES OF SIZE K

/** T.C. - O() & S.C. - O() **/

/* C++ */
// https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/solutions/7602273/c-solution-by-nidhi_kamal-tkgn/

/* JAVA */
// https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/solutions/7602292/java-easy-solution-by-nidhi_kamal-0u0b/

#include<iostream>
#include<unordered_set>
#include<cmath>

using namespace std ;

bool hasAllCodes(string s, int k) {
    int n = s.length() ;
    unordered_set<string> st ;
    for(int i=0; i<=n-k; ++i) {
        st.insert(s.substr(i, k)) ;
    }
    return st.size() == pow(2, k) ;
}

int main() {
	string s ;
	int k ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF A STRING CONTAINS ALL BINARY CODES OF SIZE K " << endl ;
	cout << " -------------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = hasAllCodes(s, k) ;
	
	cout << endl ;	
	cout << (ans ? "TRUE...." : "FALSE....") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}