
// 2389. LONGEST SUBSEQUENCE WITH LIMITED SUM

/** T.C. - O(NlogN + M*N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/longest-subsequence-with-limited-sum/solutions/7871772/c-solution-by-nidhi_kamal-ibqz/

/* JAVA */
// https://leetcode.com/problems/longest-subsequence-with-limited-sum/solutions/7871866/java-by-nidhi_kamal-b09w/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
	sort(nums.begin(), nums.end()) ;
    int m = queries.size() ;
    int n = nums.size() ;
    vector<int> ans(m) ;
    for(int i = 0; i < m; ++i) {
        int subseqLen = 0, sum = 0 ;
        for(int j = 0; j < n; ++j) {
            sum += nums[j] ;
            if(sum <= queries[i]) {
                subseqLen += 1 ;
            }
            else {
                break ;
            }
        }
        ans[i] = subseqLen ;
    }
    return ans ;
}

int main() {
	int n, e ;
	vector<int> nums, queries, ans ;
	
	cout << endl ;
	cout << "  LONGEST SUBSEQUENCE WITH LIMITED SUM " << endl ;
	cout << " **************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array(nums), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array(nums)......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter length of the array(queries), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array(queries)......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		queries.push_back(e) ;
	}
	
	ans = answerQueries(nums, queries) ;
	
	cout << endl ;
	cout << "Answer....." << endl ;
	cout << "[ " ;
	for(int& num : ans) {
		cout << num << " " ;
	}
	cout << "]" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



// void Sort(vector<int>& v) {
	// int n = v.size() ;
	// for(int i=0; i<n-1; ++i) {
		// for(int j=i+1; j<n; ++j) {
			// if(v[i] > v[j]) {
				// swap(v[i], v[j]) ;
			// }
		// }
	// }
// }