
// 1837. SUM OF DIGITS IN BASE K

#include<iostream>

using namespace std ;

int sumBase(int n, int k) {
	int sum = 0 ;
	while(n) {
		sum += n%k ;
		n /= k ;
	}
	return sum ;
}

int main(){
	int n, k, sum ;
	
	cout << endl ;
	cout << "  SUM OF DIGITS IN BASE K " << endl ;
	cout << " `````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter a base, k : " ;
	cin >> k ;
	
	cout << endl ;
    sum = sumBase(n, k) ;
	
	cout << "Sum = " << sum << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}