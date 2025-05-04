
// 415. ADD STRINGS

#include<iostream>
#include<cstring>

using namespace std ;

string rev(string s) {
	int l = s.length() ;
	string r ;
	for(int i=l-1; i>=0; --i) {
		r += s[i] ;
	}
	return r ;
}

string addStrings(string num1, string num2) {
	string ans ;
	int i = num1.length()-1 ;
	int j = num2.length()-1 ;
	int carry = 0 ;
	int sum = 0 ;
	while(i>=0 || j>=0 || carry) {
		sum = 0 ;
		sum += carry ;
		if(i>=0) {
			sum += (num1[i]-'0') ;
		}
		if(j>=0) {
			sum += (num2[j]-'0') ;
		}
		if(sum > 9) {
			carry = sum/10 ;
		}
		else {
			carry = 0 ;
		}
		ans += to_string(sum%10) ;
		--i ;
		--j ;
	}
	if(carry != 0) {
		ans += to_string(carry) ;
	}
	// reverse(ans.begin(), ans.end()) ;
	// return ans ;
	string ans1 = rev(ans) ;
	return ans1 ;
}

/*
// c_str() returns pointer to an array
// atoll converts to long long 

string addStrings(string num1, string num2) {
    // long long a = atoll(num1.c_str()) ;
    // long long b = atoll(num2.c_str()) ;
    // return to_string(a+b) ;
    return to_string(atoll(num1.c_str()) + atoll(num2.c_str())) ;       
}
*/

int main(){
	string num1, num2, add ;
	
	cout << endl ;
	cout << " ADD STRINGS " << endl ;
	cout << "-------------" << endl ;
	
	cout << endl ;
	cout << "num1 = " ;
	cin >> num1 ;
	cout << "num2 = " ;
	cin >> num2 ;
	
	add = addStrings(num1, num2) ;
	
	cout << endl ;
	cout << "Result = " << add << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*string addStrings(string num1, string num2){
	return to_string((stoi(num1))+(stoi(num2))) ;
}*/