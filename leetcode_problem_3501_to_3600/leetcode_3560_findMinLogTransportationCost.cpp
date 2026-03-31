
// 3560. FIND MINIMUM LOG TRANSPORTATION COST

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/find-minimum-log-transportation-cost/solutions/7731876/c-solution-0-ms-runtime-beats-100-o1-by-dgc77/

/* JAVA */
// https://leetcode.com/problems/find-minimum-log-transportation-cost/solutions/7731899/java-easy-solution-by-nidhi_kamal-001h/

#include<iostream>

using namespace std ;

long long minCuttingCost(int n, int m, int k) {
    if(n <= k && m <= k) {
        return 0 ;
    }
    if(n > k && m <= k) {
        return (long long)(n - k) * k ;
    }
    if(m > k && n <= k) {
        return (long long)(m - k) * k ;
    }
    return 0 ;
}

int main() {
	int n, m, k ;
	long long minCost ;
	
	cout << endl ;
	cout << "  FIND MINIMUM LOG TRANSPORTATION COST " << endl ;
	cout << " **************************************" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter an integer, m = " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	minCost = minCuttingCost(n, m, k) ;
	
	cout << endl ;
	cout << "Minimum cost = " << minCost << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*long long minCuttingCost(int n, int m, int k) {
	if(n <= k && m <= k) {
		return 0 ;
	}
	int x = n > m ? n : m ;
	int len1 = x - k ;
	int len2 = x - len1 ;
	long long minCost = len1 * len2 ;
	return minCost ;
}*/