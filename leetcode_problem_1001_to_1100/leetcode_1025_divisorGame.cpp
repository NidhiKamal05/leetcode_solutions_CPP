
// 1025. DIVISOR GAME

#include<iostream>

using namespace std ;

int divisorGame(int n) {
	// if n is even alice wins
    // if n is odd bob wins
    return n % 2 == 0 ;
}

int main(){
	int n ;
	bool ans ;
	
	cout << endl ;
	cout << "  DIVISOR GAME " << endl ;
	cout << " ``````````````" << endl ;
	
	cout << endl ;	
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	ans = divisorGame(n) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE...\nAlice wins!!" << endl ;
	else
		cout << "FALSE...\nAlice loose!!" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}