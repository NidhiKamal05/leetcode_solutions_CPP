
// 3075. MAXIMIZE HAPPINESS OF SELECTED CHILDREN

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

long long maximumHappinessSum(vector<int>& happiness, int k) {
    long long ans = 0 ;
    sort(happiness.rbegin(), happiness.rend()) ;
    for(int i=0; i<k; ++i) {
        ans += ((happiness[i] - i) < 0) ? 0 : (happiness[i] - i) ;
    }
    return ans ;
}

int main() {
	vector<int> happiness ;
	int l, e, k ;
	long long ans ;
	
	cout << endl ;
	cout << "  MAXIMIZE HAPPINESS OF SELECTED CHILDREN " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		happiness.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = maximumHappinessSum(happiness, k) ;
	
	cout << endl ;
	cout << "Maximum happiness = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}