
// 1957. DELETE CHARACTERS TO MAKE FANCY STRING

#include<iostream>

using namespace std ;

string makeFancyString(string s) {
    string ans ;
    ans += s[0] ;
    char prev = s[0] ;
    int n = s.length(), freq = 1 ;
    for(int i=1; i<n; ++i) {
        if(s[i] == prev) {
            ++freq ;
        }
        else {
            prev = s[i] ;
            freq = 1 ;
        }
        if(freq < 3) {
            ans += s[i] ;
        }
    }
    return ans ;
}

int main() {
	string s, fancyString ;
	
	cout << endl ;
	cout << "  DELETE CHARACTERS TO MAKE FANCY STRING " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string......" << endl ;
	cin >> s ;
	
	fancyString = makeFancyString(s) ;
	
	cout << endl ;
	cout << "Fancy String = " << fancyString << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** TIME LIMIT EXCEEDED **/
/*string makeFancyString(string s) {
	int n = s.length() ;
	if(n <= 2) {
		return s ;
	}
	for(int i=2; i<n; ++i) {
		if((s[i]==s[i-1])&&(s[i]==s[i-2])) {
			s.erase(i, 1) ;
			--i ;
			n -= 1 ;
		}
	}
	return s ;
}*/