
// 3375. MINIMUM OPERATIONS TO MAKE ARRAY VALUES EQUAL TO K

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

int minOperations(vector<int>& nums, int k) {
    unordered_set<int> st ;
    for(int& num : nums) {
        if(num < k) {
            return -1 ;
        }
        else if(num > k) {
            st.insert(num) ;
        }
        else {
            continue ;
        }
    }
    return st.size() ;
}

int main() {
	vector<int> nums ;
	int n, e, k ;
	
	cout << endl ;
	cout << "  MINIMUM OPERATIONS TO MAKE ARRAY VALUES EQUAL TO K " << endl ;
	cout << " ====================================================" << endl ;
	
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
	cout << "Minimum Operations = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}