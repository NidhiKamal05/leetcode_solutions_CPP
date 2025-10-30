
// 20. VALID PARENTHESES

#include<iostream>
#include<stack>
#include<unordered_map>

using namespace std ;

bool isValid(string s) {
    if(s.length()%2 != 0) {
        return false ;
    }
    unordered_map<char, char> mp ;
    mp['('] = ')' ;
    mp['{'] = '}' ;
    mp['['] = ']' ;
    stack<char> st ;
    for(char c : s) {
        if((c == '(') || (c == '{') || (c == '[')) {
            st.push(c) ;
        }
        else {
            if(!st.empty() && mp[st.top()] == c) {
                st.pop() ;
            }
            else {
                return false ;
            }
        }
    }
    return st.empty() ;
}

int main() {
	string s ;
	bool ans ;
	
	cout << endl ;
	cout << "  VALID PARENTHESES " << endl ;
	cout << " ```````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string.....\n" ;
	cin >> s ;
	
    ans = isValid(s) ;
	
	cout << endl ;	
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*bool isValid(string s) {
	if(s.length()%2 != 0) {
		return false ;
	}
	unordered_map<char, char> mp ;
	mp['('] = ')' ;
	mp['{'] = '}' ;
	mp['['] = ']' ;
	stack<char> st ;
	for(int i=0; i<s.length(); ++i) {
		if((s[i]=='(') || (s[i]=='{') || (s[i]=='[')) {
			st.push(s[i]) ;
		}
		if((s[i]==')') || (s[i]=='}') || (s[i]==']')) {
			if(mp[st.top()] == s[i]) {
				st.pop() ;
			}
			else {
				return false ;
			}
		}
	}
	return true ;
}*/