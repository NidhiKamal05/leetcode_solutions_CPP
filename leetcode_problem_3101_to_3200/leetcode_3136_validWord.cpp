
// 3136. VALID WORD

#include<iostream>

using namespace std ;

bool isVowel(char ch) {
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		return true ;
	}
	return false ;
}

bool isValid(string word) {
	if(word.length() < 3) {
        return false ;
    }
    bool hasVowel = false, hasConsonent = false;
    for(char& ch : word) {
        if(isalpha(ch)) {
            if(isVowel(toupper(ch))) {
                hasVowel = true ;
            }
            else {
                hasConsonent = true ;
            }
        }
        else if(isdigit(ch)) {
            continue ;
        }
        else {
            return false ;
        }
    }
    return hasVowel && hasConsonent ;
}

int main() {
	bool ans ;
	string word ;
	
	cout << endl ;
	cout << "  VALID WORD " << endl ;
	cout << " ============" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	cin >> word ;
	
	ans = isValid(word) ;
	
	cout << endl ;
	string res = ans ? "TRUE...." : "FALSE...." ;
	cout << "Answer = " << res << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** WORKING **/
// bool isAlpha(char ch) {
	// if((ch >= 65 && ch <= 90) || (ch >= 96 && ch <= 121)) {
		// return true ;
	// }
	// return false ;
// }

/** WORKING **/
// bool isDigit(char ch) {
	// if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9') {
		// return true ;
	// }
	// return false ;
// }