
// 877. STONE GAME

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/stone-game/solutions/8436398/c-0-ms-runtime-beats-100-o1-solution-by-uklqb/

/* JAVA */
// https://leetcode.com/problems/stone-game/solutions/8436416/java-runtime-beats-100-memory-beats-9535-u3rt/

#include<iostream>
#include<vector>

using namespace std ;

bool stoneGame(vector<int>& piles) {
	return true ;
}

int main() {
	int n, e ;
	vector<int> piles ;
	bool ans ;
	
	cout << endl ;
	cout << "  STONE GAME " << endl ;
	cout << " ^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array(even number), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		piles.push_back(e) ;
	}
	
	ans = stoneGame(piles) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}