
// 3527. FIND THE MOST COMMON RESPONSE

/** T.C. - O(N * M * L) & S.C. - O(N * M * L) **/

/* C++ */
// https://leetcode.com/problems/find-the-most-common-response/solutions/7911530/c-solution-hash-table-by-nidhi_kamal-ajtx/

/* JAVA */
// https://leetcode.com/problems/find-the-most-common-response/solutions/7911751/java-by-nidhi_kamal-x9zj/

#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
// #include<queue>

using namespace std ;

string findCommonResponse(vector<vector<string>>& responses) {
	string commonResponse ;
	unordered_map<string, int> freq ;
	for(vector<string>& response : responses) {
		unordered_set<string> st(response.begin(), response.end()) ;
		for(auto& s : st) {
			freq[s]++ ;
		}
	}
	int max = 0 ;
	for(auto& [s, cnt] : freq) {
		if((cnt == max && s < commonResponse) || cnt > max) {
			max = cnt ;
			commonResponse = s ;
		}
	}
	return commonResponse ;
}

int main() {
	int n ;
	string resp ;
	vector<vector<string>> responses ;
	
	cout << endl ;
	cout << "  FIND THE MOST COMMON RESPONSE " << endl ;
	cout << " ===============================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the 2D-array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter responses......" << endl ;
	for(int i=0; i<n; ++i) {
		int l ;
		cout << endl ;
		cout << "Enter length of the array, l = " ;
		cin >> l ;
		vector<string> response ;
		cout << "Enter " << i << "th responses in the array......" << endl ;
		for(int j=0; j<l; ++j) {		
			cin >> resp ;
			response.push_back(resp) ;
		}
		responses.push_back(response) ;
	}
	
	resp = findCommonResponse(responses) ;
	
	cout << endl ;
	cout << "Most common response = " << resp << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*string findCommonResponse(vector<vector<string>>& responses) {
	unordered_map<string, int> freq ;
	for(vector<string>& response : responses) {
		unordered_set<string> st(response.begin(), response.end()) ;
		for(auto& s : st) {
			freq[s]++ ;
		}
	}
	priority_queue<pair<int, string>> pq ;
	for(auto& f : freq) {
		pq.push({f.second, f.first}) ;
	}
	return pq.top().second ;
}*/