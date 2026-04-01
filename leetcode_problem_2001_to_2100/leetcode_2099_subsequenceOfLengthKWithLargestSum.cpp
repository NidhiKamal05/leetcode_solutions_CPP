
// 2099. FIND SUBSEQUENCE OF LENGTH K WITH THE LARGEST SUM

/** T.C. - O(NLogK) & S.C. - O(K) **/

/* C++ */
// https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/solutions/7742347/c-0-ms-runtime-beats-100-by-nidhi_kamal-g1x2/

/* JAVA */
// https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/solutions/7742702/java-solution-by-nidhi_kamal-lkau/

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std ;

vector<int> maxSubsequence(vector<int>& nums, int k) {
	vector<int> ans ;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq ;
    for(int i=0; i<nums.size(); ++i) {
        pq.push({nums[i], i}) ;
        if(pq.size() > k) {
            pq.pop() ;
        }
    }
    while(!pq.empty()) {
        ans.push_back(pq.top().second) ;
        pq.pop() ;
    }
    sort(ans.begin(), ans.end()) ;
    for(int i=0; i<ans.size(); ++i) {
        ans[i] = nums[ans[i]] ;
    }
    return ans ;
}

int main() {
	vector<int> nums, ans ;
	int n, e, k ;
	
	cout << endl ;
	cout << "  FIND SUBSEQUENCE OF LENGTH K WITH THE LARGEST SUM " << endl ;
	cout << " ***************************************************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = maxSubsequence(nums, k) ;
	
	cout << endl ;
	cout << "[ " ;
	for(int& num : ans) {
		cout << num << " " ;
	}
	cout << "]" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}