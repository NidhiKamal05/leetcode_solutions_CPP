
// 3264. FIND ARRAY STATE AFTER K MULTIPLICATION OPERATIONS I

#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
	int n = nums.size() ;
	for(int i=0; i<k; ++i) {
		int m = *min_element(nums.begin(), nums.end()) ;
		for(int j=0; j<n; ++j) {
			if(nums.at(j) == m) {
				nums.at(j) *= multiplier ;
				break ;				
			}
		}
	}
	return nums ;
}

/*vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
	int n = nums.size() ;
	priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end()) ;
	for(int i=0; i<k; ++i) {
		int m = pq.top() ;
		pq.push(m *= multiplier) ;
		pq.pop();
	}
	vector<int> ans ;
	while(!pq.empty()) {
		ans.push_back(pq.top()) ;
		pq.pop() ;
	}
	return ans ;
}*/

int main()
{
	vector<int> nums, res ;
	int len, k, multiplier ;
	
	cout << endl ;
	cout << "  FIND ARRAY STATE AFTER K MULTIPLICATION OPERATIONS I " << endl ;
	cout << " ``````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array......... " << endl ;
	for(int j=0; j<len; ++j){
		cin >> k ;
		nums.push_back(k) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	cout << endl ;
	cout << "Enter an integer, multiplier = " ;
	cin >> multiplier ;
	
    res = getFinalState(nums, k, multiplier) ;
	
	for(int i=0; i<len; ++i)
		cout << " " << res.at(i) << " " ;
	 	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}