
// 191. NUMBER OF 1 BITS

#include<iostream>
#include<cmath>
#include<vector>

using namespace std ;

int hammingWeight(uint32_t n)
{                                                                          //cout << n << endl ;
	int count=0 ;
	for(int i=0; i<32; ++i)
	{
		if((n&1) == 1)
		{                                                                  //cout << "n&1" << " = " << (n&1) << endl ;
			++count ;
		}
		n = (n>>1) ;                                                       //cout << n << endl ;
		// n>>=1 ;
	}
	return count ;
}

/*int hammingWeight(uint32_t n)
{
	int count=0 ;
                                          // uint32_t j ;
    uint32_t j ;
	                                      // j = 2 ;
	                                      // if((n&1) == 1)
	                                      // {
	                                      	// ++count ;                    cout << "c = " << count << endl ;
	                                      // }
	for(int i=0; i<32; ++i)
	{
        j = pow(2,i) ;                                                      cout << "j = " << j << endl ; 
		if((n&j) == 1)
		{
			++count ;                                                       cout << "c = " << count << endl ;
		}
	}
	return count ;
}*/

int main()
{
	int x ;
	uint32_t n ;
	
	cout << endl ;
	cout << "  NUMBER OF 1 BITS  " << endl ;
	cout << " ----**********---- " << endl ;	
	
	cout << endl ;
	cout << "n = " ;
	cin >> n ;
	
	x = hammingWeight(n) ;
	
	cout << "Number Of 1 Bits : " << x << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*int hammingWeight(uint32_t n)
{
	vector<int> x ;
	int i=0 ;
	int count=0 ;
	while(1)
	{
		x.push_back(n%2) ;
		n/=2 ;
		++count ;
		// continue ;
		if(count == 32)
		{
			break ;
		}
	}
	i=0 ;
	count=0 ;
	while(i<x.size())
	{
		if(x.at(i)==1)
			++count ;
		++i ;
	}
	return count ;
}*/