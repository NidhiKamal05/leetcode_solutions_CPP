
// 2530. MAXIMAL SCORE AFTER APPLYING K OPERATIONS

#include<iostream>
#include<vector>
#include<queue>
#include<cmath>

using namespace std ;

long long maxKelements(vector<int>& nums, int k) {
	priority_queue<int> pq ;
	for(int i : nums) {
		pq.push(i) ;
	}
	long long score = 0 ;
	for(int i=0; i<k; ++i) {
		score += pq.top() ;
		int n = ceil((double)pq.top()/3) ;
		pq.pop() ;
		pq.push(n) ;
	}
	return score ;
}

// BOTH WORKS //

/*long long maxKelements(vector<int>& nums, int k) {
	priority_queue<int> pq(nums.begin(), nums.end()) ;
    long long score = 0 ;
    for(int i=0; i<k; ++i) {
        int num = pq.top() ;
        pq.pop() ;
        score += num ;
        pq.push(ceil((double)num/3)) ;
    }
    return score ;
}*/

int main() {
	vector<int> nums ;
	int l, k ;
	long long score ;
	
	cout << endl ;
	cout << "  MAXIMAL SCORE AFTER APPLYING K OPERATIONS " << endl ;
	cout << " ```````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> k ;
		nums.push_back(k) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	score = maxKelements(nums, k) ;
	
	cout << endl ;
	cout << "Maximal Score After Applying " << k << " Operations = " << score << endl ;
	
	cout << endl ;
}


	// while(!pq.empty()) {
		// cout << " " << pq.top() << " " ;
		// pq.pop() ;
	// }