
// 2384. LARGEST PALINDROMIC NUMBER

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/largest-palindromic-number/solutions/7639345/c-solution-time-complexity-on-easy-by-ni-bohc/

/* JAVA */
// https://leetcode.com/problems/largest-palindromic-number/solutions/7639386/java-frequency-count-greedy-solution-on-282m8/

#include<iostream>
#include<queue>

using namespace std ;

string largestPalindromic(string num) {
	vector<int> freq(10, 0) ;
    string left, middle ;
    for(char& n : num) {
        freq[n - '0']++ ;
    }
    for(int n=9; n>=0; --n) {
        if(n == 0 && left.empty()) {
            continue ;
        }
        while(freq[n] > 1) {
            left += (n + '0') ;
            freq[n] -= 2 ;
        }
        if(freq[n] == 1 && middle.empty()) {
            middle += (n + '0') ;
        }
    }
    string right = left ;
    reverse(right.begin(), right.end()) ;
    string res = left + middle + right ;
    return res.empty() ? "0" : res ;
}

int main() {
	string num, ans ;
	
	cout << endl ;
	cout << "  FIND MAXIMUM NUMBER OF STRING PAIRS " << endl ;
	cout << " =====================================" << endl ;
	
	cout << endl ;
	cout << "Enter a numeric string : " ;
	cin >> num ;
	
	ans = largestPalindromic(num) ;
	
	cout << endl ;
	cout << "Largest Palindromic Number = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}