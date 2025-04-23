
// 2396. STRICTLY PALINDROMIC NUMBER

#include<iostream>
#include<vector>

using namespace std ;

/*bool isPalindromicBase(int n, int base){
    vector<int> digits{} ;
    while(n){
        digits.push_back(n%base) ;
        n /= base ;
    }
    vector<int> revDigits(digits.begin(), digits.end()) ;
    reverse(revDigits.begin(), revDigits.end()) ;
    return digits == revDigits ;
}

bool isStrictlyPalindromic(int n) {
    for(int base=2; base<=n-2; ++base)
        if(!isPalindromicBase(n, base))
            return false ;
    return true ;
}*/

bool isStrictlyPalindromic(int n) {
	return false ;
}

int main(){
	int n ;
	bool ans ;
	
	cout << endl ;
	cout << " STRICTLY PALINDROMIC NUMBER " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter an integer...." << endl ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;	
	ans = isStrictlyPalindromic(n) ;
	
	if(ans == 1)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


        /*int i = 0 ;
        int j = digits.size()-1 ;
        while(i < j){
            if(digits.at(i) != digits.at(j))
                return false ;
            ++i ;
            --j ;
        }
        return true ;*/