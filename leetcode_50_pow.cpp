
// 50. POW(x, n)

#include<iostream>
#include<cmath>

using namespace std ;

double myPow(double x, double y){
	return pow(x, y) ;
}

int main()
{
	double x, k ;
	int n ;
	
	cout << endl ;
	cout << "  Pow(x, n)  " << endl ;
	cout << " ---*****--- " << endl ;
	
	cout << endl ;
	cout << "x = " ;
	cin >> x ;
	
	cout << endl ;
	cout << "n = " ;
	cin >> n ;
	
	k = myPow(x, n) ;
	
	cout << x << " raised to the power " << n << " = " << k << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



// double myPow(double x, int n)
// {
// 	double k ;
	
// 	if(x == 1)
// 	{
// 		k = 1 ;
// 		return k ;
// 	}
	
// 	if(x == -1)
// 	{
// 		if(n%2 == 0)
// 		{
// 			k = 1 ;
// 			return k ;
// 		}
// 		else
// 		{
// 			k = x ;
// 			return k ;
// 		}
// 	}
	
// 	if(n == 0)
// 	{
// 		k = 1 ;
// 		return k ;
// 	}
// 	else if(n>0)
// 	{
// 		if(x != 0)
// 		{
// 			k = 1 ;
// 	        for(int i=0; i<n; ++i)
// 	        {
// 	        	k*=x ;
// 	        }
// 		}
// 		else
// 		{
// 			k = 0 ;
//             return k ;
// 		}
// 	}
// 	else
// 	{
// 		k = 1 ;
// 		for(int i=(-n); i>0; --i)
// 	    {
// 	    	k*=x ;
// 	    }
// 	    k = (1/k) ;
// 	}
	
// 	return k ;
// }