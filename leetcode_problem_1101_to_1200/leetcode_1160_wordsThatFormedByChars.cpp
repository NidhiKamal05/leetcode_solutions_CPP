
// 1160. FIND WORDS THAT CAN BE FORMED BY CHARACTERS

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

int countCharacters(vector<string>& words, string chars) {
    unordered_map<char, int> charFreq ;
    for(char& ch : chars) {
        charFreq[ch]++ ;
    }
    int sum = 0 ;
    for(string& word : words) {
        unordered_map<char, int> freq ;
        for(char& ch : word) {
            freq[ch]++ ;
        }
        bool FLAG = true ;
        for(auto& [c, cnt] : freq) {
            if(charFreq[c] < cnt) {
                FLAG = false ;
                break ;
            }
        }
        if(FLAG) {
            sum += word.length() ;
        }
    }
    return sum ;
}

int main() {
	int n ;
	string word, chars ;
	vector<string> words ;
	
	cout << endl ;
	cout << "  FIND WORDS THAT CAN BE FORMED BY CHARACTERS " << endl ;
	cout << " ---------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter words in the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> word ;
		words.push_back(word) ;
	}
	
	cout << endl ;
	cout << "Enter a string, chars = " ;
	cin >> chars ;
	
	n = countCharacters(words, chars) ;
	
	cout << endl ;
	cout << "Sum of lengths of all good strings in words = " << n << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}