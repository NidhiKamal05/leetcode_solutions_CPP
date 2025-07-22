
// 15. 3SUM

#include<iostream>
#include<vector>
#include<set>

using namespace std ;

void Sort(vector<int> & v)	{
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans ;
    int n = nums.size() ;
    set<vector<int>> st ;
	Sort(nums) ;
    // sort(nums.begin(), nums.end()) ;
    for(int i=0; i<n; ++i) {
        int j = i+1 ;
        int k = n-1 ;
        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k] ;
            if(sum < 0) {                    
                ++j ;
            }
            else if(sum > 0) {
                --k ;
            }
            else {
                st.insert({nums[i],nums[j],nums[k]}) ;
                ++j ;
                --k ;
            }
        }
    }
    for(auto t : st) {
        ans.push_back(t) ;
    }
    return ans ;
}

int main() {
	vector<int> nums ;
	vector<vector<int>> ans ;
	int e, n ;
	
	cout << endl ;
	cout << "  3SUM " << endl ;
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
	
    ans = threeSum(nums) ;	
	
	cout << endl ;	
	cout << "Result....\n[" ;
	for(int i=0; i<ans.size(); ++i) {
		cout << " [" << ans[i][0] << "," << ans[i][1] << "," << ans[i][2] << "] " ;
	}cout << "]" ;	
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}