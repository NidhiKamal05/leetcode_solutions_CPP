
// 2243. CALCULATE DIGIT SUM OF A STRING

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/calculate-digit-sum-of-a-string/solutions/8179867/c-runtime-beats-100-0-ms-on-solution-by-zudhh/

/* JAVA */
// https://leetcode.com/problems/calculate-digit-sum-of-a-string/solutions/8179916/java-solution-easy-tc-on-sc-on-by-nidhi_-rrxd/

#include<iostream>

using namespace std ;

string digitSum(string s, int k) {
	while(s.length() > k) {
        string str = "" ;
        for(int i = 0; i < s.length(); i+=k) {
            int sum = 0 ;
            for(int j = i; j < i+k && j < s.length(); ++j) {
                sum += s[j] - '0' ;
            }
            str += to_string(sum) ;
        }
        s = str ;
    }
    return s ;
}

int main() {
	int k ;
	string s, ans ;
	
	cout << endl ;
	cout << "  CALCULATE DIGIT SUM OF A STRING " << endl ;
	cout << " =================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = digitSum(s, k) ;
	
	cout << endl ;
	cout << "Digit Sum = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}