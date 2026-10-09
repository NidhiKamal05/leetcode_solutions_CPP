
// 1541. MINIMUM INSERTIONS TO BALANCE PARANTHESES STRING

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/solutions/8564688/c-runtime-beats-100-0-ms-on-time-by-nidh-8f7h/

/* JAVA */
// https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/solutions/8564706/java-solution-greedy-counting-on-by-nidh-0ocu/

#include<iostream>

using namespace std ;

int minInsertions(string s) {
    int n = s.length(), ans = 0, bracket = 0 ;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '(') {
            ++bracket ;
        }
        else {
            if(i + 1 < n && s[i + 1] == ')') {
                ++i ;
            }
            else {
                ++ans ;
            }
            if(bracket > 0) {
                --bracket ;
            }
            else {
                ++ans ;
            }
        }
    }
    if(bracket > 0) {
        ans += 2 * bracket ;
    }
    return ans ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  MINIMUM INSERTIONS TO BALANCE PARANTHESES STRING " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string (containing only '(' and ')'......." << endl ;
	cout <<	"s = " ;
	cin >> s ;
	
	ans = minInsertions(s) ;
	
	cout << endl ;
	cout << "Minimum number of insertions = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}