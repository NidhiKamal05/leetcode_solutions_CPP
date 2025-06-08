
// 3019. NUMBER OF CHANGING KEYS

#include<iostream>

using namespace std ;

int countKeyChanges(string s) {
	int len = s.length(), cnt = 0 ;
    for(int i=1; i<len; ++i) {
        if(tolower(s[i-1]) != tolower(s[i])) {
            ++cnt ;
        }
    }
    return cnt ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  NUMBER OF CHANGING KEYS " << endl ;
	cout << " ........................." << endl ;
	
	cout << endl ;
	cout << "Enter a string....\n" ;
	cin >> s ;
	
	ans = countKeyChanges(s) ;
	
	cout << endl ;
	cout << "Number of times the user had to change the key = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}