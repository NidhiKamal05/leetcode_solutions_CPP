
// 2259. REMOVE DIGITS FROM NUMBER TO MAXIMIZE RESULT

/** T.C. - O(N^2) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/solutions/8386405/c-solution-by-nidhi_kamal-306j/

/* JAVA */
// https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/solutions/8386423/java-by-nidhi_kamal-eecj/

#include<iostream>

using namespace std ;

#include<iostream>

using namespace std ;

string removeDigit(string number, char digit) {
	string ans = "" ;
	int n = number.length() ;
	for(int i=0; i<n; ++i) {
		if(number[i] == digit) {
			ans = max(ans, number.substr(0, i)+number.substr(i+1)) ;
		}
	}
	return ans ;
}

int main() {
	string number, ans ;
	char digit ;
	
	cout << endl ;
	cout << "  REMOVE DIGITS FROM NUMBER TO MAXIMIZE RESULT " << endl ;
	cout << " ==============================================" << endl ;
	
	cout << endl ;
	cout << "Enter a numeric string....." << endl ;
	cin >> number ;
	
	cout << endl ;
	cout << "Enter a numeric character, digit = " ;
	cin >> digit ;
	
	ans = removeDigit(number, digit) ;
	
	cout << endl ;
	cout << "Result = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}