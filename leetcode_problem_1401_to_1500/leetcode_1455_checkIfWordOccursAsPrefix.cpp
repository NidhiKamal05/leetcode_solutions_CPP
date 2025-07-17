
// 1455. CHECK IF A WORD OCCURS AS A PREFIX OF ANY WORD IN A SENTENCE

#include<iostream>
#include<vector>

using namespace std ;

int isPrefixOfWord(string sentence, string searchWord) {
	int l = sentence.length() ;
	string word ;
	vector<string> words ;
	for(int i=0; i<l; ++i) {
		if(sentence[i] == ' ') {
			words.push_back(word) ;
			word.clear() ;
			continue ;
		}
		word += sentence[i] ;
		if(i == l-1) {
			words.push_back(word) ;
			word.clear() ;
			break ;
		}
	}
	l = words.size() ;
	for(int i=0; i<l; ++i) {
		if(words[i].find(searchWord) == 0) {
			return i+1 ;
		}
	}
	return -1 ;
}

int main() {
	string sentence, searchWord ;
	int ans ;
	
	cout << endl ;
	cout << "  CHECK IF A WORD OCCURS AS A PREFIX OF ANY WORD IN A SENTENCE " << endl ;
	cout << " ``````````````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a sentence...\n" ;
	getline(cin,sentence) ;
	
	cout << endl ;
	cout << "Enter searchWord....\n" ;
	cin >> searchWord ;
	
	cout << endl ;
    ans = isPrefixOfWord(sentence, searchWord) ;
	
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}