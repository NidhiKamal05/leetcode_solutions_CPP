
// 2176. COUNT EQUAL AND DIVISIBLE PAIRS IN AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

int countPairs(vector<int>& nums, int k) {
    int n = nums.size(), cnt = 0 ;
    for(int i=0; i<n-1; ++i) {
        for(int j=i+1; j<n; ++j) {
            if((i*j)%k == 0) {
                if(nums[i] == nums[j]) {
                    ++cnt ;
                }
            }
        }
    }
    return cnt ;
}

int main() {
	vector<int> nums ;
	int n, e, k ;
	
	cout << "  COUNT EQUAL AND DIVISIBLE PAIRS IN AN ARRAY " << endl ;
	cout << " ---------------------------------------------" << endl ;
	
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
	
	e = countPairs(nums, k) ;
	
	cout << endl ;
	cout << "Count = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}