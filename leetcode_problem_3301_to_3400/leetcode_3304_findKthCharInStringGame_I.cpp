
// 3304. FIND THE K-TH CHARACTER IN STRING GAME I

/** T.C. - O(K) & S.C. - O(K) **/

/* C++ */
// https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/solutions/7766636/c-solution-beats-100-runtime-0-ms-easy-b-e15z/

/* JAVA */
// https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/solutions/7766728/java-easy-solution-by-nidhi_kamal-000q/

#include<iostream>

using namespace std ;

char kthCharacter(int k) {
	string s = "a" ;
	while(s.length() < k) {
		int n = s.length() ;
		for(int i = 0; i < n; ++i) {
			s += (s[i] + 1) ;
		}
	}
	return s[k - 1] ;
}

int main() {
	int k ;
	char kthChar ;
	
	cout << endl ;
	cout << "  FIND THE K-TH CHARACTER IN STRING GAME I " << endl ;
	cout << " ``````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
    kthChar = kthCharacter(k) ;
	
	cout << endl ;
	cout << "Kth character = " << kthChar << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}