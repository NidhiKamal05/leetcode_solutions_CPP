
// 1784. CHECK IF BINARY STRING HAS AT MOST ONE SEGMENT OF ONES

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/solutions/7629360/c-runtime-beats-100-memory-beats-9603-by-2vhp/

/* JAVA */
// https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/solutions/7629369/java-0-ms-runtime-beats-100-on-solution-mkznp/

#include<iostream>

using namespace std ;

bool checkOnesSegment(string s) {
    for(int i=1; i<s.length(); ++i) {
        if(s[i] == '1' && s[i - 1] == '0') {
            return false ;
        }
    }
    return true ;
}

int main() {
	string s ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF BINARY STRING HAS AT MOST ONE SEGMENT OF ONES " << endl ;
	cout << " --------------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a binary string, s = " ;
	cin >> s ;
	
	ans = checkOnesSegment(s) ;
	
	cout << endl ;	
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}