
// 3099. HARSHAD NUMBER

#include<iostream>

using namespace std ;

int sumOfTheDigitsOfHarshadNumber(int x){
	int sum = 0 ;
	int n = x ;
	while(n){
		sum += (n%10) ;
		n /= 10 ;
	}
	if(x%sum == 0)
		return sum ;
	return -1 ;
}

int main()
{
	int x, result ;
	
	cout << endl ;
	cout << " HARSHAD NUMBER " << endl ;
	cout << "````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "x = " ;
	cin >> x ;
	
	result = sumOfTheDigitsOfHarshadNumber(x) ;
	
	cout << endl ;
	cout << "Answer = " << result << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}