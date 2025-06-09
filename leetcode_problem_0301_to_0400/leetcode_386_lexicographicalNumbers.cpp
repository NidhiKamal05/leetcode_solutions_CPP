
// 386. LEXICOGRAPHICAL NUMBERS

#include<iostream>
#include<vector>

using namespace std ;

vector<int> lexicalOrder(int n) {
    vector<int> ans ;
    vector<string> v ;
    for(int i=1; i<=n; ++i) {
        v.push_back(to_string(i)) ;
    }
    sort(v.begin(), v.end()) ;
    for(string s : v) {
        ans.push_back(stoi(s)) ;
    }
    return ans ;
}

int main() {
	vector<int> ans ;
	int n ;
	
	cout << endl ;
	cout << "  LEXICOGRAPHICAL NUMBERS " << endl ;
	cout << " `````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	ans = lexicalOrder(n) ;
	
	cout << endl ;
	for(int num : ans) {
		cout << num << " " ;
	}	
	cout << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}