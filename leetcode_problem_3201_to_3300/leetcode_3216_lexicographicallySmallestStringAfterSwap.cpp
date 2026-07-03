
// 3216. LEXICOGRAPHICALLY SMALLEST STRING AFTER A SWAP

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/lexicographically-smallest-string-after-a-swap/solutions/8374244/c-solution-by-nidhi_kamal-a3gk/

/* JAVA */
// https://leetcode.com/problems/lexicographically-smallest-string-after-a-swap/solutions/8374281/java-solution-runtime-beats-100-1-ms-by-0iv6e/

#include<iostream>

using namespace std ;

/*string getSmallestString(string s) {
    int n = s.length() ;
    for(int i = 1; i < n; ++i) {
        int prev = s[i - 1] - '0' ;
        int curr = s[i] - '0' ;
        if(((prev + curr) % 2) == 0 && prev > curr) {
            swap(s[i - 1], s[i]) ;
            break ;
        }
    }
    return s ;
}*/

string getSmallestString(string s) {
	int n = s.length() ;
    string smallestString = s ;
    for(int i = 1; i < n; ++i) {
        if((((s[i - 1] - '0') + (s[i] - '0')) % 2) == 0) {
            string str = s.substr(0, i - 1) + s[i] + s[i - 1] + s.substr(i + 1) ;
			// cout << s.substr(0, i - 1) << ", " << s[i] << ", " << s[i - 1] << ", " << s.substr(i + 1) << endl ;
            smallestString = min(smallestString, str) ;
        }
    }
    return smallestString ;
}

using namespace std ;

int main() {
	string s, str ;
	
	cout << endl ;
	cout << "  LEXICOGRAPHICALLY SMALLEST STRING AFTER A SWAP " << endl ;
	cout << " ================================================" << endl ;
	
	cout << endl ;
	cout << "Enter a numeric string....." << endl ;
	cin >> s ;
	
	str = getSmallestString(s) ;
	
	cout << endl ;
	cout << "Smallest string = " << str << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}