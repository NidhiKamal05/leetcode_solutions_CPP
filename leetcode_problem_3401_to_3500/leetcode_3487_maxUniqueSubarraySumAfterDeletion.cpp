
// 3487. MAXIMUM UNIQUE SUBARRAY SUM AFTER DELETION

#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std ;

int maxElement(vector<int> v) {
	int maxEl = INT_MIN ;
	for(int& el : v) {
		maxEl = max(el, maxEl) ;
	}
	return maxEl ;
}

int maxSum(vector<int>& nums) {
	// int maxEl = maxElement(nums) ;
	int maxEl = *max_element(nums.begin(), nums.end()) ;
	if(maxEl < 0) {
		return maxEl ;
	}
    int sum = 0 ;
    unordered_set<int> st ;
    for(int& num : nums) {
        st.insert(num) ;
    }
    for(auto& num : st) {
        if(num >= 0) {
            sum += num ;
        }
    }
    return sum ;
}

int main() {
	int n, e ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  MAXIMUM UNIQUE SUBARRAY SUM AFTER DELETION " << endl ;
	cout << " ********************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = maxSum(nums) ;
	
	cout << endl ;
	cout << "Maximum sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}