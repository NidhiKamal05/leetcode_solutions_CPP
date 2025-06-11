
// 2190. MOST FREQUENT NUMBER FOLLOWING KEY IN AN ARRAY

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int mostFrequent(vector<int>& nums, int key) {
	int len = nums.size() ;
	int maxCnt = INT_MIN ;
	map<int, int> mp ;
	for(int i=1; i<len; ++i) {
		if(nums[i-1] == key) {
			mp[nums[i]]++ ;
		}
	}
	for(auto n : mp) {
		maxCnt = max(maxCnt, n.second) ;
	}
	for(auto i : mp) {
		if(i.second == maxCnt) {
			return i.first ;
		}
	}
	return -1 ;
}

int main() {
	vector<int> nums ;
	int e, l, key ;
	
	cout << endl ;
	cout << "  MOST FREQUENT NUMBER FOLLOWING KEY IN AN ARRAY " << endl ;
	cout << " ````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer....\nkey = " ;
	cin >> key ;
	
    e = mostFrequent(nums, key) ;
	
	cout << endl ;
	cout << "Most Frequent Number = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}