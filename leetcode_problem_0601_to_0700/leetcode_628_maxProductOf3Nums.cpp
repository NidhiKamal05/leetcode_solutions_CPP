
// 628. MAXIMUM PRODUCT OF THREE NUMBERS

#include<iostream>
#include<vector>
#include<cmath>

using namespace std ;

int maximumProduct(vector<int>& nums) {
    int n = nums.size() ;
    int maxProduct1 = 1 ;
    int maxProduct2 = 1 ;        
    sort(nums.begin(), nums.end()) ;
    maxProduct1 = nums[n-1]*nums[n-2]*nums[n-3] ;
    maxProduct2 = nums[n-1]*nums[0]*nums[1] ;
    return max(maxProduct1, maxProduct2) ;
}

int main()
{
	vector<int> nums ;	
	int e, l ;
	
	cout << endl ;
	cout << "  MAXIMUM PRODUCT OF THREE NUMBERS " << endl ;
	cout << " **********************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	l = maximumProduct(nums) ;
	
	cout << endl ;
	cout << "Maximum Product of three numbers = " << l << endl ;
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*int maximumProduct(vector<int>& nums) {
	int maxProduct = 1 ;
	int num = INT_MIN ;
	int index ;
	for(int i=0; i<nums.size(); ++i) {
		index = i ;
		if(abs(num) < abs(nums[i])) {
			num = nums[i] ;
		}
	}
	maxProduct *= num ;
	nums.erase(nums.begin() + index) ;
	num = INT_MIN ;
	for(int i=0; i<nums.size(); ++i) {
		index = i ;
		if(abs(num) < abs(nums[i])) {
			num = nums[i] ;
		}
	}
	maxProduct *= num ;
	nums.erase(nums.begin() + index) ;
	num = INT_MIN ;
	for(int i=0; i<nums.size(); ++i) {
		index = i ;
		if(abs(num) < abs(nums[i])) {
			num = nums[i] ;
		}
	}
	maxProduct *= num ;
	nums.erase(nums.begin() + index) ;
	return maxProduct ;
}*/

/*void rSort(vector<int> & v) {
	for(int i=0; i<v.size()-1; ++i)	{
		for(int j=v.size()-1; j>i; --j) {
			if(v.at(j) > v.at(j-1)) {
				swap(v[j], v[j-1]) ;
			}
		}
	}
}
int maximumProduct(vector<int> & nums) {
	for(int num : nums) {
		if(num < 0) {
		`	num *= (-1) ;
		}
	}
	rSort(nums) ;
	// sort(nums.rbegin(), nums.rend()) ;
	return nums[0]*nums[1]*nums[2] ;
}*/

/*int maximumProduct(vector<int> & nums) {
	int n = 1 ;
	if(nums.size() == 3) {
		for(int i=0; i<nums.size(); ++i) {
			n *= nums.at(i) ;
		}
	}
	else {
	    vector<int> t ;
		int c=0, e ;
        for(int i=0; i<nums.size(); ++i) {
			if(nums.at(i) < 0) {
				e = (nums.at(i)*(-1)) ;
				t.push_back(e) ;
				++c ;
			}
			else {
				t.push_back(nums.at(i)) ;
			}
        }
        Sort(t) ;
        // sort(nums.begin(), nums.end()) ;
        for(int i=t.size()-1; i>t.size()-4; --i) {
        	n *= t.at(i) ;
        }
		if(c%2 != 0) {
	        n*=(-1) ;
        }
    }
	return n ;
}*/

        // Sort(nums) ;
	    // sort(nums.begin(), nums.end()) ;
	    // for(int i=nums.size()-1; i>nums.size()-4; --i)
	    // {
	    	// n *= nums.at(i) ;
	    // }