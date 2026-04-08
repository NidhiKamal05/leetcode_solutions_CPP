
// 3653. XOR AFTER RANGE MULTIPLICATION QUERIES I

/** T.C. - O(Q * N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/xor-after-range-multiplication-queries-i/solutions/7830008/c-solution-by-nidhi_kamal-c3de/

/* JAVA */
// https://leetcode.com/problems/xor-after-range-multiplication-queries-i/solutions/7830073/java-runtime-beats-8800-easy-solution-by-g3n8/

#include<iostream>
#include<vector>

using namespace std ;

int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
	for(vector<int> query : queries) {
        int idx = query[0], r = query[1], k = query[2], v = query[3] ;
        while(idx <= r) {
            nums[idx] = ((long long)nums[idx] * v) % 1000000007 ;
            idx += k ;
        }
    }
    int XOR = 0 ;
    for(int num : nums) {
        XOR ^= num ;
    }
    return XOR ;
}

int main() {
	vector<int> nums ;	
	vector<vector<int>> queries ;
	int n, e, q ;
	
	cout << endl ;
	cout << "  XOR AFTER RANGE MULTIPLICATION QUERIES I " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter no. of queries, q = " ;
	cin >> q ;
	
	cout << endl << "Enter elements of the queries : " << endl ;
	for(int i = 0; i < q; i++) {
		vector<int> row ;
		cout << endl << i << "th query...." << endl ;
		for(int j = 0; j < 4; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		queries.push_back(row) ;
	}
	
    e = xorAfterQueries(nums, queries) ;
	
	cout << endl ;
	cout << "XOR = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}