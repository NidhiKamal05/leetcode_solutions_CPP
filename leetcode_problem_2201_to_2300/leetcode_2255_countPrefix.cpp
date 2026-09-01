
// 2255. COUNT PREFIXES OF A GIVEN STRING

/** T.C. - O(N * M) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/count-prefixes-of-a-given-string/solutions/8495227/c-very-easy-solution-by-nidhi_kamal-5uf3/

/* JAVA */
// https://leetcode.com/problems/count-prefixes-of-a-given-string/solutions/8495235/java-solution-by-nidhi_kamal-y42w/

#include<iostream>
#include<vector>

using namespace std ;

int countPrefixes(vector<string>& words, string s) {
    int cnt = 0 ;
    for(string& word : words) {
        cnt += s.starts_with(word) ;
    }
    return cnt ;
}

/*int countPrefixes(vector<string>& words, string s) {
	int cnt = 0 ;
	for(string& word : words) {
		if(s.find(word) == 0) {
			++cnt ;
		}
	}
	return cnt ;
}*/

/*int checkPrefix(string s, string word) {
	int i = 0 ;
	while(i<s.length() && i<word.length()) {
		if(s[i] != word[i]) {
			return 0 ;
		}
		++i ;
	}
	if(i != word.length()) {
		return 0 ;
	}
	return 1 ;
}
int countPrefixes(vector<string>& words, string s) {
	int cnt = 0 ;
	for(string& word : words) {
		cnt += checkPrefix(s, word) ;
	}
	return cnt ;
}*/

int main() {
	string s ;
	vector<string> words ;
	int n ;
	
	cout << endl ;
	cout << "  COUNT PREFIXES OF A GIVEN STRING " << endl ;
	cout << " ``````````````````````````````````" << endl ;
	
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
    n = countPrefixes(words, s) ;
	
	cout << "Count = " << n << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}