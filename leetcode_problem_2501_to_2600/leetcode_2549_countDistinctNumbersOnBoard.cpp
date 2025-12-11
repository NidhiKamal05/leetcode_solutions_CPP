
// 2549. COUNT DISTINCT NUMBERS ON BOARD

#include<iostream>

using namespace std ;

int distinctIntegers(int n) {
    return n==1 ? 1 : n-1 ;
}

int main(){
	int n, cnt ;
	
	cout << endl ;
	cout << "  COUNT DISTINCT NUMBERS ON BOARD " << endl ;
	cout << " `````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer : " ;
	cin >> n ;
	
	cout << endl ;
    cnt = distinctIntegers(n) ;
	
	cout << "Count = " << cnt << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}