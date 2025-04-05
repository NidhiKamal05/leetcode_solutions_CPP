
// 258. ADD DIGITS

#include<iostream>
#include<vector>

using namespace std ;

int addDigits(int num)
{
	if(num<10)
		return num ;
	int s=0 ;
	for(int j=0; j<INT_MAX; ++j){
		vector<int> v{} ;
		for(int i=0; i<INT_MAX; ++i){
		    v.push_back(num%10) ;
			num/=10 ;
			if(num < 10){
		        v.push_back(num) ;
				break ;
			}
		}
		s = 0 ;
		for(int k=0; k<v.size(); ++k)
		    s+=v.at(k) ;
		if(s<10)
		    break ;
		else{
		    num = s ;
			continue ;
		}
	}
    if(s<10)
		return s ;
	return s ;
}

// int addDigits(int num)
// {
	// if(num<10)
		// return num ;
	// vector<int> v{} ;
	// for(int i=0; i<INT_MAX; ++i)
	// {
		// v.push_back(num%10) ;
		// num/=10 ;
		// if(num<10){
			// v.push_back(num) ;
			// break ;
		// }
	// }
	// int s=0; 
	// for(int j=0; j<v.size(); ++j)
		// s+=v.at(j) ;
	// if(s>=10)
		// s = addDigits(s) ;
	// else
		// return s ;
	// return s ;
// }

int main()
{
	int n ;
	
	cout << endl ;
	cout << " ADD DIGITS " << endl ;
	cout << "--********--" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> n ;
	
	n = addDigits(n) ;
	
	cout << endl ;
	cout << "Result = " << n ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}