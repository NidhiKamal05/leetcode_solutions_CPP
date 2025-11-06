
// 2441. LARGEST POSITIVE INTEGER THAT EXISTS WITH ITS NEGATIVE

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

/** TWO POINTER APPROACH : T.C.=O(N LogN) and S.C.=O(1)**/
int findMaxK(vector<int>& nums) {
        sort(begin(nums), end(nums)) ;
        int i = 0, j = nums.size()-1 ;
        while(i < j) {
            if(-nums[i] > nums[j]) {
                ++i ;
            }
            else if(-nums[i] < nums[j]) {
                --j ;
            }
            else {
                return nums[j] ;
            }
        }
        return -1 ;
    }

/** BRUTE FORCE APPROACH : T.C.=O(N^2) and S.C.=O(1)**/
/*int findMaxK(vector<int>& nums) {
	sort(nums.rbegin(), nums.rend()) ;
    for(int num : nums) {
        if(num < 0) {
            return -1 ;
        }
        if(num > 0) {
            auto it = find(nums.begin(), nums.end(), ((-1)*num)) ;
            if(it != nums.end()) {
                return num ;
            }
        }
    }
    return -1 ;
}*/

int main() {
	vector<int> nums ;
	int e, l ;
	
	cout << endl ;
	cout << "  LARGEST POSITIVE INTEGER THAT EXISTS WITH ITS NEGATIVE " << endl ;
	cout << " ````````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    e = findMaxK(nums) ;
	
	cout << "Largest +ve integer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*void revSort(vector<int>& nums) {
	int n = nums.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(nums[i] < nums[j]) {
				swap(nums[i], nums[j]) ;
			}
		}
	}
}*/