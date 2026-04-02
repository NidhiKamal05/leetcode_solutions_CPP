
// 500. KEYBOARD ROW

/** T.C. - O(N * M) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/keyboard-row/solutions/7755062/c-0-ms-runtime-beats-100-o1-space-by-nid-f2kq/

/* JAVA */
// https://leetcode.com/problems/keyboard-row/solutions/7755294/java-solution-runtime-beats-100-memory-b-mt7u/

#include<iostream>
#include<vector>

using namespace std ;

vector<string> findWords(vector<string>& words) {
	vector<string> ans ;
	vector<string> rows = {"qwertyuiopQWERTYUIOP", "asdfghjklASDFGHJKL", "zxcvbnmZXCVBNM"} ;
	int n = words.size() ;
	bool flag = true ;
	for(int i=0; i<n; ++i) {
		flag = true ;
		string s = words[i] ;
		int x = rows[0].find(s[0]) != string::npos ? 0 : rows[1].find(s[0]) != string::npos ? 1 : 2 ;
		for(int j=1; j<s.size(); ++j) {
			if(rows[x].find(s[j]) == string::npos) {
				flag = false ;
				break ;
			}
		}
		if(flag) {
			ans.push_back(s) ;
		}
	}
	return ans ;
}

int main() {
	int n ;
	string word ;
	vector<string> words, ans ;
	
	cout << endl ;
	cout << "  KEYBOARD ROW " << endl ;
	cout << " --------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter words int the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> word ;
		words.push_back(word) ;
	}
	
	ans = findWords(words) ;
	
	cout << endl ;
	cout << "Answer...." << endl ;
	cout << "[ " ;
	for(string word : ans) {
		cout << word << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}