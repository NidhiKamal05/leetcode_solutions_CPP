
// 1492. THE Kth FACTOR OF n

#include<iostream>

using namespace std ;

int kthFactor(int n, int k){
	int c = 0 ;
	for(int i=1; i<=n; ++i){
		if(n%i == 0)
			++c ;
		if(c == k)
			return i ;
	}
	return -1 ;
}

int main()
{
	int n, k, result ;
	
	cout << endl ;
	cout << "  THE Kth FACTOR OF n  " << endl ;
	cout << " --------------------- " << endl ;
	
	cout << endl ;
	cout << "n : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "k : " ;
	cin >> k ;
	
	result = kthFactor(n, k) ;
	
	cout << endl ;
	cout << k << "th factor of " << n << " = " << result << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}