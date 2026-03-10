
// 2309. GREATEST ENGLISH LETTER IN UPPER AND LOWER CASE

/** T.C.-O(N) & S.C.-O(1) **/

/* C++ */
// https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/solutions/7594409/c-solution-by-nidhi_kamal-0fpx/

/* JAVA */
// https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/solutions/7594403/java-solution-on-time-using-hashset-by-n-fhlu/

#include<iostream>
#include<set>

using namespace std ;

string greatestLetter(string s) {
    set<char> upper, lower ;
    for(char c : s) {
        if(isupper(c)) {
            upper.insert(c) ;
        }
        else {
            lower.insert(c) ;
        }
    }
    for(char ch='Z'; ch>='A'; --ch) {
        if(upper.count(ch) && lower.count(tolower(ch))) {
            return string(1, ch) ;
        }
    }
    return "" ;
}

int main() {
	string s, ans ;
	
	cout << endl ;
	cout << "  GREATEST ENGLISH LETTER IN UPPER AND LOWER CASE " << endl ;
	cout << " -------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	ans = greatestLetter(s) ;
	
	cout << endl ;	
	cout << "Answer = \"" << ans << "\"" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}