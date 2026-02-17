
// 520. DETECT CAPITAL

/* C++ */
// https://leetcode.com/problems/detect-capital/solutions/7586496/c-solution-detect-capital-on-by-nidhi_ka-ycxj/

/* JAVA */
// https://leetcode.com/problems/detect-capital/solutions/7586522/java-solution-beats-9066-tc-on-sc-o1-by-b2p7r/

#include<iostream>

using namespace std ;

bool detectCapitalUse(string word) {
    int len = word.size() ;
    if(len == 1) {
        return true ;
    }
    int cntUpper = 0 ;
    for(char ch : word) {
        if(isupper(ch)) {
            ++cntUpper ;
        }
    }
    bool allCapitalOrSmall = (cntUpper == 0 || cntUpper == len) ;
    bool onlyFirstCapital = (cntUpper == 1 && isupper(word[0])) ;
    if(allCapitalOrSmall || onlyFirstCapital) {
        return true ;
    }
    return false ;
}

int main() {
	string word ;
	bool ans ;
	
	cout << endl ;
	cout << "  DETECT CAPITAL " << endl ;
	cout << " ================" << endl ;
	
	cout << endl ;
	cout << "Enter a word..." << endl ;
	cin >> word ;
	
	ans = detectCapitalUse(word) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** WRONG ANSWER **/
/*bool detectCapitalUse(string word) {
    unordered_set<char> lowerSet ;
    unordered_set<char> upperSet ;
    for(char& c : word) {
        if(c >= 'a' && c <= 'z') {
            lowerSet.insert(c) ;
        }
        else {
            upperSet.insert(c) ;
        }
    }
    if(lowerSet.size() == 0 || upperSet.size() == 0) {
        return true ;
    }
    if((upperSet.size() == 1) && (word.find(*(upperSet.begin())) == 0)) {
        return true ;
    }
    return false ;
}*/