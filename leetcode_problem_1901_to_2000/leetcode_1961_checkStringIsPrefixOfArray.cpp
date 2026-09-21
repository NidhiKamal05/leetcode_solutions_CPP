
// 1961. CHECK IF STRING IS A PREFIX OF ARRAY

/** T.C. - O(N^2) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/solutions/8533066/c-solution-by-nidhi_kamal-ab00/

/* JAVA */
// https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/solutions/8533086/java-easy-solution-string-by-nidhi_kamal-tdi6/

#include<iostream>
#include<vector>

using namespace std ;
bool isPrefixString(string s, vector<string>& words) {
    string str ;
    for(string& word : words) {
        str += word ;
        if(str == s) {
            return true ;
        }
    }
    return false ;
}

int main() {
	string s ;
	vector<string> words ;
	int n ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF STRING IS A PREFIX OF ARRAY " << endl ;
	cout << " ``````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter prefix strings...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> s ;
		words.push_back(s) ;
	}
	
	cout << endl ;
	cout << "Enter string : " ;
	cin >> s ;
	
	cout << endl ;
    ans = isPrefixString(s, words) ;
	
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*bool isPrefixString(string s, vector<string>& words) {
	int cnt = 0 ;
	string str ;
	for(string& word : words) {
		str += word ;
		// str.append(word) ;
		// strcat(str, word) ;
	}
	if(str.find(s) != 0) {
		return false ;
	}
	return true ;
	// int i = 0 ;
	// while(i<s.length() && i<str.length()) {
		// if(s[i] != str[i]) {
			// return false ;
		// }
		// ++i ;
	// }
	// if(i != str.length()) {
		// return false ;
	// }
	// return true ;
}*/