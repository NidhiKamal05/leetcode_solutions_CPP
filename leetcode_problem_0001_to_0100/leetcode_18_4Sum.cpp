
// 18. 4SUM

/** T.C. - O(N^3) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/4sum/solutions/8439062/c-4-sum-solution-sorting-two-pointers-by-dxo0/

/* JAVA */
// https://leetcode.com/problems/4sum/solutions/8439084/java-solution-beats-9045-two-pointers-so-1law/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

/*void Sort(vector<int> & v)	{
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}*/

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans ;
    int n = nums.size() ;
    sort(nums.begin(), nums.end()) ;
    for(int a = 0; a < n; ++a) {
        if(a > 0 && nums[a] == nums[a - 1]) {
            continue ;
        }
        for(int b = a+1; b < n; ++b) {
            if(b > a+1 && nums[b] == nums[b - 1]) {
                continue ;
            }
            int c = b + 1 ;
            int d = n - 1 ;
            while(c < d) {
                // long long sum = 1LL * nums[a] + nums[b] + nums[c] + nums[d] ;
                long long sum = (long long)nums[a] + nums[b] + nums[c] + nums[d] ;
                if(sum < target) {                    
                    ++c ;
                }
                else if(sum > target) {
                    --d ;
                }
                else {
                    ans.push_back({nums[a],nums[b],nums[c],nums[d]}) ;
                    ++c ;
                    --d ;
                    while (c < d && nums[c] == nums[c - 1]) {
                        ++c ;
                    }
                    while (c < d && nums[d] == nums[d + 1]) {
                        --d ;
                    }
                }
            }
        }
    }
    return ans ;
}
	
int main() {
	vector<int> nums ;
	vector<vector<int>> ans ;
	int e, n, target ;
	
	cout << endl ;
	cout << "  4SUM " << endl ;
	cout << " ~~~~~~" << endl ;
	
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
	cout << "Enter target : " ;
	cin >> target ;
	
    ans = fourSum(nums, target) ;	
	
	cout << endl ;	
	cout << "Result....\n[" ;
	for(int i=0; i<ans.size(); ++i) {
		cout << " [" << ans[i][0] << "," << ans[i][1] << "," << ans[i][2] << "," << ans[i][3] << "] " ;
	}cout << "]" ;	
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}