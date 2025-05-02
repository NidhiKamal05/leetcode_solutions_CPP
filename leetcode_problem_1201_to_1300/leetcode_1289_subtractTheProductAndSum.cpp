
// 1289. SUBTRACT THE PRODUCT AND SUM

#include<iostream>

using namespace std ;

int subtractProductAndSum(int n){
	int product = 1 ;
	int sum = 0 ;
	int t ;
	while(n){
		t = n%10 ;
		product *= t ;
		sum += t ;
		n/=10 ;
	}
	return (product-sum) ;
}

int main()
{
	int n, s ;
	
	cout << endl ;
	cout << "  SUBTRACT THE PRODUCT AND SUM " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;	
	
	cout << "n = " ;
	cin >> n ;
	
	s = subtractProductAndSum(n) ;
	
	cout << endl ;
	cout << "Difference of the product and sum of digits of " << n << " = " << s << endl ;
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}