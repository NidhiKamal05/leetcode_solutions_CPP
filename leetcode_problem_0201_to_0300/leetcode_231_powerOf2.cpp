
// 231. POWER OF TWO

#include<iostream>
#include<cmath>

using namespace std ;

bool isPowerOfTwo(int n){
	if(n <= 0)
		return false ;
	while(n%2 == 0)
		n /= 2 ;
	return n == 1 ;
}

int main()
{
	int n ;
	bool r ;
	
	cout << endl ;
	cout << " POWER OF TWO " << endl ;
	cout << "~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> n ;
	
	r = isPowerOfTwo(n) ;
	
	cout << endl ;
	if(r == 1)
	{
		cout << n << " is a power of 2..." ;
	}
	else
	{
		cout << n << " is not a power of 2..." ;
	}
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}



// bool isPowerOfTwo(int n)
// {
	// int r, t ;
	// for(int i=0; i<INT_MAX; ++i){
		// t = pow(2,i) ;
		// if(t < n)
			// continue ;
		// else if(t > n){
			// r = 0 ;
		    // break ;
		// }
		// else{
			// r = 1 ;
			// break ;
		// }
	// }
	// return r == 1 ;
// }


// if(n>0){}
// else if(n<0){
		// for(int i=0; i>INT_MIN; --i){
			// t = 2>>i ;
			// if(t > n)
			    // continue ;
		    // else if(t < n){
		    	// r = 1 ;
		        // break ;
		    // }
		    // else{
		    	// r = 0 ;
		    	// break ;
		    // }
		// }
	// }