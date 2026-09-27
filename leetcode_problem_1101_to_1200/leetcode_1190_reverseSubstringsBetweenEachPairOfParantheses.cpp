
// 1190. REVERSE SUBSTRINGS BETWEEN EACH PAIR OF PARANTHESES

/** T.C. - O(N^2) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/solutions/8543402/c-stack-string-reverse-tc-on2-sc-on-by-n-kxtq/

/* JAVA */
// https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/solutions/8543388/java-solution-by-nidhi_kamal-907i/

#include<iostream>
#include<algorithm>
#include<stack>

using namespace std ;

string reverseParentheses(string s) {
    string ans ;
    stack<int> stk ;
    for(char c : s) {
        if(c == '(') {
            stk.push(ans.length()) ;
        }
        else if(c == ')') {
            int idx = stk.top() ;
            stk.pop() ;
            reverse(ans.begin() + idx, ans.end()) ;
        }
        else {
            ans += c ;
        }
    }
    return ans ;
}

int main() {
	string s, ans ;
	
	cout << endl ;
	cout << "  REVERSE SUBSTRINGS BETWEEN EACH PAIR OF PARANTHESES " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	ans = reverseParentheses(s) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}