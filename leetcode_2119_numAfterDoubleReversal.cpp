
// 2119. A NUMBER AFTER A DOUBLE REVERSAL

#include<iostream>

using namespace std ;

bool isSameAfterReversals(int num){
	if(((num % 10) == 0)&&(num != 0))
		return false ;
	return true ;
}

int main(){
	int num ;
	bool ans ;
	
	cout << endl ;
	cout << "  A NUMBER AFTER A DOUBLE REVERSAL " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a positive integer.....\n" ;
	cout << "num = " ;
	cin >> num ;
	
	cout << endl ;
	ans = isSameAfterReversals(num) ;
	
	if(ans == 1)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	system("pause") ;
	
	return 0 ;
}