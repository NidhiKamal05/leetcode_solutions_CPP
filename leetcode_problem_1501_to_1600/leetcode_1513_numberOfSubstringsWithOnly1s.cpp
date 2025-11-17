
// 1513. NUMBER OF SUBSTRINGS WITH ONLY 1S

#include<iostream>

using namespace std ;

int numSub(string s) {
    const int MOD = 1000000007 ;
    long long ans = 0 ;
    for(int i=0; i<s.length(); ++i) {
        if(s[i] == '1') {
            long long n = 0 ;
            while(i < s.length() && s[i] != '0') {
                ++n ;
                ++i ;
            }
            --i ;
            ans += n * (n + 1) / 2 ;
        }
    }
    return ans % MOD ;
}

int main() {
	int ans ;
	string s ;
	
	cout << endl ;
	cout << "  NUMBER OF SUBSTRINGS WITH ONLY 1S " << endl ;
	cout << " -----------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a binary string, s = " ;
	cin >> s ;
	
	ans = numSub(s) ;
	
	cout << endl ;
	cout << "Number of substrings = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}