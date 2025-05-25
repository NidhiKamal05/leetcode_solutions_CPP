
// 2131. LONGEST PALINDROME BY CONCATENATING TWO LETTER WORDS

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

int longestPalindrome(vector<string>& words) {
    int len = 0 ;
    unordered_map<string, int> freq ;
    for(string& word : words) {
        freq[word]++ ;
    }
    bool hasSym = false ;
    for(auto& [str, cnt] : freq) {
        string rev = string{str[1], str[0]} ;
        if(str == rev) {
            len += ((cnt/2) * 4) ;
            if(cnt % 2 == 1) {
                hasSym = true ;
            }
        }
        else if(freq.count(rev)) {
            int pairs = min(cnt, freq[rev]) ;
            len += (pairs * 4) ;
            freq[rev] = 0 ;
        }
    }
    if(hasSym) {
        len += 2 ;
    }
    return len ;
}

int main() {
	vector<string> words ;
	string s ;
	int len ;
	bool ans ;
	
	cout << endl ;
	cout << "  LONGEST PALINDROME BY CONCATENATING TWO LETTER WORDS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter 2 letter words in array......" << endl ;
	for(int i = 0; i<len; i++) {
		cin >> s ;
		words.push_back(s) ;
	}
	
    ans = longestPalindrome(words) ;
	
	cout << endl ;
	cout << "Length of longest palibdromic string = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}