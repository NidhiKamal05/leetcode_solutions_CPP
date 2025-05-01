
// 342. POWER OF FOUR

#include<iostream>
#include<cmath>

using namespace std ;

bool isPowerOfFour(int n){
	if(n <= 0)
		return false ;
	while(n%4 == 0)
		n /= 4 ;
	return n == 1 ;
}

/*bool isPowerOfFour(int n){
	int res, t ;
	for(int i=0; i<INT_MAX; ++i){
		t = pow(4,i) ;
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

/*bool isPowerOfTwo(int n){
	if(n <= 0)
		return false ;
	if(n == 1)
		return true ;
	int r, t ;
	for(int i=0; i<INT_MAX; ++i){
		t = 2<<i ;
		if(t < n)
		    continue ;
	    else if(t > n){
	    	r = 0 ;
	        break ;
	    }
	    else{
	    	r = 1 ;
	    	break ;
	    }
	}
	return r == 1 ;
}*/

int main(){
	int n ;
	bool res ;
	
	cout << endl ;
	cout << " POWER OF FOUR " << endl ;
	cout << "~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> n ;
	
	res = isPowerOfFour(n) ;
	
	cout << endl ;
	if(res == 1)
	{
		cout << n << " is a power of 4..." ;
	}
	else
	{
		cout << n << " is not a power of 4..." ;
	}
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}