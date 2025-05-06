
// 1790. CHECK IF ONE STRING SWAP CAN MAKE STRINGS EQUAL

#include<iostream>

using namespace std ;

bool areAlmostEqual(string s1, string s2) {
    if(s1 == s2) {
        return true ;
    }
    int cnt = 0 ;
    int index1 = 0 ;
    int index2 = 0 ;
    for(int i=0; i<s1.length(); ++i) {
        if(s1[i] != s2[i]) {
            ++cnt ;
            if(cnt > 2) {
                return false ;
            }
            else if(cnt == 1) {
                index1 = i ;
            }
            else {
                index2 = i ;
            }
        }
    }
    return ((s1[index1] == s2[index2]) && (s1[index2] == s2[index1])) ;
}

int main(){
	string s1, s2 ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF ONE STRING SWAP CAN MAKE STRINGS EQUAL " << endl ;
	cout << " `````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string : " ;
	cin >> s1 ;
	
	cout << endl ;
	cout << "Again, Enter a string : " ;
	cin >> s2 ;
	
	cout << endl ;
    ans = areAlmostEqual(s1, s2) ;
	
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}