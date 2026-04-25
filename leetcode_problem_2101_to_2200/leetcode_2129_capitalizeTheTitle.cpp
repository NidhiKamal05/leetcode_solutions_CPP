
// 2129. CAPITALIZE THE TITLE

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/capitalize-the-title/solutions/8097595/c-solution-beats-100-0-ms-by-nidhi_kamal-st32/

/* JAVA */
// 

#include<iostream>

using namespace std ;

string capitalizeTitle(string title) {
	int n = title.length() ;
	for(int i = 0; i < n; ++i) {
		if(i == 0 || title[i - 1] == ' ') {
			if(i + 1 == n || i + 2 == n || title[i + 1] == ' ' || title[i + 2] == ' ') {
				title[i] = towlower(title[i]) ;
			}
			else {
				title[i] = towupper(title[i]) ;
			}
		}
		else {
			title[i] = towlower(title[i]) ;
		} 
	}
	return title ;
}

int main() {
	string title, ans ;
	
	cout << endl ;
	cout << "  CAPITALIZE THE TITLE " << endl ;
	cout << " ======================" << endl ;
	
	cout << endl ;
	cout << "Enter a string, title = " ;
	getline(cin, title) ;
	
    ans = capitalizeTitle(title) ;
	
	cout << endl ;
	cout << "Capitalized title = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}