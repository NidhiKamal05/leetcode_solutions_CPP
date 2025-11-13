
// 3228. MAXIMUM NUMBER OF OPERATIONS TO MOVE ONES TO THE END

#include<iostream>

using namespace std ;

int maxOperations(string s) {
    int maxOp = 0, cntOne = 0 ;
    for(int i=0; i<s.length(); ++i) {
        if(s[i] == '1') {
            ++cntOne ;
        }
        else {
            while(i+1 < s.length() && s[i+1] == '0') {
                ++i ;
            }
            maxOp += cntOne ;
        }
    }
    return maxOp ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  MAXIMUM NUMBER OF OPERATIONS TO MOVE ONES TO THE END " << endl ;
	cout << " ------------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a binary string, s = " ;
	cin >> s ;
	
	ans = maxOperations(s) ;
	
	cout << endl ;
	cout << "Maximum moves = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}