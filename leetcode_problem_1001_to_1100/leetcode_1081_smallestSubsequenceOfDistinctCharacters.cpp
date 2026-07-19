
// 1081. SMALLEST SUBSEQUENCE OF DISTINCT CHARACTERS

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/solutions/8407543/c-runtime-beats-100-0-ms-on-solution-by-yqjch/

/* JAVA */
// https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/solutions/8407549/java-solution-runtime-beats-9845-stack-g-h91h/

#include<iostream>
#include<vector>

using namespace std ;

string smallestSubsequence(string s) {
    vector<int> lastIndex(26) ;
    int n = s.length() ;
    for(int i = 0; i < n; ++i) {
        lastIndex[s[i] - 'a'] = i ;
    }
    vector<bool> visited(26, false) ;
    string stk ;
    for(int i = 0; i < n; ++i) {
        char c = s[i] ;
        int idx = c - 'a' ;
        if(visited[idx]) {
            continue ;
        }
        while(!stk.empty() && stk.back() > c && lastIndex[stk.back() - 'a'] > i) {
            visited[stk.back() - 'a'] = false ;
            stk.pop_back() ;
        }
        stk.push_back(c) ;
        visited[idx] = true ;
    }
    return stk ;
}

int main() {
	string s, ans ;
	
	cout << endl ;
	cout << "  SMALLEST SUBSEQUENCE OF DISTINCT CHARACTERS " << endl ;
	cout << " =============================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
    ans = smallestSubsequence(s) ;
	
	cout << endl ;
	cout << "Lexicographically smallest subsequence = \"" << ans << "\"" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}