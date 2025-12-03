
// 1941. CHECK IF ALL CHARACTERS HAVE EQUAL NUMBER OF OCCURRENCES

#include<iostream>
#include<unordered_map>

using namespace std ;

bool areOccurrencesEqual(string s) {
    unordered_map<char, int> freq ;
    for(char& ch : s) {
        freq[ch]++ ;
    }
    int x = freq[s[0]] ;
    for(auto& [ch, occ] : freq) {
        if(occ != x) {
            return false ;
        }
    }
    return true ;
}

int main() {
	string s ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF ALL CHARACTERS HAVE EQUAL NUMBER OF OCCURRENCES " << endl ;
	cout << " ----------------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	ans = areOccurrencesEqual(s) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}