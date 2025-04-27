
// 3289. THE TWO SNEAKY NUMBERS OF DIGITVILLE

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

vector<int> getSneakyNumbers(vector<int>& nums) {
	map<int, int> mp ;
	for(auto i : nums)
		mp[i]++ ;
	vector<int> sneaky ;
	map<int, int> :: iterator it ;
	for(it=mp.begin(); it!=mp.end(); ++it)
		if(it->second > 1)
			sneaky.push_back(it->first) ;
	return sneaky ;
}

int main() {
	vector<int> nums ;
	vector<int> sneaky ;
	int l, e ;
	
	cout << endl ;
	cout << "  THE TWO SNEAKY NUMBERS OF DIGITVILLE " << endl ;
	cout << " ======================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	sneaky = getSneakyNumbers(nums) ;
	
	cout << endl ;
	cout << "Sneaky Numbers...... " << endl ;
		for(int i=0; i<sneaky.size(); ++i)
			cout << " " << sneaky.at(i) ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}