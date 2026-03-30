
// 2483. MINIMUM PENALTY FOR A SHOP

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/minimum-penalty-for-a-shop/solutions/7720805/c-solution-on-time-by-nidhi_kamal-yej6/

/* JAVA */
// https://leetcode.com/problems/minimum-penalty-for-a-shop/solutions/7720872/java-by-nidhi_kamal-7d95/

#include<iostream>
#include<vector>

using namespace std ;

int bestClosingTime(string customers) {
	int n = customers.size() ;
	int yCnt = 0, nCnt = 0 ;
	vector<int> suffix_Y(n + 1), prefix_N(n + 1) ;
	prefix_N[0] = nCnt ;
	suffix_Y[n] = yCnt ;
	for(int i = 1, j = n - 1; i <= n && j >= 0; ++i, --j) {
		if(customers[i - 1] == 'N') {
			++nCnt ;
		}
		if(customers[j] == 'Y') {
			++yCnt ;
		}
		prefix_N[i] = nCnt ;
		suffix_Y[j] = yCnt ;
	}
	int penalty = 0, earliestHour = 0 ;
	int minPenalty = INT_MAX ;
	for(int i = 0; i <= n; ++i) {
		penalty = prefix_N[i] + suffix_Y[i] ;
		if(penalty < minPenalty) {
			minPenalty = penalty ;
			earliestHour = i ;
		}
	}
	return earliestHour ;
}

int main() {
	string customers ;
	int ans ;
	
	cout << endl ;
	cout << "  MINIMUM PENALTY FOR A SHOP " << endl ;
	cout << " ````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string (containing only 'Y' and 'N'), customers = " ;
	cin >> customers ;
	
    ans = bestClosingTime(customers) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}