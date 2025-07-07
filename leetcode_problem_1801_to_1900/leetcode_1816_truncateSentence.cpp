
// 1816. TRUNCATE SENTENCE

#include<iostream>

using namespace std ;

string truncateSentence(string s, int k) {
	string ans ;
    int cnt = 0 ;
    int i = 0 ;
    while(i < s.length()) {
        if(cnt == k) {
            break ;
        }
        if(s[i] == ' ') {
            ++cnt ;
        }
        ++i ;
    }
    if(cnt < k) {
        return s ;
    }
    for(int j=0; j<i-1; ++j) {
        ans += s[j] ;
    }
    return ans ;
}

 // cout << endl << "cnt=" << cnt << "  i=" << i << endl ;

int main() {
	string s, ans ;
	int k ;
	
	cout << endl ;
	cout << "  TRUNCATE SENTENCE " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string......" << endl ;
	cin >> s ;
	
	fflush(stdin) ;
	
	cout << endl ;
	cout << "k = " ;
	cin >> k ;
	
	ans = truncateSentence(s, k) ;
	
	cout << endl ;
	cout << "Truncated Sentence = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}