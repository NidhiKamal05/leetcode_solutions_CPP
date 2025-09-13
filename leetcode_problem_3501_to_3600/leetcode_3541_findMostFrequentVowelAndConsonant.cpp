
// 3541. FIND MOST FREQUENT VOWEL AND CONSONANT

#include<iostream>
#include<unordered_map>

using namespace std ;

bool isVowel(char c) {
	return ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')) ;
}

int maxFreqSum(string s) {
    unordered_map<char, int> freq ;
    int vowel = 0, consonant = 0 ;
    for(char c : s) {
        freq[c]++ ;
        if(isVowel(c)) {
            vowel = max(vowel, freq[c]) ;
        }
        else {
            consonant = max(consonant, freq[c]) ;
        }
    }
    return vowel + consonant ;
}

int main() {
	int ans ;
	string s ;
	
	cout << endl ;
	cout << "  FIND MOST FREQUENT VOWEL AND CONSONANT " << endl ;
	cout << " ========================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	cin >> s ;
	
	ans = maxFreqSum(s) ;
	
	cout << endl ;
	cout << "Maximum Frequent Sum = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** WORKING CODE **/
/*int maxFreqSum(string s) {
	unordered_map<char, int> vFreq ;
	unordered_map<char, int> cFreq ;
	for(char c : s) {
		if(isVowel(c)) {
			vFreq[c]++ ;
		}
		else {
			cFreq[c]++ ;
		}
	}
	int vowel = 0 ;
	for(auto f : vFreq) {
		vowel = max(vowel, f.second) ;
	}
	int consonant = 0 ;
	for(auto f : cFreq) {
		consonant = max(consonant, f.second) ;
	}
	return vowel + consonant ;
}*/