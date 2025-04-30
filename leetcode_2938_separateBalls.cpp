
// 2938. SEPARATE BLACK AND WHITE BALLS

#include<iostream>

using namespace std ;

long long minimumsteps(string s) {
	int n = s.length() ;
    int whitePos = 0 ;
    long long totalSwaps = 0 ;
    for(int i=0; i<n; ++i) {
        if(s.at(i) == '0') {
            totalSwaps += (i-whitePos) ;
            ++whitePos ;
        }
    }
    return totalSwaps ;
}

int main(){
	string s ;
	long long minSteps ;
	
	cout << endl ;
	cout << "  SEPARATE BLACK AND WHITE BALLS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string..... " ;
	cin >> s ;
	
	minSteps = minimumsteps(s) ;
	
	cout << endl ;
	cout << "Minimum Steps = " << minSteps << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}