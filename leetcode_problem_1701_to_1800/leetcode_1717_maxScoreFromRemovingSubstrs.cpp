
// 1717. MAXIMUM SCORE FROM REMOVING SUBSTRINGS

#include<iostream>

using namespace std ;

string removeSubstr(string s, string target) {
    string str ;
    for(char ch : s) {
        if(ch == target[1] && !str.empty() && str.back() == target[0]) {
            str.pop_back() ;
        }
        else {
            str.push_back(ch) ;
        }
    }
    return str ;
}

int maximumGain(string s, int x, int y){
	int totalScore = 0 ;

    string high = x > y ? "ab" : "ba" ;
    string low = high == "ab" ? "ba" : "ab" ;

    string strAfterRemovingHigh = removeSubstr(s, high) ;
    int pairCnt = (s.length() - strAfterRemovingHigh.length()) / 2 ;

    totalScore += pairCnt * max(x, y) ;

    string strAfterRemovingLow = removeSubstr(strAfterRemovingHigh, low) ;
    pairCnt = (strAfterRemovingHigh.length() - strAfterRemovingLow.length()) / 2 ;

    totalScore += pairCnt * min(x, y) ;

    return totalScore ;
}

int main(){
	string s ;
	int x, y, totalScore ;
	
	cout << endl ;
	cout << "  MAXIMUM SCORE FROM REMOVING SUBSTRINGS " << endl ;
	cout << " ----------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string...." << endl ;
	cout << "s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter points....." << endl ;
	cout << "x = " ;
	cin >> x ;
	cout << "y = " ;
	cin >> y ;
	
	totalScore = maximumGain(s, x, y) ;
	
	cout << endl ;
	cout << "Total Score = " << totalScore << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



// s =
// "cbaabwbbbabbwaaq"
// x =
// 4074
// y =
// 9819

// Use Testcase
// Output
// 29457
// Expected
// 23712


/*int maximumGain(string s, int x, int y){
	int totalScore = 0 ;
	string high = x > y ? "ab" : "ba" ;
	string low = high == "ab" ? "ba" : "ab" ;
	int n ;	
	int i = 0 ;
	n = max(x,y) ;
	while(i < s.length()-1){
		if((s.at(i) == high.at(0))&&(s.at(i+1) == high.at(1))){
			s.erase(s.begin()+i, s.begin()+i+2) ;
			totalScore += n ; 
			--i ;
		}
		++i ;
	}	
	i = 0 ;
	while(i < s.length()-1){
		if((s.at(i) == high.at(1))&&(s.at(i+1) == high.at(0))){
			s.erase(s.begin()+i, s.begin()+i+2) ;
			totalScore += n ;
			--i ;
		}
		++i ;
	}
	n = min(x,y) ;
	i = 0 ;
	while(i < s.length()-1){
		if((s.at(i) == low.at(0))&&(s.at(i+1) == low.at(1))){
			s.erase(s.begin()+i, s.begin()+i+2) ;
			totalScore += n ; 
			--i ;
		}
		++i ;
	}	
	i = 0 ;
	while(i < s.length()-1){
		if((s.at(i) == low.at(1))&&(s.at(i+1) == low.at(0))){
			s.erase(s.begin()+i, s.begin()+i+2) ;
			totalScore += n ;
			--i ;
		}
		++i ;
	}
	return totalScore ;
}*/