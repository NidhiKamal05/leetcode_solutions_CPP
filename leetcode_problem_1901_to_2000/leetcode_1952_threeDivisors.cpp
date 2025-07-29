
// 1952. THREE DIVISORS

#include<iostream>

using namespace std ;

bool isThree(int n) {
	int cnt = 0 ;
	for(int i=1; i<=n; ++i) {
		if(n%i == 0) {
			++cnt ;
		}
	}
	return cnt == 3 ;
}

int main(){
	int n ;
	bool ans ;
	
	cout << endl ;
	cout << "  THREE DIVISORS " << endl ;
	cout << " ````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer : " ;
	cin >> n ;
	
    ans = isThree(n) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}