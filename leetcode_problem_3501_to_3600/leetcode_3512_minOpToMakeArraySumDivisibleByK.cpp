
// 3512. MINIMUM OPERATIONS TO MAKE ARRAY SUM DIVISIBLE BY K

#include<iostream>
#include<vector>
#include<numeric>

using namespace std ;

int minOperations(vector<int>& nums, int k) {
    return accumulate(nums.begin(), nums.end(), 0) % k ;
}

int main() {
	vector<int> nums ;
	int n, e, k ;
	
	cout << endl ;
	cout << "  MINIMUM OPERATIONS TO MAKE ARRAY SUM DIVISIBLE BY K " << endl ;
	cout << " `````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	e = minOperations(nums, k) ;
	
	cout << endl ;
	cout << "Minimum operations = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}