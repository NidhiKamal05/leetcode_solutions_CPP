
// 3498. REVERSE DEGREE OF A STRING

#include<iostream>
#include<unordered_map>

using namespace std ;

int reverseDegree(string s) {
	char alpha = 'a' ;
	int val = 26 ;
	unordered_map<char, int> ump ;
	for(int i=0; i<26; ++i) {
		ump[alpha++] = val-- ;
	}
	int sum = 0 ;
	for(int i=0; i<s.length(); ++i) {
		sum += ((i+1) * (ump[s[i]])) ;
	}
	return sum ;
}

int main() {
	int revDeg ;
	string s ;
	
	cout << endl ;
	cout << "  REVERSE DEGREE OF A STRING " << endl ;
	cout << " ============================" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	cin >> s ;
	
	revDeg = reverseDegree(s) ;
	
	cout << endl ;
	cout << "Reverse degree of " << s << " = " << revDeg << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}