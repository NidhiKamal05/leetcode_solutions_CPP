
// 1844. REPLACE ALL DIGITS WITH CHARACTERS

#include<iostream>

using namespace std ;

string replaceDigits(string s) {
	int n = (s.length()%2 == 0) ? s.length() : s.length()-1 ;
	for(int i=0; i<n-1; i+=2) {
		int j = s.at(i+1) - '0' ;               // is equivalent to j = ((int)'a') - ((int)'0') ;
		s.at(i+1) = s.at(i)+j ;
	}
	return s ;
}

int main() {
	string s, ans ;
	
	cout << endl ;
	cout << "  REPLACE ALL DIGITS WITH CHARACTERS " << endl ;
	cout << " ````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string..... " << endl ;
	cin >> s ;
	
    ans = replaceDigits(s) ;
	
	cout << endl ;
	cout << "Result = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}