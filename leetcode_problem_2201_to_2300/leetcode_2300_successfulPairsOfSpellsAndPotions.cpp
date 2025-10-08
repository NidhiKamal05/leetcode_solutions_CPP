
// 2300. SUCCESSFUL PAIRS OF SPELLS ANS POTIONS

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

// void Sort(vector<int>& v) {
	// int n = v.size() ;
	// for(int i=0; i<n-1; ++i) {
		// for(int j=i+1; j<n; ++j) {
			// if(v[i] > v[j]) {
				// swap(v[i], v[j]) ;
			// }
		// }
	// }
// }

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
	// Sort(potions) ;
    sort(potions.begin(), potions.end()) ;
    int n = spells.size() ;
    vector<int> ans(n) ;
    for(int i=0; i<n; ++i) {
        int cnt = 0 ;
        int start = 0, end = potions.size() - 1 ;
        while(start <= end) {
            int mid = start + (end-start) / 2 ;
            long long prod = (long long)potions[mid] * spells[i] ;
            if(prod >= success) {
                cnt += (end - mid + 1) ;
                end = mid - 1 ;
            }
            else {
                start = mid + 1 ;
            }
        }
        ans[i] = cnt ;
    }
    return ans ;
}

int main() {
	int n, e ;
	long long success ;
	vector<int> spells, potions, pairs ;
	
	cout << endl ;
	cout << "  SUCCESSFUL PAIRS OF SPELLS ANS POTIONS " << endl ;
	cout << " ===========================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array(spells), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter ability of the spells......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> e ;
		spells.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array(potions), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter training capacity of the potions......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> e ;
		potions.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an element, success = " ;
	cin >> success ;
	
	pairs = successfulPairs(spells, potions, success) ;
	
	cout << endl ;
	cout << "No. of Pairs......" << endl ;
	cout << "[ " ;
	for(int& p : pairs) {
		cout << p << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}