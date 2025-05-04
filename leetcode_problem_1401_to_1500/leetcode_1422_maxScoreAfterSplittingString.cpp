
// 1422. MAXIMUM SCORE AFTER SPLITTING A STRING

#include<iostream>

using namespace std ;

int maxScore(string s) {
	int n = s.length() ;
	int score = INT_MIN ;
	int j, k, cnt0, cnt1 ;
	for(int i=0; i<n-1; ++i) {
		cnt0 = 0, cnt1 = 0 ;
		j = 0 ;
		k = i+1 ;
		while(j < k) {
			if(s[j++] == '0') {
				++cnt0 ;
			}
		}
		while(k < n) {
			if(s[k++] == '1') {
				++cnt1 ;
			}
		}
		score = max(score, cnt0+cnt1) ;
	}
	return score ;
}

int main() {
	string s ;
	int score ;
	
	cout << endl ;
	cout << " MAXIMUM SCORE AFTER SPLITTING A STRING " << endl ;
	cout << "----------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	cin >> s ;
	
	score = maxScore(s) ;
	
	cout << endl ;
	cout << "Max Score = " << score << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}