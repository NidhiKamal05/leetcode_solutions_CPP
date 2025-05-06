
// 3174. CLEAR DIGITS

#include<iostream>
#include<cstring>

using namespace std ;

string clearDigits(string s) {
    int len = s.length() ;
    string ans ;
    for(int i=0; i<len; ++i) {		
        // if((s[i]>47) && (s[i]<58)) {        BOTH WORKS
        if(isdigit(s[i])) {
            ans.pop_back() ;
        }
        else {
            ans += s[i] ;
        }
    }
    return ans ;
}

int main(){
	string s, res ;
	
	cout << endl ;
	cout << " CLEAR DIGITS " << endl ;
	cout << "--------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string...." << endl ;
	cout << "s = " ;
	cin >> s ;
	
	res = clearDigits(s) ;
	
	cout << endl ;
	cout << "Resultant string = " << res << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}