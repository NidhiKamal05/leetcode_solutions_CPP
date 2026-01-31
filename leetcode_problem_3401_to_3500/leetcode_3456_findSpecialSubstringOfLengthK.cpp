
// 3456. FIND SPECIAL SUBSTRING OF LENGTH K

#include<iostream>

using namespace std ;

bool hasSpecialSubstring(string s, int k) {
    int len = s.length(), idx = 0 ;
    for(int i=0; i<len; ++i) {
        if(s[i] == s[idx]) {
            continue ;
        }
        if(i-idx == k) {
            return true ;
        }
        idx = i ;
    }
    return len-idx == k ;
}

int main() {
	string s ;
	int k ;
	bool ans ;
	
	cout << endl ;
	cout << "  FIND SPECIAL SUBSTRING OF LENGTH K " << endl ;
	cout << " ------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter a integer, k = " ;
	cin >> k ;
	
	ans = hasSpecialSubstring(s, k) ;
	
	cout << endl ;
	if(ans) {
		cout << "TRUE...." << endl ;
	}
	else {
		cout << "FALSE...." << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}