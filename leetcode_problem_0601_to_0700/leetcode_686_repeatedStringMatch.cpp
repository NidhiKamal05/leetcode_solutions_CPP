
// 689. REPEATED STRING MATCH

/** T.C. - O(N * M) & S.C. - O(N + M) **/

/* C++ */
// https://leetcode.com/problems/repeated-string-match/solutions/8133863/c-solution-by-nidhi_kamal-hw8t/

/* JAVA */
// https://leetcode.com/problems/repeated-string-match/solutions/8133869/java-solution-by-nidhi_kamal-3i2i/

#include<iostream>

using namespace std ;

int repeatedStringMatch(string a, string b) {
    int cnt = 0 ;
    string s = a ;
    for(cnt = 1; s.length() < b.length(); ++cnt) {
        s.append(a) ;
    } 
    if(s.find(b) != string::npos) {
        return cnt ;
    }
    s.append(a) ;
    if(s.find(b) != string::npos) {
        return ++cnt ;
    }
    return -1 ;
}

int main() {
	string a, b ;
	int k ;
	
	cout << endl ;
	cout << "  REPEATED STRING MATCH " << endl ;
	cout << " =======================" << endl ;
	
	cout << endl ;
	cout << "Enter string, a = " ;
	cin >> a ;	
	
	cout << endl ;
	cout << "Enter string, b = " ;
	cin >> b ;
	
	k = repeatedStringMatch(a, b) ;
	
	cout << endl ;
	cout << "Answer = " << k << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}