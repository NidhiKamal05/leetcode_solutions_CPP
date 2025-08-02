
// 551. STUDENT ATTENDENCE RECORD I

#include<iostream>

using namespace std ;

bool checkRecord(string s) {
	int n = s.length() ;
	int cntA = 0 ;
	for(int i=0; i<n; ++i) {
		if((i<n-2) && (s[i] == 'L')) {
			if((s[i] == s[i+1]) && (s[i] == s[i+2])) {
				return false ;
			}
		}
		if(s[i] == 'A') {
			++cntA ;
		}
	}	
	if(cntA > 1) {
		return false ;
	}
	return true ;
}

int main() {
	string s ;
	bool ans ;
	
	cout << endl ;
	cout << "  STUDENT ATTENDENCE RECORD I " << endl ;
	cout << " ............................." << endl ;
	
	cout << endl ;
	cout << "Enter a string.....\n " ;
	cin >> s ;
	
	cout << endl ;
    ans = checkRecord(s) ;
	
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}