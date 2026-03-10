
// 1356. SORT INTEGERS BY THE NUMBER OF 1 BITS

/** T.C. - O(Nlogn) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/solutions/7607931/c-solution-by-nidhi_kamal-624o/

/* JAVA */
// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/solutions/7608115/java-solution-tc-on-log-n-sc-on-by-nidhi-6067/

#include<iostream>
#include<vector>
#include<set>
#include<map>

using namespace std ;

vector<int> sortByBits(vector<int>& arr) {
    map<int, multiset<int>> mp ;
    for(int& num : arr) {
        int bits = __builtin_popcount(num) ;
        mp[bits].insert(num) ;
    }
    vector<int> ans ;
    for(auto& m : mp) {
        for(int val : m.second) {
            ans.push_back(val) ;
        }
    }
    return ans ;
}

int main() {
	vector<int> arr, ans ;
    int n, e ;
	
	cout << endl ;
	cout << "  SORT INTEGERS BY THE NUMBER OF 1 BITS " << endl ;
	cout << " =======================================" << endl ;
	
	cout << endl ;
    cout << "Enter the length of the vector: ";
    cin >> n ;
    
	cout << endl ;
    cout << "Enter elements of the array...." << endl ;
    for (int i=0; i<n; i++) {
        cin >> e ;
		arr.push_back(e) ;
    }
	
	ans = sortByBits(arr) ;

	cout << endl ;
    cout << "Answer.... " << endl ;
	cout << "[ " ;
    for (int& num : ans) {
        cout << num << " " ;
    }
    cout << "]" << endl;
	
    cout << endl;

    return 0;
}