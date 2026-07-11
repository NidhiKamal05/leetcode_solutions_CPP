
// 2244. MINIMUM ROUNDS TO COMPLETE ALL TASKS

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/solutions/8390330/c-solution-greedy-hash-map-on-by-nidhi_k-n8h6/

/* JAVA */
// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/solutions/8390341/java-runtime-beats-9430-greedy-by-nidhi_-8vgy/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

int minimumRounds(vector<int>& tasks) {
	int minRound = 0 ;
	unordered_map<int, int> freq ;
	for(int task : tasks) {
		freq[task]++ ;
	}
	for(auto f : freq) {
		int cnt = f.second ;
		if(cnt == 1) {
			return -1 ;
		}
		else if(cnt % 3 == 0) {
			minRound += (cnt / 3) ;
		}
		else {
			minRound += ((cnt / 3) + 1) ;
		}
	}
	return minRound ;
}

int main() {
	int n, e ;
	vector<int> tasks ;
	
	cout << endl ;
	cout << "  MINIMUM ROUNDS TO COMPLETE ALL TASKS " << endl ;
	cout << " **************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		tasks.push_back(e) ;
	}
	
	e = minimumRounds(tasks) ;
	
	cout << endl ;
	cout << "Minimum rounds = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}