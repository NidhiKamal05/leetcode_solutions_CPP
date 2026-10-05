
// 856. SCORE OF PARENTHESES

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/score-of-parentheses/solutions/8557125/c-0-ms-runtime-beats-100-memory-beats-95-l54b/

/* JAVA */
// https://leetcode.com/problems/score-of-parentheses/solutions/8557115/java-runtime-beats-100-memory-beats-8257-jm9h/

#include<iostream>

using namespace std ;

int scoreOfParentheses(string s) {
	int n = s.length(), score = 0, d = 0 ;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '(') {
            ++d ;
        }
        else {
            --d ;
            if(s[i - 1] == '(') {
                score += (1 << d) ;
                // score += (1 * pow(2, d)) ;
            }
        }
    }
    return score ;
}

int main() {
	string s ;
	int score ;
	
	cout << endl ;
	cout << "  SCORE OF PARENTHESES " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string (consisting only '(' and ')')......" << endl ;
	cout << "s = " ;
	cin >> s ;
	
	score = scoreOfParentheses(s) ;
	
	cout << endl ;
	cout << "Score = " << score << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}