
// 2197. REPLACE NON-COPRIME NUMBERS IN ARRAY

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

vector<int> replaceNonCoprimes(vector<int>& nums) {
    vector<int> result ;
    for(int num : nums) {
        while(!result.empty()) {
            int top = result.back() ;
            int gcd = __gcd(top, num) ;
            if(gcd == 1) {
                break ;
            }
            result.pop_back() ;
            // int lcm = (top * num) / gcd ;  // overflow because of product
            int lcm = (top / gcd) * num ;
            num = lcm ;
        }
        result.push_back(num) ;
    }
    return result ;
}

int main() {
	int n, e ;
	vector<int> nums, result ;
	
	cout << endl ;
	cout << "  REPLACE NON-COPRIME NUMBERS IN ARRAY " << endl ;
	cout << " **************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	result = replaceNonCoprimes(nums) ;
	
	cout << endl ;
	cout << "Result....." << endl ;
	cout << "[ " ;
	for(int num : result) {
		cout << num << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}