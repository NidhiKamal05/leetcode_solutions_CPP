
// 2710. REMOVE TRAILING ZEROS FROM A STRING

#include<iostream>
#include<cstring>

using namespace std ;

string removeTrailingZeros(string num){
	for(int i=num.length()-1; i>=0; --i){
		if(num.at(i) == '0')
			num.erase(i,1) ;
			// num.pop_back() ;
		else
			break ;
	}
	return num ;
}

int main(){
	string num ;
	
	cout << endl ;
	cout << " REMOVE TRAILING ZEROS FROM A STRING " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter a numeric string...." << endl ;
	cin >> num ;
	
	num = removeTrailingZeros(num) ;
	
	cout << endl ;
	cout << "String without trailing zeros : " << num << endl ;
	
	cout << endl ;
	system("pause") ;
	
	return 0 ;
}