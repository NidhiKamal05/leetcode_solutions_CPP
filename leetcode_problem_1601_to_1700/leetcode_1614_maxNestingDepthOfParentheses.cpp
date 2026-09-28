
// 1614. MAXIMUM NESTING DEPTH OF THE PARENTHESES

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/solutions/8545375/c-0-ms-runtime-beats-100-on-solution-by-0nww9/

/* JAVA */
// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/solutions/8545381/java-solution-beats-100-runtime-0-ms-on-dwbxw/

#include<iostream>

using namespace std ;

int maxDepth(string s) {
    int depth = 0, brackets = 0 ;
    for(char c : s) {
        if(c == '(') {
            ++brackets ;
        }
        else if(c == ')') {
            --brackets ;
        }
        depth = max(depth, brackets) ;
    }
    return depth ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  MAXIMUM NESTING DEPTH OF THE PARENTHESES " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a valid parenthesis string, s = " ;
	cin >> s ;
	
	ans = maxDepth(s) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}