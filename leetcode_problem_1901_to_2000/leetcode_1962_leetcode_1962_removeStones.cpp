
// 1962. REMOVE STONES TO MINIMIZE THE TOTAL

#include<iostream>
#include<vector>
#include<queue>
#include<cmath>

using namespace std ;

int minStones(vector<int>& piles, int k) {
	priority_queue<int> pq ;
    for(int pile : piles) {
        pq.push(pile) ;
    }
    for(int i=0; i<k; ++i) {
        int t = pq.top() ;
        int n = floor((double)t/2) ;
        pq.pop() ;
        pq.push(t-n) ;
    }
    int stones = 0 ;
    while(!pq.empty()) {
        stones += pq.top() ;
        pq.pop() ;
    }
    return stones ;
}

int main() {
	vector<int> piles ;
	int l, k ;
	
	cout << endl ;
	cout << "  REMOVE STONES TO MINIMIZE THE TOTAL " << endl ;
	cout << " `````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> k ;
		piles.push_back(k) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	k = minStones(piles, k) ;
	
	cout << endl ;
	cout << "Minimum remaining stones = " << k << endl ;
	
	cout << endl ;
}


	// while(!pq.empty()) {
		// cout << " " << pq.top() << " " ;
		// pq.pop() ;
	// }