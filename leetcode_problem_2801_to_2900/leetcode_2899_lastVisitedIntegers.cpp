
// 2899. LAST VISITED INTEGERS

#include<iostream>
#include<vector>

using namespace std ;

vector<int> lastVisitedIntegers(vector<int>& nums) {
    vector<int> ans, seen ;
    int k = 0 ;
    for(int& num : nums) {
        if(num != -1) {
            seen.insert(seen.begin(), num) ;
            k = 0 ;
        }
        else {
            ++k ;					
            if(k <= seen.size()) {
                ans.push_back(seen[k-1]) ;
            }
            else {
                ans.push_back(-1) ;
            }
        }
    }
    return ans ;
}

int main() {
	vector<int> nums, ans ;
	int l, e ;
	
	cout << endl ;
	cout << "  LAST VISITED INTEGERS " << endl ;
	cout << " ***********************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array 1...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = lastVisitedIntegers(nums) ;
	
	cout << endl ;
	cout << "Answer....." << endl ;
	for(int i=0; i<ans.size(); ++i){
		cout << " " << ans[i] << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*
vector<int> lastVisitedIntegers(vector<int>& nums) {
	vector<int> ans, seen ;
	int k = 0 ;
	for(int i=0; i<nums.size(); ++i) {
		k = 0 ;
		if(nums[i] > 0) {
			seen.insert(seen.begin(), nums[i]) ;
			continue ;
		}
		if(nums[i] == -1) {
			++k ;					
			if(k <= seen.size()) {
				ans.push_back(seen[k-1]) ;
			}
			else {
				ans.push_back(-1) ;
			}
			int j ;
			for(j=i+1; j<nums.size(); ++j) {
				if(nums[j] == -1) {
					++k ;
					if(k <= seen.size()) {
						ans.push_back(seen[k-1]) ;
					}
					else {
						ans.push_back(-1) ;
					}
				}
				else {
					break ;
				}
			}
			i = j-1 ;
		}
	}
	return ans ;
}
*/