
// 3461. CHECK IF DIGITS ARE EQUAL IN STRING AFTER OPERATIONS I

#include<iostream>

using namespace std ;

bool hasSameDigits(string s) {
	while(s.length() > 2) {
		for(int i=0; i<s.length()-1; ++i) {
			int sum = ((s[i]-'0') + (s[i+1]-'0')) % 10 ;
			s[i] = sum + '0' ;
		}
		s.pop_back() ;
	}
    return s[0] == s[1] ;
}

int main() {
	bool ans ;
	string s ;
	
	cout << endl ;
	cout << "  CHECK IF DIGITS ARE EQUAL IN STRING AFTER OPERATIONS I " << endl ;
	cout << " ========================================================" << endl ;
	
	cout << endl ;
	cout << "Enter a numerical string....." << endl ;
	cin >> s ;
	
	ans = hasSameDigits(s) ;
	
	cout << endl ;
	string str = ans ? "TRUE..." : "FALSE..." ;
	cout << "Answer = " << str << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*
bool isPalindrome(string s) {
	int i=0, j=s.length()-1 ;
	while(i < j) {
		if(s[i] != s[j]) {
			return false ;
		}
	}
	return true ;
}

bool hasSameDigits(string s) {
	while(s.length() > 2) {
		for(int i=0; i<s.length()-1; ++i) {
			int sum = ((s[i]-'0') + (s[i+1]-'0')) % 10 ;
			s[i] = sum + '0' ;
		}
		s.pop_back() ;
	}
	return isPalindrome(s) ;
}
*/