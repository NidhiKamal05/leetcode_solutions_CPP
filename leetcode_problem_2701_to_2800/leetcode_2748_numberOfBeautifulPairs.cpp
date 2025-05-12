
// 2748. NUMBER OF BEAUTIFUL PAIRS

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int countBeautifulPairs(vector<int>& nums) {
	int n = nums.size() ;
	int cnt = 0 ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			int firstDigit = nums[i] ;
			while(firstDigit >= 10) {
				firstDigit /= 10 ;
			}
			int lastDigit = nums[j]%10 ;
			if(__gcd(firstDigit, lastDigit) == 1) {
				++cnt ;
			}
		}
	}
	return cnt ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  NUMBER OF BEAUTIFUL PAIRS " << endl ;
	cout << " ---------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = countBeautifulPairs(nums) ;
	
	cout << endl ;
	cout << "Number of beautiful pairs = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}