
// 844. BACKSPACE STRING COMPARE

/** T.C. - O(N + M) & S.C. - O(N + M) **/

/* C++ */
// https://leetcode.com/problems/backspace-string-compare/solutions/8372029/c-solution-0-ms-runtime-beats-100-on-m-b-9jnc/

/* JAVA */
// https://leetcode.com/problems/backspace-string-compare/solutions/8372043/java-solution-by-nidhi_kamal-jgm4/

#include<iostream>

using namespace std ;

string helper(string str) {
    string res ;
    for(char& c : str) {
        if(c != '#') {
            res += c ;
        }
        else if(!res.empty()) {
            res.pop_back() ;
        }
    }
    return res ;
}

bool backspaceCompare(string s, string t) {
    return helper(s) == helper(t) ;
}

int main() {
	bool ans ;
	string s, t ;
	
	cout << endl ;
	cout << "  BACKSPACE STRING COMPARE " << endl ;
	cout << " ==========================" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter a string, t = " ;
	cin >> t ;
	
	ans = backspaceCompare(s, t) ;
	
	cout << endl ;
	cout << (ans ? "TRUE...." : "FALSE....") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*bool backspaceCompare(string s, string t) {
    string s2 = "", t2 = "" ;
    s2.push_back(s.back()) ;
    s.pop_back() ;
    while(!s.empty()) {
        if(!s2.empty() && s2.back() == '#' && s.back() != '#') {
            s2.pop_back() ;
        }
        else {
            s2.push_back(s.back()) ;
        }
        s.pop_back() ;
    }        
    t2.push_back(t.back()) ;
    t.pop_back() ;
    while(!t.empty()) {
        if(!t2.empty() && t2.back() == '#' && t.back() != '#') {
            t2.pop_back() ;
        }
        else {
            t2.push_back(t.back()) ;
        }
        t.pop_back() ;
    }
    return s2 == t2 ;
}*/