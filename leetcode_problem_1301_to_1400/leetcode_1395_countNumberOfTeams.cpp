
// 1395. COUNT NUMBER OF TEAMS

/** T.C. - O(N^3) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/count-number-of-teams/solutions/8318072/c-solution-beats-8214-by-nidhi_kamal-m0ms/

/* JAVA */
// https://leetcode.com/problems/count-number-of-teams/solutions/8318082/java-solution-by-nidhi_kamal-rxcv/

#include<iostream>
#include<vector>

using namespace std ;

int numTeams(vector<int>& rating) {
	int n = rating.size() ;
	int cnt = 0 ;
	for(int i = 0; i < n-2; ++i) {
		for(int j = i+1; j < n-1; ++j) {
			for(int k = j+1; k < n; ++k) {
				if(((rating[i] < rating[j]) && (rating[j] < rating[k])) || ((rating[i] > rating[j]) && (rating[j] > rating[k]))) {
					++cnt ;
				}
			}
		}
	}
	return cnt ;
}

int main() {
	vector<int> rating ;
	int l, e ;
	
	cout << endl ;
	cout << "  COUNT NUMBER OF TEAMS " << endl ;
	cout << " ......................." << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter ratings....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		rating.push_back(e) ;
	}
	
	e = numTeams(rating) ;
	
	cout << endl ;
	cout << "Number of teams = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}