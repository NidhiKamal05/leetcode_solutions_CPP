
// 2185. COUNTING WORDS WITH A GIVEN PREFIX

#include<iostream>
#include<vector>

using namespace std ;

//** JAVA SOLUTION **//
/*class Solution {
    public int prefixCount(String[] words, String pref) {
        int l = words.length ;
        int cnt = 0 ;
        for(int i=0; i<l; ++i) {
            if(words[i].startsWith(pref)) {
                ++cnt ;
            }
        }
        return cnt ;
    }
}*/

// C++ SOLUTION
/*int prefixCount(vector<string>& words, string pref) {
    int cnt = 0 ;
    for(string& word : words) {
        // if(words.starts_with(pref)) { 	****C++20****
		if(word.find(pref) == 0) {
            ++cnt ;
        }
    }
    return cnt ;
}*/

int checkPrefix(string s, string pref) {
	int i = 0 ;
	while(i<s.length() && i<pref.length()) {
		if(s[i] != pref[i]) {
			return 0 ;
		}
		++i ;
	}
	if(i != pref.length()) {
		return 0 ;
	}
	return 1 ;
}

int prefixCount(vector<string>& words, string pref) {
	int cnt = 0 ;
	for(string& word : words) {
		cnt += checkPrefix(word, pref) ;
	}
	return cnt ;
}

int main() {
	string pref ;
	vector<string> words ;
	int e, n ;
	
	cout << endl ;
	cout << "  COUNTING WORDS WITH A GIVEN PREFIX " << endl ;
	cout << " ````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter strings of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> pref ;
		words.push_back(pref) ;
	}
	
	cout << endl ;
	cout << "Enter prefix string : " ;
	cin >> pref ;
	
	cout << endl ;
    e = prefixCount(words, pref) ;
	
	cout << "Count = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}