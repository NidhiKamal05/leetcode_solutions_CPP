
// 2364. COUNT NUMBER OF BAD PAIRS

#include<iostream>
#include<vector>

using namespace std ;

long long countBadPairs(vector<int>& nums) {
	int n = nums.size() ;
    long long goodPairs = 0 ;
    unordered_map<int, int> ump ;
    for(int i=0; i<n; ++i) {
        goodPairs += ump[nums[i]-i] ;
        ump[nums[i]-i]++ ;
    }        
    long long totalPair = (((long long)n)*(n-1)) / 2 ;
    return totalPair-goodPairs ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	long long ans ;
	
	cout << endl ;
	cout << "  COUNT NUMBER OF BAD PAIRS " << endl ;
	cout << " ```````````````````````````" << endl ;
	
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
    ans = countBadPairs(nums) ;
	
	cout << "Bad pairs = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}