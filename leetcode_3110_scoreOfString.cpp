
// 3110. SCORE OF A STRING

#include<iostream>
#include<cstring>
#include<cmath>

using namespace std ;

int scoreOfString(string s){
	int score = 0 ;
	for(int i=0; i<s.length()-1; ++i)
		score += (abs(s.at(i)-s.at(i+1))) ;
	return score ;
}

int main(){
	string s ;
	int score ;
	
	cout << endl ;
	cout << "  SCORE OF A STRING " << endl ;
	cout << " ===================" << endl ;
	
	cout << endl ;
	cout << "String = " ;
	cin >> s ;
	
	score = scoreOfString(s) ;
	
	cout << endl ;
	cout << "Score of a string = " << score << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}