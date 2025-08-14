
// 2264. LARGEST 3-SAME-DIGIT NUMBER IN STRING

#include<iostream>

using namespace std ;

string largestGoodInteger(string num) {
	int n = num.length() ;
	string s = "" ;
	for(int i=0; i<=n-3; ++i) {
		bool flag = true ;
		for(int j=i+1; j<=i+2; ++j) {
			if(num[i] != num[j]) {
				flag = false ;
				break ;
			}
		}
		if(flag) {
			s = max(s, num.substr(i, 3)) ;
		}
	}
	return s ;
}

int main() {
	string num, ans ;
	
	cout << endl ;
	cout << "  LARGEST 3-SAME-DIGIT NUMBER IN STRING " << endl ;
	cout << " =======================================" << endl ;
	
	cout << endl ;
	cout << "Enter a numerical string, num = " ;
	cin >> num ;
	
	ans = largestGoodInteger(num) ;
	
	cout << endl ;
	cout << "Largest Number = \"" << ans << "\"" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}