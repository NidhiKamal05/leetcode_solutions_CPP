
// 1317. CONVERT INTEGER TO THE SUM OF TWO NO-ZERO INTEGERS

#include<iostream>
#include<vector>

using namespace std ;

bool helper(int num) {
    while(num) {
        if(num % 10 == 0) {
            return false ;
        }
        num /= 10 ;
    }
    return true ;
}

vector<int> getNoZeroIntegers(int n) {
    vector<int> list(2) ;
    for(int x=1; x<=n; ++x) {
        int y = n - x ;
        if(helper(x) && helper(y)) {
            list[0] = x ;
            list[1] = y ;
            break ;
        }
    }
    return list ;
}

int main() {
	int n ;
	vector<int> list ;
	
	cout << endl ;
	cout << "  CONVERT INTEGER TO THE SUM OF TWO NO-ZERO INTEGERS " << endl ;
	cout << " ----------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	list = getNoZeroIntegers(n) ;
	
	cout << endl ;
	cout << "Two No-Zero Integers......" << endl ;
	cout << "[" << list[0] << "," << list[1] << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}