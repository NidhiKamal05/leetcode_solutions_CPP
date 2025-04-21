
// 2124. CHECK IF ALL A's APPEARS BEFORE ALL B's

#include<iostream>
#include<cstring>

using namespace std ;

bool checkString(string s){
	int FLAG = 0 ;
	for(int i=0; i<s.length(); ++i){
		if((s.at(i) == 'a')&&(FLAG == 1))
			return false ;
		if(s.at(i) == 'b')
			FLAG = 1 ;
	}
	return true ;
}

//cout<<s[i]<<",FLAG="<<FLAG<<"--"<<endl;

			// cout<<s[i]<<"++"<<endl ;
			
			//cout<<s[i]<<"&&"<<endl ;

int main(){
	string s ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF ALL A's APPEARS BEFORE ALL B's " << endl ;
	cout << " =========================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string : " ;
	cin >> s ;
	
	ans = checkString(s) ;
	
	cout << endl ;
	if(ans == 1)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}