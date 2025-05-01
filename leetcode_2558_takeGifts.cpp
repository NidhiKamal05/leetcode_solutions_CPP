
// 2558. TAKE GIFTS FROM THE RICHEST PILE

#include<iostream>
#include<vector>
#include<queue>
#include<cmath>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public long pickGifts(int[] gifts, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder()) ;
        for(int i : gifts) {
            pq.add(i) ;
        }
        for(int i=0; i<k; ++i) {
            pq.add((int) Math.sqrt(pq.peek())) ;
            pq.poll() ;
        }
        long ans = 0 ;
        for(int el : pq) {
            ans += el ;
        }
        return ans ;
    }
}*/

long long pickGifts(vector<int>& gifts, int k) {
	priority_queue<int> pq ;
	for(int i : gifts) {
		pq.push(i) ;
	}
	for(int i=0; i<k; ++i) {
		pq.push(sqrt(pq.top())) ;
		pq.pop() ;
	}
	long long ans = 0 ;
	while(!pq.empty()) {
		ans += pq.top() ;
		pq.pop() ;
	}
	return ans ;
}

int main(){
	vector<int> gifts ;
	int l, k ;
	long long ans ;
	
	cout << endl ;
	cout << "  TAKE GIFTS FROM THE RICHEST PILE " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> k ;
		gifts.push_back(k) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = pickGifts(gifts, k) ;
	
	cout << endl ;
	cout << "Remaining gifts = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}