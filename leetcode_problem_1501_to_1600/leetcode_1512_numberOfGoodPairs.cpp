
// 1512. NUMBER OF GOOD PAIRS

#include<iostream>
#include<vector>

using namespace std ;

int numIdenticalPairs(vector<int>& nums) {
	int n = nums.size() ;
	int cnt = 0 ;
	for(int i=0; i<n-1; ++i)
		for(int j=i+1; j<n; ++j)
			if(nums.at(i) == nums.at(j))
				++cnt ;
	return cnt ;
}

int main() {
	vector<int> nums ;
	int len, e ;
	
	cout << endl ;
	cout << "  NUMBER OF GOOD PAIRS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^"<< endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array......." << endl ;
	for(int i = 0; i<len; i++) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = numIdenticalPairs(nums) ;
	
	cout << endl ;
		cout << "Count = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}