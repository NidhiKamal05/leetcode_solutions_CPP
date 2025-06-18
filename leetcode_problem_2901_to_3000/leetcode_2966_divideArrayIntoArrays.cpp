
// 2966. DIVIDE ARRAY INTO ARRAYS WITH MAX DIFFERENCE

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int>& v) {
	int n = v.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(v[j] < v[i]) {
				swap(v[i], v[j]) ;
			}
		}
	}
}

vector<vector<int>> divideArray(vector<int>& nums, int k) {
    vector<vector<int>> ans ;
    int n = nums.size() ;
    // sort(nums.begin(), nums.end()) ;
	Sort(nums) ;
    for(int i=0; i<n; i+=3) {
        if(nums[i+2]-nums[i] > k) {
            return {} ;
        }
        ans.push_back({nums[i], nums[i+1], nums[i+2]}) ;
    }
    return ans ;
}

int main(){
	vector<int> nums ;
	int e, n, k ;
	vector<vector<int>> ans ;
	
	cout << endl ;
	cout << "  DIVIDE ARRAY INTO ARRAYS WITH MAX DIFFERENCE " << endl ;
	cout << " ``````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<n; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = divideArray(nums, k) ;
	
	cout << endl ;
	cout << "Resultant array....." << endl ;
	cout << "[ " ;
	for(vector<int>& v : ans) {
		cout << "[ " ;
		for(int& num : v) {
			cout << num << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}