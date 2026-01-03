
// 405. CONVERT A NUMBER TO HEXADECIMAL

#include<iostream>
#include<algorithm>

using namespace std ;

// void rev(string& s) {
	// int i=0, j=s.length()-1 ;
	// while(i < j) {
		// swap(s[i++], s[j--]) ;
	// }
// }

string toHex(int num) {
	if(!num) {
        return "0" ;
    }
    unsigned int n = num ; 
    string ans ;
    string hex = "0123456789abcdef" ;
    while(n) {
        ans += hex[n%16] ;
        n /= 16 ;
    }
	// rev(ans) ;
    reverse(ans.begin(), ans.end()) ;
    return ans ;
}

int main(){
	int num ;
	string hex ;
	
	cout << endl ;
	cout << "  CONVERT A NUMBER TO HEXADECIMAL " << endl ;
	cout << " *********************************" << endl ;
	
	cout << endl ;
	cout << "Enter an integer : " ;
	cin >> num ;
	
	cout << endl ;
    hex = toHex(num) ;
	
	cout << "Hexadecimal of " << num << " = " << hex << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}