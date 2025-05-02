
// 728. SELF DIVIDING NUMBERS

#include<iostream>
#include<vector>

using namespace std ;

vector<int> selfDividingNumbers(int left, int right){
	vector<int> ans ;
	for(int i=left; i<=right; ++i){
		int num = i ;
		bool FLAG = 1 ;
		while(num){
			int n = num%10 ;
			if((!n) || (i%n != 0)){
				FLAG = 0 ;
				break ;
			}
			num /= 10 ;
		}
		if(FLAG)
			ans.push_back(i) ;
	}
	return ans ;
}

int main(){
	vector<int> ans{} ;
	int left, right ;
	
	cout << endl ;
	cout << "  SELF DIVIDING NUMBERS " << endl ;
	cout << " ```````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter range....." << endl ;
	cout << "left = " ;
	cin >> left ;
	cout << "right = " ;
	cin >> right ;
	
    ans = selfDividingNumbers(left, right) ;
	
	if(!ans.empty())
        for(int i=0; i<ans.size(); i++)
	    	cout << " " << ans.at(i) << " " ;
	else
		cout << "NOT FOUND" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}