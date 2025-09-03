
// 3179. FIND THE N-TH VALUE AFTER K SECONDS

#include<iostream>
#include<vector>

using namespace std ;

int valueAfterKSeconds(int n, int k) {
	vector<int> v(n, 1) ;
    const int MOD = 1000000007 ;
    for(int i=0; i<k; ++i) {
        for(int j=1; j<n; ++j) {
            v[j] = v[j-1]%MOD + v[j]%MOD ;
        }
    }
    return v[n-1] % MOD ;
}

int main(){
	int n, k, ans ;
	
	cout << endl ;
	cout << "  FIND THE N-TH VALUE AFTER K SECONDS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	cout << endl ;	
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = valueAfterKSeconds(n, k) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}