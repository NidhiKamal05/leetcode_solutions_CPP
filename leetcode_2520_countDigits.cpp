
// 2520. COUNT THE DIGITS THAT DIVIDE A NUMBER

#include<iostream>

using namespace std ;

int countDigits(int num) {
	int n = num ;
	int cnt = 0 ;
	while(n) {
		int digit = n%10 ;
		if(num%digit == 0) {
			++cnt ;
		}
		n /= 10 ;
	}
	return cnt ;
}

int main() {
	int num, cnt ;
	
	cout << endl ;
	cout << "  COUNT THE DIGITS THAT DIVIDE A NUMBER " << endl ;
	cout << " ***************************************" << endl ;
	
	cout << endl ;
	cout << "Enter an integer....\n num = " ;
	cin >> num ;
	
	cnt = countDigits(num) ;
	
	cout << endl ;
	cout << "Count = " << cnt << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}