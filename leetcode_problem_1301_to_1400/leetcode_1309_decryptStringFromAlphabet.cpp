
// 1309. DECRYPT STRING FROM ALPHABET TO INTEGER MAPPING

#include<iostream>
#include<unordered_map>

using namespace std ;

string freqAlphabets(string s) {
    unordered_map<int, char> mp ;
    char c = 'a' ;
    for(int i=1; i<=26; ++i) {
        mp[i] = c++ ;
    }
    string ans ;
    for(int i=0; i<s.length(); ++i) {
        if(i+2 < s.length() && s[i+2] == '#') {
            int n = ((s[i] - '0') * 10) + (s[i+1] - '0') ;
            ans += mp[n] ;
            i += 2 ;
        }
        else {
            ans += mp[s[i] - '0'] ;
        }
    }
    return ans ;
}

int main() {
	string s, ans ;
	
	cout << endl ;
	cout << "  DECRYPT STRING FROM ALPHABET TO INTEGER MAPPING " << endl ;
	cout << " -------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	ans = freqAlphabets(s) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}