
// 3274. CHECK IF TWO CHESSBOARD SQUARES HAVE THE SAME COLOR

#include<iostream>

using namespace std ;

bool checkTwoChessboards(string coordinate1, string coordinate2) {
	int a = coordinate1[0] + coordinate1[1] ;
	int b = coordinate2[0] + coordinate2[1] ;
	return ((a%2) == (b%2)) ;
}

int main() {
	string coordinate1, coordinate2 ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF TWO CHESSBOARD SQUARES HAVE THE SAME COLOR " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter string coordinate1..... " << endl ;
	cin >> coordinate1 ;
	
	cout << endl ;
	cout << "Enter string coordinate2..... " << endl ;
	cin >> coordinate2 ;
	
    ans = checkTwoChessboards(coordinate1, coordinate2) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}