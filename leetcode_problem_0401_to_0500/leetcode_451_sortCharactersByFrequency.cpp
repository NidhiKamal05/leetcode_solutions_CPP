
// 451. SORT CHARACTERS BY FREQUENCY

/** T.C. - O(N + K logK) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/sort-characters-by-frequency/solutions/7648165/c-solution-beats-9530-by-nidhi_kamal-1fge/

/* JAVA */
// 

#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>

using namespace std ;

string frequencySort(string s) {
    unordered_map<char, int> mp ;
    for(char& ch : s) {
        mp[ch]++ ;
    }
    priority_queue<pair<int, char>> pq ;
    for(auto& m : mp) {
        pq.push({m.second, m.first}) ;
    }
    int i = 0 ;
    while(!pq.empty()) {
        char ch = pq.top().second ;
        int freq = pq.top().first ;
        pq.pop() ;
        while(freq--) {
            s[i++] = ch ;
        }
    }
    return s ;
}

int main() {
	string s, ans ;
	
	cout << endl ;
	cout << "  SORT CHARACTERS BY FREQUENCY " << endl ;
	cout << " ==============================" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	cin >> s ;
	
    ans = frequencySort(s) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}