
// 3723. MAXIMIZE SUM OF SQUARES OF DIGITS

/** T.C. - O(Num) & S.C. - O(Num) **/

/* C++ */
// https://leetcode.com/problems/maximize-sum-of-squares-of-digits/solutions/8572299/c-solution-greedy-approach-by-nidhi_kama-bb69/

/* JAVA */
// https://leetcode.com/problems/maximize-sum-of-squares-of-digits/solutions/8572303/java-greedy-solution-by-nidhi_kamal-oqht/

#include<iostream>

using namespace std ;

string maxSumOfSquares(int num, int sum) {
	string ans = "" ;
    if(sum > 9 * num) {
        return ans ;
    }
    int nines = sum / 9 ;
    for(int i = 0; i < nines; ++i) {
        ans += '9' ;
    }
    int rem = sum % 9 ;
    if(rem != 0) {
        ans += (rem + '0') ;
    }
    int zeros = num - ans.length() ;
    for(int i = 0; i < zeros; ++i) {
        ans += '0' ;
    }
    return ans ;
}

int main() {
	string score ;
	int num, sum ;
	
	cout << endl ;
	cout << "  MAXIMIZE SUM OF SQUARES OF DIGITS " << endl ;
	cout << " ===================================" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, num = " ;
	cin >> num ;
	
	cout << endl ;
	cout << "Enter an integer, sum = " ;
	cin >> sum ;
	
	score = maxSumOfSquares(num, sum) ;
	
	cout << endl ;
	cout << "Max Score = \"" << score << "\"" << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}