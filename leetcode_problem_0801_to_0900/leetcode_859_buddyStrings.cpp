
// 859. BUDDY STRINGS

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

bool buddyStrings(string s, string goal) {
    if(s.length() != goal.length()) {
        return false ;
    }
    if(s == goal) {
        unordered_set<char> st(s.begin(), s.end()) ;
        return st.size() != s.size() ;
    }
    vector<int> idx ;
    for(int i=0; i<s.length(); ++i) {
        if(s[i] != goal[i]) {
            idx.push_back(i) ;
        }
        if(idx.size() > 2) {
            return false ;
        }
    }
    if(idx.size() != 2) {
        return false ;
    }
    if(s[idx[0]] == goal[idx[1]] && s[idx[1]] == goal[idx[0]]) {
        return true ;
    }
    return false ;
}

int main() {
	string s, goal ;
	bool ans ;
	
	cout << endl ;
	cout << "  BUDDY STRINGS " << endl ;
	cout << " ---------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter a string, goal = " ;
	cin >> goal ;
	
	ans = buddyStrings(s, goal) ;
	
	cout << endl ;
	cout << (ans ? "TRUE...." : "FALSE....") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}