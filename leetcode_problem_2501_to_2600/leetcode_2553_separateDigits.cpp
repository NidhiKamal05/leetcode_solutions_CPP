
// 2553. SEPARATE THE DIGITS IN AN ARRAY

#include<iostream>
#include<vector> 

using namespace std ;

vector<int> separateDigits(vector<int>& nums) {
	vector<int> ans ;
    for(int num : nums) {
        vector<int> digits ;
        while(num) {
            digits.push_back(num%10) ;
            num /= 10 ;
        }
        reverse(digits.begin(), digits.end()) ;
        for(int digit : digits) {
            ans.push_back(digit) ;
        }
    }
    return ans ;
}

int main() {
	vector<int> nums ;
	vector<int> digits ;
	int e, n ;
	
	cout << endl ;
	cout << "  SEPARATE THE DIGITS IN AN ARRAY " << endl ;
	cout << " `````````````````````````````````" << endl ;
	
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
	
    digits = separateDigits(nums) ;
	
	cout << "Digits array...." << endl ;
	for(int i=0; i<digits.size(); ++i) {
		cout << " " << digits[i] ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}