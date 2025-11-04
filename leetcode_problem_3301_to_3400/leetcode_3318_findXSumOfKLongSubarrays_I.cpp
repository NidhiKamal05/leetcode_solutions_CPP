
// 3318. FIND X-SUM OF ALL K-LONG SUBARRAYS I

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std ;

vector<int> findXSum(vector<int>& nums, int k, int x) {
    int n = nums.size() ;
    vector<int> ans(n - k + 1) ;
    for(int i=0; i<n-k+1; ++i) {
        unordered_map<int, int> freq ;
        for(int j=i; j<i+k; ++j) {
            freq[nums[j]]++ ;
        }
        vector<pair<int, int>> pairs ;
        for(const auto& [key, val] : freq) {
			// pairs.push_back(make_pair(val, key)) ;
            pairs.emplace_back(val, key) ;
        }
        sort(pairs.begin(), pairs.end(), greater<pair<int, int>>()) ;
        int x_sum = 0 ;
        for(int idx=0; idx<x && idx<pairs.size(); ++idx) {
            x_sum += (pairs[idx].second * pairs[idx].first) ;
        }
        ans[i] = x_sum ;
    }
    return ans ;
}

int main() {
	vector<int> nums, answer ;
	int l, e, k, x ;
	
	cout << endl ;
	cout << "  MINIMUM REMOVALS TO BALANCE ARRAY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	cout << endl ;
	cout << "Enter an integer, x = " ;
	cin >> x ;
	
	answer = findXSum(nums, k, x) ;
	
	cout << endl ;
	cout << "Answer...." << endl ;
	cout << "[ " ;
	for(int a : answer) {
		cout << a << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}