
// 921. MINIMUM ADD TO MAKE PARENTHESES VALID

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/solutions/8559516/c-0-ms-runtime-beats-100-on-solution-by-z8hp0/

/* JAVA */
// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/solutions/8559557/java-solution-runtime-0-ms-beats-100-tc-utknu/

#include<iostream>

using namespace std ;

int minAddToMakeValid(string s) {
    int openParentheses = 0, closeParentheses = 0 ;
    for(char c : s) {
        if(c == '(') {
            ++openParentheses ;
        }
        else if(c == ')' && openParentheses > 0) {
            --openParentheses ;
        }
        else {
            ++closeParentheses ;
        }
    }
    return closeParentheses + openParentheses ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  MINIMUM ADD TO MAKE PARENTHESES VALID " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string (containing only '(' and ')'" << endl ;
	cout << "s = " ;
	cin >> s ;
	
	ans = minAddToMakeValid(s) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}