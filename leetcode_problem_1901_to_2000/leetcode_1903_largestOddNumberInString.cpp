
// 1903. LARGEST ODD NUMBER IN STRING

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/largest-odd-number-in-string/solutions/8117708/c-solution-by-nidhi_kamal-4nh1/

/* JAVA */
// https://leetcode.com/problems/largest-odd-number-in-string/solutions/8117727/java-solution-tc-on-sc-on-by-nidhi_kamal-gdze/

#include<iostream>

using namespace std ;

/** SOLUTION **/

string largestOddNumber(string num) {
    int n = num.length() ;
    for(int i = n-1; i >= 0; --i) {
        if((num[i] - '0') % 2) {
            return num.substr(0, i+1) ;
        }
    }
    return "" ;
}

int main() {
	string num, ans ;
	
	cout << endl ;
	cout << "  LARGEST ODD NUMBER IN STRING " << endl ;
	cout << " ==============================" << endl ;
	
	cout << endl ;
	cout << "Enter a numeric string, num = " ;
	cin >> num ;
	
	ans = largestOddNumber(num) ;
	
	cout << endl ;
	cout << "Largest Odd Number = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}