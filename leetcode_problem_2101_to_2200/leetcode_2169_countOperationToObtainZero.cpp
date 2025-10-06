
// 2169. COUNT OPERATIONS TO OBTAIN ZERO

#include<iostream>

using namespace std ;

int countOperations(int num1, int num2) {
	int cnt = 0 ;
	while(num1 && num2) {
		if(num1 >= num2) {
			num1 -= num2 ;
		}
		else {
			num2 -= num1 ;
		}
		++cnt ;
	}
	return cnt ;
}

int main() {
	int num1, num2, n ;
	
	cout << endl ;
	cout << "  COUNT OPERATIONS TO OBTAIN ZERO " << endl ;
	cout << " `````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, num1 = " ;
	cin >> num1 ;
	
	cout << endl ;
	cout << "Enter an integer, num2 = " ;
	cin >> num2 ;
	
	cout << endl ;
	
    n = countOperations(num1, num2) ;
	
	cout << "Number operations = " << n << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}