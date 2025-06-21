
// 3005. COUNT ELEMENTS WITH MAXIMUM FREQUENCY

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int maxFrequencyElements(vector<int>& nums) {
	map<int, int> mp ;
	for(int n : nums) {
		mp[n]++ ;
	}
	int maximum = 0 ;
	for(auto m : mp) {
		maximum = max(maximum, m.second) ;
	}
	int cnt = 0 ;
	for(auto m : mp) {
		if(m.second == maximum) {
			cnt += maximum ;
		}
	}
	return cnt ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  COUNT ELEMENTS WITH MAXIMUM FREQUENCY " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = maxFrequencyElements(nums) ;
	
	cout << endl ;
	cout << "Count = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}