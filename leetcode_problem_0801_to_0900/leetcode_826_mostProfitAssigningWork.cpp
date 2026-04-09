
// 826. MOST PROFIT ASSIGNING WORK

/** T.C. - O(N^2 + MlogM) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/most-profit-assigning-work/solutions/7846843/c-solution-by-nidhi_kamal-0byl/

/* JAVA */
// https://leetcode.com/problems/most-profit-assigning-work/solutions/7847063/java-solution-beats-9719-by-nidhi_kamal-dp3w/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
    vector<pair<int, int>> difficultyProfit ;
    for(int i = 0; i < difficulty.size(); ++i) {
        difficultyProfit.push_back({difficulty[i], profit[i]}) ;
    }
    sort(difficultyProfit.begin(), difficultyProfit.end()) ;
    sort(worker.begin(), worker.end()) ;
    int maxProfit = 0 ;	
    for(int i = 0; i < worker.size(); ++i) {
        int j = 0, profit = 0 ;
        while(j < difficultyProfit.size() && worker[i] >= difficultyProfit[j].first) {
            profit = max(profit, difficultyProfit[j++].second) ;
        }
        maxProfit += profit ;
    }
    return maxProfit ;
}

int main() {
	int n, e ;
	vector<int> difficulty, profit, worker ;
	
	cout << endl ;
	cout << "  MOST PROFIT ASSIGNING WORK " << endl ;
	cout << " ============================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array(difficulty/profit), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter difficulty of the job......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> e ;
		difficulty.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter profit of the job......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> e ;
		profit.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array(worker), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter ability of the worker......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> e ;
		worker.push_back(e) ;
	}
	
	e = maxProfitAssignment(difficulty, profit, worker) ;
	
	cout << endl ;
	cout << "Maximum profit = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




/*void sortVectorPair(vector<pair<int, int>>& v) {
	int n = v.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(v[i].first > v[j].first) {
				swap(v[i], v[j]) ;
			}
		}
	}
}*/

/*void sortVectorInt(vector<int>& v) {
	int n = v.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(v[i] > v[j]) {
				swap(v[i], v[j]) ;
			}
		}
	}
}*/