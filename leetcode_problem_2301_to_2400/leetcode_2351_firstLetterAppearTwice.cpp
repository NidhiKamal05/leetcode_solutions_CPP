
// 2351. FIRST LETTER TO APPEAR TWICE

#include<iostream>
#include<unordered_map>

using namespace std ;

char repeatedCharacter(string s) {
	unordered_map<char, int> ump ;
	for(auto& c : s) {
		if(ump.find(c) != ump.end()) {
			return c ;
		}
		ump[c]++ ;
	}
	return '0' ;
}

int main() {
	string s ;
	char letter ;
	
	cout << endl ;
	cout << "  FIRST LETTER TO APPEAR TWICE " << endl ;
	cout << " ``````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string..... " << endl ;
	cin >> s ;
	
    letter = repeatedCharacter(s) ;
	
	cout << endl ;
	cout << "Letter appears twice = " << letter << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}