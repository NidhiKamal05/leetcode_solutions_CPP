
// 459. REPEATED SUBSTRING PATTERN

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/repeated-substring-pattern/solutions/8327886/c-solution-by-nidhi_kamal-fxfv/

/* JAVA */
// https://leetcode.com/problems/repeated-substring-pattern/solutions/8327893/java-by-nidhi_kamal-l8kj/

#include<iostream>

using namespace std ;

bool repeatedSubstringPattern(string s) {
	string concatStr = s + s ;
    string str = concatStr.substr(1, concatStr.length() - 2) ;
    return str.find(s) != string::npos ;
}

int main() {
	bool ans ;
	string s ;
	
	cout << endl ;
	cout << "  REPEATED SUBSTRING PATTERN " << endl ;
	cout << " ============================" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	cin >> s ;
	
	ans = repeatedSubstringPattern(s) ;
	
	cout << endl ;
	string res = ans ? "TRUE...." : "FALSE...." ;
	cout << "Answer = " << res << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}