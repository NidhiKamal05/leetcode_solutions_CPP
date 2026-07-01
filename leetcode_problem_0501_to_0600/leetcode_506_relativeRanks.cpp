
// 506. RELATIVE RANKS

/** T.C. - O(N LogN) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/relative-ranks/solutions/6384773/c-runtime-beats-8482-memory-beats-8993-b-17hp/

/* JAVA */
// https://leetcode.com/problems/relative-ranks/solutions/8369832/java-solution-runtime-beats-9426-by-nidh-ozw7/

#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

vector<string> findRelativeRanks(vector<int>& score) {
    int n = score.size() ;
    vector<string> ranks(n) ;
    priority_queue<pair<int, int>> pq ;
    for(int i = 0; i < n; ++i) {
        pq.push({score[i],i}) ;
    }
    int index ;
    int pos = 1 ;
    while(!pq.empty()) {
        index = pq.top().second ;
        pq.pop() ;
        if(pos == 1) {
            ranks[index] = "Gold Medal" ;
        }
        else if(pos == 2) {
            ranks[index] = "Silver Medal" ;
        }
        else if(pos == 3) {
            ranks[index] = "Bronze Medal" ;
        }
        else {
            ranks[index] = to_string(pos) ;
        }
        ++pos ;
    }
    return ranks ;
}

int main() {
	vector<int> score{};
	vector<string> ranks{};
	int len, e;
	
	cout << endl ;
	cout << "  RELATIVE RANKS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++) {
		cin >> e ;
		score.push_back(e) ;
	}
	
    ranks = findRelativeRanks(score) ;
	
    for(int i=0; i<ranks.size(); i++)
		cout << " " << ranks.at(i) << " " ;
		
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}