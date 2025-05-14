
// 3335. TOTAL CHARACTERS IN STRING AFTER TRANSFORMATIONS I

#include<iostream>
#include<vector>

using namespace std ;

int lengthAfterTransformations(string s, int t) {
    int totalCharacters = 0 ;
    int MOD = 1000000007 ;
    vector<int> freq(26, 0) ;
    for(char& c : s) {
        freq[c - 'a']++ ;
    }
    for(int i=0; i<t; ++i) {
        vector<int> temp(26, 0) ;
        temp[0] = freq[25] ;
        temp[1] = (freq[0] + freq[25]) % MOD ;
        for(int j=2; j<26; ++j) {
            temp[j] = freq[j-1] ;
        }
        freq = move(temp) ;
    }
    for(int& num : freq) {
        totalCharacters = (totalCharacters += num) % MOD ;
    }
    return totalCharacters ;
}

int main() {
	string s ;
	int t, totalChars ;
	
	cout << endl ;
	cout << "  TOTAL CHARACTERS IN STRING AFTER TRANSFORMATIONS I " << endl ;
	cout << " ----------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter no. of transformations, t = " ;
	cin >> t ;
	
	totalChars = lengthAfterTransformations(s, t) ;
	
	cout << endl ;
	cout << "Answer = " << totalChars << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** TIME LIMIT EXCEED **/
/*string transform(string s) {
	for(int i=0; i<s.length(); ++i) {
		if(s[i] == 'z') {
			s[i] = 'a' ;
			s.insert(s.begin()+i+1, 'b') ;
		}
		else {
			s[i] += 1 ;
		}
	}
 	return s ;
}

int lengthAfterTransformations(string s, int t) {
	for(int i=0; i<t; ++i) {
		s = transform(s) ;
	}
	return s.length() ;
}*/