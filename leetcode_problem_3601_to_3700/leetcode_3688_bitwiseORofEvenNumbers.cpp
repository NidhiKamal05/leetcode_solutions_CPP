
// 3688. BITWISE OR OF EVEN NUMBERS IN AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

int evenNumberBitwiseORs(vector<int>& nums) {
    int bitwiseOR = 0 ;
    for(int num : nums) {
        if(num % 2 == 0) {
            bitwiseOR |= num ;
        }
    }
    return bitwiseOR ;
}

int main() {
	int n, e ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  BITWISE OR OF EVEN NUMBERS IN AN ARRAY " << endl ;
	cout << " ****************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = evenNumberBitwiseORs(nums) ;
	
	cout << endl ;
	cout << "Bitwise OR of even numbers = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}