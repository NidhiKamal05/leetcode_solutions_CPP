
// 1207. UNIQUE NUMBER OF OCCURRENCES

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/unique-number-of-occurrences/solutions/8329680/c-runtime-0-ms-beats-100-on-time-space-b-3ylu/

/* JAVA */
// https://leetcode.com/problems/unique-number-of-occurrences/solutions/8329689/java-solution-runtime-beats-9845-easy-by-aj4m/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

bool uniqueOccurrences(vector<int> & arr){	
	unordered_map<int, int> freq ;
	for(int& e : arr) {
		freq[e]++ ;
	}
	unordered_map<int, int> mp ;
	for(auto& f : freq) {
		mp[f.second]++ ;
		if(mp[f.second] > 1) {
			return false ;
		}
	}
	return true ;
}

int main() {
	vector<int> arr ;
	int l, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  UNIQUE NUMBER OF OCCURRENCES " << endl ;
	cout << " ==============================" << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		arr.push_back(e) ;
	}
	
	ans = uniqueOccurrences(arr) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}