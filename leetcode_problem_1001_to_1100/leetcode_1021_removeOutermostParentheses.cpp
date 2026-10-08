
// 1021. REMOVE OUTERMOST PARENTHESES

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/remove-outermost-parentheses/solutions/8563099/c-0-ms-runtime-beats-100-memory-beats-80-poke/

/* JAVA */
// https://leetcode.com/problems/remove-outermost-parentheses/solutions/8563115/java-runtime-beats-9976-by-nidhi_kamal-barf/

#include<iostream>

using namespace std ;

string removeOuterParentheses(string s) {
    string ans ;
    int depth = 0 ;
    for(char c : s) {
        if(c == ')') {
            --depth ;
        }
        if(depth) {
            ans += c ;
        }
        if(c == '(') {
            ++depth ;
        }
    }
    return ans ;
}

/*string removeOuterParentheses(string s) {
    string ans, temp ;
    for(char c : s) {
        if(c == ')') {                
            temp.pop_back() ;
        }
        if(temp.length() != 0) {
            ans += c ;
        }
        if(c == '(') {
            temp += c ;
        }
    }
    return ans ;
}*/

int main(){
	string s, ans ;
	
	cout << endl ;
	cout << "  REMOVE OUTERMOST PARENTHESES " << endl ;
	cout << " ``````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string (of parentheses).....\n" ;
	cin >> s ;
	
	cout << endl ;
    ans = removeOuterParentheses(s) ;
	
	cout << "Result = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*string removeOuterParentheses(string s) {
	string ans, temp ;
	for(char c : s) {
		if(c == '(') {
			if(temp.length() != 0) {
				ans += c ;
			}
			temp += c ;
		}
		else {
			temp.pop_back() ;
			if(temp.length() != 0) {
				ans += c ;
			}
		}
	}
	return ans ;
}*/