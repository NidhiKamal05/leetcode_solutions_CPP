
// 2595. NUMBER OF EVEN ODD BITS

#include<iostream>
#include<vector>

using namespace std ;

vector<int> evenOddBits(int n)
{
	vector<int> v{} ;
	int c=0, eC=0, oC=0 ;
	while(n)
	{
		if((n&1 == 1)&&((c%2 == 0)||(c == 0))){
			++eC ;
		}
		else if((n&1 == 1)&&(c%2 == 1)){
			++oC ;
		}
		else{
			++c ;
			n >>=1 ;
		    continue ;
		}
		++c ;
		n >>= 1 ;
	}
	v.push_back(eC) ;
	v.push_back(oC) ;
	return v ;
}

int main()
{
	int n ;
	vector<int> r{} ;
	
	cout << endl ;
	cout << " NO. OF EVEN ODD BITS " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> n ;
	
	r = evenOddBits(n) ;
	
	cout << endl ;
	cout << "[" << r.at(0) << "," << r.at(1) << "]" ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}