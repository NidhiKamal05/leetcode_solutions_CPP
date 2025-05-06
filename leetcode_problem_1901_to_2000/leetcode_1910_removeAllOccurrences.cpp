
// 1910. REMOVE ALL OCCURRENCES OF A SUBSTRING

#include<iostream>

using namespace std ;

string removeOccurrences(string s, string part) {
    while(s.find(part) != string::npos) {
        int index = s.find(part) ;
        s = s.substr(0, index) + s.substr(index + part.length()) ;
    }
    return s ;
}

int main() {
	string s, part, ans ;
	
	cout << endl ;
	cout << "  REMOVE ALL OCCURRENCES OF A SUBSTRING " << endl ;
	cout << " ```````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter a string, part = " ;
	cin >> part ;
	
	cout << endl ;
    ans = removeOccurrences(s, part) ;
	
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}