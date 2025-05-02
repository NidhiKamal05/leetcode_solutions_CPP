
// 434. NUMBER OF SEGMENTS IN A STRING

#include<iostream>
#include<cstring>

using namespace std ;

// if((s.at(i)>=33 && s.at(i)<=46)||(s.at(i)==58)||(s.at(i)==61)||(s.at(i)==64)||(s.at(i)==94)||(s.at(i)==95)){
	// ++i ;
// }

int countSegments(string s){
	s.append(" ") ;
    int cnt = 0 ;
    int i = 0 ;
    if(s[i] == ' ') {
        ++i ;
    }
    while(i < s.length()) {
        if((s[i] == ' ') && (s[i-1] != ' ')) {
            ++cnt ;
        }
        ++i ;
    }
    return cnt ;
}

int main(){
	string s ;
	int cnt ;
	
	cout << endl ;
	cout << "  NUMBER OF SEGMENTS IN A STRING " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter a sentence...." << endl ;
	// cin >> s ;
	getline(cin,s) ;
	
	cout << s << endl ;
	
	cout << endl ;	
	cnt = countSegments(s) ;
	
	cout << "No. of segements = " << cnt << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}