
// 2870. MINIMUM NUMBER OF OPERATIONS TO MAKE ARRAY EMPTY

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/solutions/8392556/c-easy-on-solution-by-nidhi_kamal-w5vp/

/* JAVA */
// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/solutions/8392544/java-solution-runtime-beats-9455-by-nidh-s6km/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

int minOperations(vector<int>& nums) {
	int minOp = 0 ;
	unordered_map<int, int> freq ;
	for(int& num : nums) {
		freq[num]++ ;
	}
	for(auto& f : freq) {
		int cnt = f.second ;
		if(cnt == 1) {
			return -1 ;
		}
		else if(cnt % 3 == 0) {
			minOp += (cnt / 3) ;
		}
		else {
			minOp += ((cnt / 3) + 1) ;
		}
	}
	return minOp ;
}

int main() {
	int n, e ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  MINIMUM NUMBER OF OPERATIONS TO MAKE ARRAY EMPTY " << endl ;
	cout << " --------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = minOperations(nums) ;
	
	cout << endl ;
	cout << "Minimum operations = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}