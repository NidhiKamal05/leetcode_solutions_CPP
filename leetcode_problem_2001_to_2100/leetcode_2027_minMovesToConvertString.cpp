
// 2027. MINIMUM MOVES TO CONVERT STRING

#include<iostream>

using namespace std ;

int minimumMoves(string s){
	int moves = 0 ;
	for(int i=0; i<s.length(); ++i){
		if(s.at(i) == 'X'){
			++moves ;
			i += 2 ;
		}
	}
	return moves ;
}

/*int minimumMoves(string s){
	int moves = 0 ;
	for(int i=0; i<s.length()-2; ++i){
		// if((s.at(i) == 'X')||(s.at(i+1) == 'X')||(s.at(i+2) == 'X')){
		if(s.at(i) == 'X'){
			s.at(i) = '0' ;
			s.at(i+1) = '0' ;
			s.at(i+2) = '0' ;
			++moves ; cout<<s<<endl;
		}
		else if(s.at(i+1) == 'X'){
			s.at(i) = '0' ;
			s.at(i+1) = '0' ;
			s.at(i+2) = '0' ;
			++moves ; cout<<s<<endl;
		}
		else if(s.at(i+2) == 'X'){
			s.at(i) = '0' ;
			s.at(i+1) = '0' ;
			s.at(i+2) = '0' ;
			++moves ; cout<<s<<endl;
		}
		++i ;
	}
	return moves ;
}*/

int main(){
	string s ;
	int minMoves ;
	
	cout << endl ;
	cout << "  MINIMUM MOVES TO CONVERT STRING " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string...." << endl ;
	cin >> s ;
	
    minMoves = minimumMoves(s) ;
	
	cout << "Minimum Moves = " << minMoves << endl ;
			
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}