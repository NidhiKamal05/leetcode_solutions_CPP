
// 1636. SORT ARRAY BY INCREASING FREQUENCY

#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

vector<int> frequencySort(vector<int>& nums) {
    unordered_map<int, int> mp ;
    for(int num : nums) {
        mp[num]++ ;
    }
    priority_queue<pair<int,int>> pq ;
    for(auto entry : mp) {
        pq.push({-1*entry.second, entry.first}) ;
    }
    int i = 0 ;
    while(!pq.empty()) {
        auto [freq, e] = pq.top() ;
        pq.pop() ;
        freq *= -1 ;
        while(freq--) {
            nums[i++] = e ;
        }
    }
    return nums ;
}

int main() {
	vector<int> nums, ans ;
	int e, n ;
	
	cout << endl ;
	cout << "  SORT ARRAY BY INCREASING FREQUENCY " << endl ;
	cout << " ====================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    ans = frequencySort(nums) ;	
	
	cout << endl ;	
	cout << "After Sorting..." << endl ;
	cout << "[ " ;
	for(int& num : nums) {
		cout << num << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}