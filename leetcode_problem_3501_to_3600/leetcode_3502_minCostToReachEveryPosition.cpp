
// 3502. MINIMUM COST TO REACH EVERY POSITION

#include<iostream>
#include<vector>

using namespace std ;

/*vector<int> minCosts(vector<int>& cost) {
    for(int i=cost.size()-1; i>=0; --i) {
        cost[i] = *min_element(cost.begin(), cost.begin()+i+1) ;
    }
    return cost ;
}*/

vector<int> minCosts(vector<int>& cost) {
    vector<int> ans ;
    int minCost = cost[0] ;
    for(int& c : cost) {
        minCost = min(minCost, c) ;
        ans.push_back(minCost) ;
    }
    return ans ;
}

int main() {
	vector<int> cost, ans ;
	int e, n ;
	
	cout << endl ;
	cout << "  MINIMUM COST TO REACH EVERY POSITION " << endl ;
	cout << " ======================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		cost.push_back(e) ;
	}
	
    ans = minCosts(cost) ;
	
	cout << endl ;
	cout << "Answer...." << endl ;
	cout << "[ " ;
	for(int& a : ans) {
		cout << a << " " << endl ;
	}
	cout << "]" ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}