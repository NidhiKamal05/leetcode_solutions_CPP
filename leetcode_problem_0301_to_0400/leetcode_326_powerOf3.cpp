
// 326. POWER OF THREE

#include<iostream>
#include<cmath>

using namespace std ;

bool isPowerOfThree(int n){
	if(n <= 0)
		return false ;
	while(n%3 == 0)
		n /= 3 ;
	return n == 1 ;
}

/*bool isPowerOfThree(int n){
	int res, t ;
	for(int i=0; i<INT_MAX; ++i){
		t = pow(3,i) ;
		if(t == n){
			res = 1 ;
			break ;
		}
		else if(t > n){
			res = 0 ;
			break ;
		}
		else 
			continue ;
	}
	return res == 1 ;
}*/

int main()
{
	int n ;
	bool res ;
	
	cout << endl ;
	cout << " POWER OF THREE " << endl ;
	cout << "~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> n ;
	
	res = isPowerOfThree(n) ;
	
	cout << endl ;
	if(res == 1)
	{
		cout << n << " is a power of 3..." ;
	}
	else
	{
		cout << n << " is not a power of 3..." ;
	}
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}