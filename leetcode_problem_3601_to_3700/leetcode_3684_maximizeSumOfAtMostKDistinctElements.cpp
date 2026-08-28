
// 3684. MAXIMIZE SUM OF AT MOST K DISTINCT ELEMENTS

/** T.C. - O(N log N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/maximize-sum-of-at-most-k-distinct-elements/solutions/8487717/c-solution-by-nidhi_kamal-fi0q/

/* JAVA */
// https://leetcode.com/problems/maximize-sum-of-at-most-k-distinct-elements/solutions/8487725/java-hash-set-sorting-by-nidhi_kamal-rm0h/

#include<iostream>
#include<vector>
#include<set>

using namespace std ;

vector<int> maxKDistinct(vector<int>& nums, int k) {
    set<int, greater<int>> s(nums.begin(), nums.end()) ;
    vector<int> ans ;
    for(auto& el : s) {
        if(k > 0) {
            ans.push_back(el) ;
        }
        --k ;
    }
    return ans ;
}

int main() {
	vector<int> nums, res ;
	int n, e, k ;
	
	cout << endl ;
	cout << "  MAXIMIZE SUM OF AT MOST K DISTINCT ELEMENTS " << endl ;
	cout << " `````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
    res = maxKDistinct(nums, k) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(int& r : res) {
		cout << r << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}