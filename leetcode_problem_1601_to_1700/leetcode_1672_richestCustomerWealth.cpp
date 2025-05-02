
// 1672. RICHEST CUSTOMER WEALTH

#include<iostream>
#include<vector>

using namespace std ;

int maximumWealth(vector<vector<int>> & accounts){
	int maxWealth = INT_MIN ;
	int sum ;
	for(int i=0; i<accounts.size(); ++i){
		sum = 0 ;
		for(int j=0; j<(accounts.at(i)).size(); ++j)
			sum += (accounts.at(i)).at(j) ;
		maxWealth = max(maxWealth, sum) ;
	}
	return maxWealth ;
}

int main()
{
	vector<vector<int>> accounts ;
	int m, n, e ;
	
	cout << endl ;
	cout << "  RICHEST CUSTOMER WEALTH  " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl ;	
	
	cout << endl ;
	cout << "Matrix of m X n...." << endl ;
	cout << "m = " ;
	cin >> m ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of matrix " << m << "X" << n << "......" << endl ;
	for(int i=0; i<m; ++i){
		vector<int> t ;
		for(int j=0; j<n; ++j){
			cin >> e ;
			t.push_back(e) ;
		}
		accounts.push_back(t) ;
	}
	
	system("pause") ;
	system("cls") ;
	
	cout << endl ;
	cout << "Accounts......." << endl ;
	for(int i=0; i<accounts.size(); ++i){
		cout << "| " ;
		for(int j=0; j<(accounts.at(i)).size(); ++j)
			cout << (accounts.at(i)).at(j) << " " ;
		cout << "|" << endl ;
	}
	
	e = maximumWealth(accounts) ;
	
	cout << endl ;
	cout << "Richest customer wealth = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}