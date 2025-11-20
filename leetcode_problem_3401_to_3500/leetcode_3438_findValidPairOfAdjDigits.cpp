
// 3438. FIND VALID PAIR OF ADJACENT DIGITS IN STRING

#include<iostream>
#include<unordered_map>

using namespace std ;

string findValidPair(string s) {
	string ans ;
	int len = s.length() ;
	unordered_map<char, int> ump ;
	for(char &c : s) {
		ump[c]++ ;
	}
	for(int i=0; i<len-1; ++i) {
		if(s[i] == s[i+1]) {
			continue ;
		}
		if((ump[s[i]] == s[i]-'0') && (ump[s[i+1]] == s[i+1]-'0')) {
			ans += s[i] ;
			ans += s[i+1] ;
			break ; 
		}
	}
	return ans ;
}

int main() {
	string s, validPair ;
	
	cout << endl ;
	cout << "  FIND VALID PAIR OF ADJACENT DIGITS IN STRING " << endl ;
	cout << " ``````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string : " ;
	cin >> s ;
	
	cout << endl ;
    validPair = findValidPair(s) ;
	
	cout << "Valid Pair = " << validPair << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}