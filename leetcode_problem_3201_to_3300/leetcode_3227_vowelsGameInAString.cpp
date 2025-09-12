
// 3227. VOWELS GAME IN A STRING

#include<iostream>

using namespace std ;

bool doesAliceWin(string s) {
	for(char c : s) {
        if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')) {
            return true ;
        }
    }
    return false ;
}

int main() {
	string s ;
	bool ans ;
	
	cout << endl ;
	cout << "  VOWELS GAME IN A STRING " << endl ;
	cout << " =========================" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	cin >> s ;
	
	ans = doesAliceWin(s) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}