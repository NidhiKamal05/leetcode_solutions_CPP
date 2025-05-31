
// 367. VALID PERFECT SQUARE

#include<iostream>
#include<cmath> 

using namespace std ;

bool isPerfectSquare(int num) {
	int start = 1, end = num, mid ;
    while(start <= end) {
        mid = start + (end - start) / 2 ;
        if((mid == num / mid) && (num % mid == 0)) {
            return true ;
        }
        else if(mid < num/mid) {
            start = mid + 1 ;
        }
        else {
            end = mid - 1 ;
        }
    }
    return false ;
}

int main(){
	int num ;
	bool ans ;
	
	cout << endl ;
	cout << "  VALID PERFECT SQUARE " << endl ;
	cout << " ``````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer : " ;
	cin >> num ;
	
    ans = isPerfectSquare(num) ;
	
	cout << endl ;	
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}