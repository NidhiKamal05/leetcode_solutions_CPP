#include<iostream>
// 2108. FIND FIRST PALINDROMIC STRING IN THE ARRAY

#include<vector>
#include<cstring>

using namespace std ;

string rev(string s) {
	string str ;
	int n = s.length() ;
	for(int i=n-1; i>=0; --i) {
		str += s[i] ;
	}
	return str ;
}

string firstPalindrome(vector<string>& words) {
	int n = words.size() ;
	string word1 ;
	string word2 ;
	for(int i=0; i<n; ++i) {
		word1 = words[i] ;
		// reverse(words[i].begin(), words[i].end()) ;
		// word2 = words[i] ;
		word2 = rev(words[i]) ;
		if(word1 == word2) {
			return word1 ;
		}
	}
	return "" ;
}

int main(){
	vector<string> words ;
	string word ;
	int l ;
	
	cout << endl ;
	cout << "  FIND FIRST PALINDROMIC STRING IN THE ARRAY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter size of the array...." << endl ;
	cin >> l ;
	
	cout << endl ;	
	cout << "Enter words in the array...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> word ;
		words.push_back(word) ;
	}
	
	word = firstPalindrome(words) ;
	
	cout << endl ;
	cout << "First Palindromic String = " << word << endl ;
	
	cout << endl ;
	system("pause") ;
	
	return 0 ;
}