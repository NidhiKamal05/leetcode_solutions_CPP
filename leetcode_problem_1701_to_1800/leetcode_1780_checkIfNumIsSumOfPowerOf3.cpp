
// 1780. CHECK IF NUMBER IS A SUM OF POWERS OF THREE

#include<iostream>

using namespace std ;

bool checkPowersOfThree(int n) {
    while(n) {
        if(n%3 == 2) {
            return false ;
        }
        n /= 3 ;
    }
    return true ;
}

int main(){
	int n ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF NUMBER IS A SUM OF POWERS OF THREE " << endl ;
	cout << " `````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer : " ;
	cin >> n ;
	
	cout << endl ;
    ans = checkPowersOfThree(n) ;
	
	if(ans) {
		cout << "TRUE...." << endl ;
	}
	else {
		cout << "FALSE...." << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}