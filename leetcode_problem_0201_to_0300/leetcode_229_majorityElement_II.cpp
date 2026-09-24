
// 229. MAJORITY ELEMENT II

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/majority-element-ii/solutions/8538072/c-solution-using-hash-map-by-nidhi_kamal-vdje/

/* JAVA */
// https://leetcode.com/problems/majority-element-ii/solutions/8538095/java-solution-beats-9890-by-nidhi_kamal-rqyg/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

vector<int> majorityElement(vector<int>& nums) {
	vector<int> ans ;
	int n = nums.size() ;
	unordered_map<int, int> freq ;
	for(int num : nums) {
		freq[num]++ ;
	}
	for(auto& m : freq) {
		if(m.second > (n/3)) {
			ans.push_back(m.first) ;
		}
	}
	return ans ;
}

int main() {
	vector<int> ans ;
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  MAJORITY ELEMENT II " << endl ;
	cout << " ....................." << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    ans = majorityElement(nums) ;
	
	cout << "Majority Element..." << endl ;
	for(int& i : ans) {
		cout << " " << i ; 
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}