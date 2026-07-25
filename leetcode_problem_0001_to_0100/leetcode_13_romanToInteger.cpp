
// 13. ROMAN TO INTEGER

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/roman-to-integer/solutions/8419445/c-solution-hash-map-on-time-o1-space-by-th8ku/

/* JAVA */
// https://leetcode.com/problems/roman-to-integer/solutions/8419459/java-solution-roman-to-integer-by-nidhi_-i2m6/

#include<iostream>
#include<unordered_map>

using namespace std ;

int romanToInt(string s) {
	int ans = 0 ;
	unordered_map<char, int> romanInt = {
		{'I', 1},
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100},
		{'D', 500},
		{'M', 1000}
	} ;
	int n = s.length() ;
	for(int i = 0; i < n-1; ++i) {
		if(romanInt[s[i]] < romanInt[s[i + 1]]) {
			ans -= romanInt[s[i]] ;
		}
		else {
			ans += romanInt[s[i]] ;
		}
	}
	return ans + romanInt[s[n - 1]] ;
}

int main() {
	string s ;
	int val ;
	
	cout << endl ;
	cout << "  ROMAN TO INTEGER " << endl ;
	cout << " ------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string in roman, s = " ;
	cin >> s ;
	
	val = romanToInt(s) ;
	
	cout << endl ;
	cout << "Answer = " << val << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}