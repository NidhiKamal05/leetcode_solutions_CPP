
// 1046. LAST STONE WEIGHT

#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

int lastStoneWeight(vector<int>& stones) {
	priority_queue<int> pq ;
	for(int stone : stones) {
		pq.push(stone) ;
	}
	while(pq.size() > 1) {
		int a = pq.top() ;
		pq.pop() ;
		int b = pq.top() ;
		pq.pop() ;
		if(a != b) {
			pq.push(a-b) ;
		}
	}
	return pq.empty() ? 0 : pq.top() ;
}

int main(){
	vector<int> stones ;
	int l, k ;
	
	cout << endl ;
	cout << "  LAST STONE WEIGHT " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> k ;
		stones.push_back(k) ;
	}
	
	k = lastStoneWeight(stones) ;
	
	cout << endl ;
	cout << "Last stone weight = " << k << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}