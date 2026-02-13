
// 3121. COUNT THE NUMBER OF SPECIAL CHARACTERS I

/* C++ */
// https://leetcode.com/problems/count-the-number-of-special-characters-ii/solutions/7576856/c-solution-hash-map-by-nidhi_kamal-03cu/

/* JAVA */
// https://leetcode.com/problems/count-the-number-of-special-characters-ii/solutions/7576882/java-easy-simple-solution-by-nidhi_kamal-bd7v/

#include<iostream>
#include<unordered_map>

using namespace std ;

int numberOfSpecialChars(string word) {
    int len = word.length(), cnt = 0 ;        
    unordered_map<char, int> mp ;
    for(int i=0; i<len; ++i) {
        char c = word[i] ;
        if(c >= 'a' && c <= 'z') {
            mp[c] = i ;
        }
        else {
            if(mp.find(c) == mp.end()) {
                mp[c] = i ;
            }
        }
    }
    for(auto& c : mp) {
        if(mp.find(toupper(c.first)) != mp.end()) {
            if(c.second < mp[toupper(c.first)]) {
                ++cnt ;
            }
        }
    }
    return cnt ;
}

int main() {
	string word ;
	int count ;
	
	cout << endl ;
	cout << "  COUNT THE NUMBER OF SPECIAL CHARACTERS II " << endl ;
	cout << " ===========================================" << endl ;
	
	cout << endl ;
	cout << "Enter a word..." << endl ;
	cin >> word ;
	
	count = numberOfSpecialChars(word) ;
	
	cout << endl ;
	cout << "Count = " << count << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}