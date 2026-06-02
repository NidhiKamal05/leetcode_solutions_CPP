
// 2144. MINIMUM COST OF BUYING CANDIES WITH DISCOUNT

/** T.C. - O(N Log N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/solutions/8307120/c-0-ms-runtime-beats-100-very-easy-solut-ox0q/

/* JAVA */
// https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/solutions/8307148/java-solution-greedy-approach-using-sort-6ph8/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

/*int minimumCost(vector<int>& cost) {
	sort(cost.rbegin(), cost.rend()) ;
	int n = cost.size() ;
	int minCost = 0 ;
	for(int i = 0; i < n; ++i) {
		if((i + 1) % 3 != 0) {
			minCost += cost[i] ;
		}
	}
	return minCost ;
}*/

int minimumCost(vector<int>& cost) {
	sort(cost.begin(), cost.end()) ;
	int n = cost.size() ;
	int minCost = 0, cnt = 0 ;
	for(int i = n - 1; i >= 0; --i) {
		++cnt ;
		if(cnt % 3 == 0) {
			continue ;
		}
		minCost += cost[i] ;
	}
	return minCost ;
}

int main() {
	int n, e;
	vector<int> cost ;
	
	cout << endl ;
	cout << "  MINIMUM COST OF BUYING CANDIES WITH DISCOUNT " << endl ;
	cout << " **********************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		cost.push_back(e) ;
	}
	
	e = minimumCost(cost) ;
	
	cout << endl ;
	cout << "Minimum cost = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}