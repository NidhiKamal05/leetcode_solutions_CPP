
// 260. SINGLE NUMBER III

#include<iostream>
#include<vector> 
#include<map> 

using namespace std ;

vector<int> singleNumber(vector<int>& nums) {
	vector<int> ans(2) ;
	map<int, int> mp ;
	for(int x : nums) {
		mp[x]++ ;
	}
	int cnt = 0 ;
	for(auto i : mp) {
		if(i.second == 1) {
			ans[cnt++] = i.first ;
		}
	}
	return ans ;
}

int main() {
	vector<int> nums ;
	vector<int> ans ;
	int l, e ;
	
	cout << endl ;
	cout << "  SINGLE NUMBER III " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = singleNumber(nums) ;
	
	cout << endl ;
	cout << "Elements of the array ans..... " << endl ;
	for(int i=0; i<ans.size(); ++i)
		cout << " " << ans.at(i) << " " ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}