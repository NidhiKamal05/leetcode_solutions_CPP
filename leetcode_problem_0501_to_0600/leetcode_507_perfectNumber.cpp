
// 507. PERFECT NUMBER

#include<iostream>

using namespace std ;

bool checkPerfectNumber(int num) {
	int sum = 0 ;
	for(int i=1; i<=num/2; ++i) {
		if(num % i == 0) {
			sum += i ;
		}
	}
	return (sum == num) ;
}

int main() {
	int num ;
	bool ans ;
	
	cout << endl ;
	cout << "  PERFECT NUMBER " << endl ;
	cout << " ----------------" << endl ;
	
	cout << endl ;
	cout << "Enter a number : " ;
	cin >> num ;
	
	ans = checkPerfectNumber(num) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	cout <<  endl ;
	
	system("pause") ;
	
	return 0 ;
}