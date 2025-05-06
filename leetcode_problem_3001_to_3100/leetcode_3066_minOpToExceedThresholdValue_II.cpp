
// 3066. MINIMUM OPERATIONS TO EXCEED THRESHOLD VALUE II

#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

int minOperations(vector<int>& nums, int k) {
    int minOp = 0 ;
    priority_queue<long, vector<long>, greater<long>> pq(nums.begin(), nums.end()) ;
    while(pq.top() < k) {
        long x = pq.top() ;
        pq.pop() ;
        long y = pq.top() ;
        pq.pop() ;
        pq.push((x*2)+y) ;
        ++minOp ;
    }
    return minOp ;
}
	
int main() {
	vector<int> nums ;
	int e, n, k ;
	
	cout << endl ;
	cout << "  MINIMUM OPERATIONS TO EXCEED THRESHOLD VALUE II " << endl ;
	cout << " =================================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	cout << endl ;
    e = minOperations(nums, k) ;
	
	cout << "Min Operation = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}