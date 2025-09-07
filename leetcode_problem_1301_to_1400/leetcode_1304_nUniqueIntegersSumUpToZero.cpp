
// 1304. FIND N UNIQUE INTEGERS SUM UP TO ZERO

#include<iostream>
#include<vector>

using namespace std ;

vector<int> sumZero(int n) {
    vector<int> ans ;
    if(n % 2) {
        ans.push_back(0) ;
    }
    for(int i=1; i<=n/2; ++i) {
        ans.push_back(i) ;
        ans.push_back(-i) ;
    }
    return ans ;
}

int main() {
	int n ;
	vector<int> ans ;
	
	cout << endl ;
	cout << "  FIND N UNIQUE INTEGERS SUM UP TO ZERO " << endl ;
	cout << " ---------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	ans = sumZero(n) ;
	
	cout << endl ;
	
	cout << endl ;
	cout << "Resultant Array......" << endl ;
	cout << "[ " ;
	for(int num : ans) {
		cout << num << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}