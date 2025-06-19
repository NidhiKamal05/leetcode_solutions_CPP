
// 2294. PARTITION ARRAY SUCH THAT MAXIMUM DIFFERENCE IS K

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int>& v) {
	int n = v.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(v[i] > v[j]) {
				swap(v[i], v[j]) ;
			}
		}
	}
}

int partitionArray(vector<int>& nums, int k) {
	Sort(nums) ;
    // sort(nums.begin(), nums.end()) ;
    int ans = 0, x = nums[0] ;
    for(int num : nums) {
        if(num-x > k) {
            ++ans ;
            x = num ;
        }
    }
    return ++ans ;
}

int main() {
	vector<int> nums ;
	int n, e, k ;
	
	cout << endl ;
	cout << "  PARTITION ARRAY SUCH THAT MAXIMUM DIFFERENCE IS K " << endl ;
	cout << " ---------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	e = partitionArray(nums, k) ;
	
	cout << endl ;
	cout << "Minimum Subsequences = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}