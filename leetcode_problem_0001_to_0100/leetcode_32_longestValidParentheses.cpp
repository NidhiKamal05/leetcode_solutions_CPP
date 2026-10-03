
// 32. LONGEST VALID PARENTHESES

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/longest-valid-parentheses/solutions/8553553/c-0-ms-runtime-beats-100-string-stack-by-v84f/

/* JAVA */
// https://leetcode.com/problems/longest-valid-parentheses/solutions/8553556/java-on-solution-using-stack-by-nidhi_ka-knih/

#include<iostream>
#include<stack>

using namespace std ;

int longestValidParentheses(string s) {
    int ans = 0 ;
    stack<int> st ;
    st.push(-1) ;
    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == '(') {
            st.push(i) ;
        }
        else {
            st.pop() ;          // pair matched
            if(st.empty()) {
                st.push(i) ;  // sets new boundary
            }
            else {
                ans = max(ans, i - st.top()) ;        // max length of valid parantheses
            }
        }
    }
    return ans ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  LONGEST VALID PARENTHESES " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string s (containing only '(' and ')')..... " << endl ;
	cout << " s = " ;
	cin >> s ;
	
	ans = longestValidParentheses(s) ;
	
	cout << endl ;
	cout << "Length of longest valid parentheses = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}