
// 412. FIZZ BUZZ

#include<iostream>
#include<vector>
#include<cstring>

using namespace std ;

vector<string> fizzBuzz(int n){
	vector<string> answer ;
	for(int i=1; i<=n; ++i){
		if((i%3 == 0) && (i%5 == 0))
			answer.push_back("FizzBuzz") ;
		else if(i%3 == 0)
			answer.push_back("Fizz") ;
		else if(i%5 == 0)
			answer.push_back("Buzz") ;
		else
			answer.push_back(to_string(i)) ;
	}
	return answer ;
}

int main(){
	vector<string> s{} ;
	int n ;
	
	cout << endl ;
	cout << " FIZZ BUZZ " << endl ;
	cout << "-----------" << endl ;
	
	cout << endl ;
	cout << "Enter a number...." << endl ;
	cout << "n = " ;
	cin >> n ;
	
	s = fizzBuzz(n) ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<s.size(); ++i){
		cout << " " << s.at(i) << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}