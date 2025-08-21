
// 2363. MERGE SIMILAR ITEMS

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
	map<int, int> mp ;
	for(auto i : items1) {
		mp[i[0]] += i[1] ;
	}
	for(auto i : items2) {
		mp[i[0]] += i[1] ;
	}
	vector<vector<int>> result ;
	for(auto m : mp) {
		result.push_back({m.first,m.second}) ;
	}
	return result ;
}

int main() {
	vector<vector<int>> items1 ;
	vector<vector<int>> items2 ;
	vector<vector<int>> result ;
	vector<int> temp ;
	int e, r ;
	
	cout << endl ;
	cout << "  MERGE SIMILAR ITEMS " << endl ;
	cout << " =====================" << endl ;
	
	cout << endl ;	
	cout << "Enter no. of rows of items1...." << endl ;
	cin >> r ;
	
	cout << endl ;	
	cout << "Enter values and weights of the items1...." << endl ;
	for(int i=0; i<r; ++i) {
		cout << "value = " ; cin >> e ;
		temp.push_back(e) ;
		cout << "weight = " ; cin >> e ;
		temp.push_back(e) ;
		items1.push_back(temp) ;
		temp.clear() ;
	}
	
	cout << endl ;	
	cout << "Enter no. of rows of items2...." << endl ;
	cin >> r ;
	
	cout << endl ;	
	cout << "Enter values and weights of the items2...." << endl ;
	for(int i=0; i<r; ++i) {
		cout << "value = " ; cin >> e ;
		temp.push_back(e) ;
		cout << "weight = " ; cin >> e ;
		temp.push_back(e) ;
		items2.push_back(temp) ;
		temp.clear() ;
	}
	
	result = mergeSimilarItems(items1, items2) ;
	
	cout << endl ;
	cout << "[ " ;
	for(int i=0; i<result.size(); ++i) {
		cout << "[" << result[i][0] << "," << result[i][1] << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}