
// 2390. REMOVING STARS FROM A STRING

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/removing-stars-from-a-string/solutions/8292932/c-solution-by-nidhi_kamal-yb44/

/* JAVA */
// https://leetcode.com/problems/removing-stars-from-a-string/solutions/8292939/java-solution-tc-on-sc-o1-by-nidhi_kamal-7ido/

#include<iostream>

using namespace std ;

/*string removeStars(string s) {
    string t = "" ;
    int n = s.length() ;
    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == '*') {
            t.pop_back() ;
        }
        else {
            t += s[i] ;
        }
    }
    return t ;
}*/
	
string removeStars(string s) {
    string s1 = "", s2 = "" ;
    int n = s.length() ;
    for(int i = n-1; i >= 0; --i) {
        s1.push_back(s[i]) ;
    }
    s2.push_back(s1.back()) ;
    s1.pop_back() ;
    while(!s1.empty()) {
        if(s2.empty() || s1.back() != '*') {
            s2.push_back(s1.back()) ;
        }
        else {
            s2.pop_back() ;
        }            
        s1.pop_back() ;
    }
    return s2 ;
}

int main() {
	string s, ans ;
	
	cout << endl ;
	cout << "  CALCULATE DIGIT SUM OF A STRING " << endl ;
	cout << " =================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	ans = removeStars(s) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}