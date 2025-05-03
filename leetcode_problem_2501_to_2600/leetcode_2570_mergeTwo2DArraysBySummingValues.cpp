
// 2570. MERGE TWO 2D ARRAYS BY SUMMING VALUES

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
	map<int, int> mp ;
	for(auto n : nums1) {
		mp[n[0]] += n[1] ;
	}
	for(auto n : nums2) {
		mp[n[0]] += n[1] ;
	}
	vector<vector<int>> result ;
	for(auto m : mp) {
		result.push_back({m.first,m.second}) ;
	}
	return result ;
}

int main() {
	vector<vector<int>> nums1 ;
	vector<vector<int>> nums2 ;
	vector<vector<int>> result ;
	vector<int> temp ;
	int e, r ;
	
	cout << endl ;
	cout << "  MERGE TWO 2D ARRAYS BY SUMMING VALUES " << endl ;
	cout << " =======================================" << endl ;
	
	cout << endl ;	
	cout << "Enter no. of rows of nums1...." << endl ;
	cin >> r ;
	
	cout << endl ;	
	cout << "Enter ids and values of the nums1...." << endl ;
	for(int i=0; i<r; ++i) {
		cout << "id = " ; cin >> e ;
		temp.push_back(e) ;
		cout << "value = " ; cin >> e ;
		temp.push_back(e) ;
		nums1.push_back(temp) ;
		temp.clear() ;
	}
	
	cout << endl ;	
	cout << "Enter no. of rows of nums2...." << endl ;
	cin >> r ;
	
	cout << endl ;	
	cout << "Enter ids and values of the nums2...." << endl ;
	for(int i=0; i<r; ++i) {
		cout << "id = " ; cin >> e ;
		temp.push_back(e) ;
		cout << "value = " ; cin >> e ;
		temp.push_back(e) ;
		nums2.push_back(temp) ;
		temp.clear() ;
	}
	
	result = mergeArrays(nums1, nums2) ;
	
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