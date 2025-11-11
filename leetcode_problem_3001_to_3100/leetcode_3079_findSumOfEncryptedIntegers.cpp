
// 3079. FIND THE SUM OF ENCRYPTED INTEGERS

#include<iostream>
#include<vector>

using namespace std ;

int encrypt(int num) {
    int maxDigit = 0, cnt = 0 ;
    while(num) {
        maxDigit = max(maxDigit, num % 10) ;
        num /= 10 ;
        ++cnt ;
    }
    for(int i=0; i<cnt; ++i) {
        num = num * 10 + maxDigit ;
    }
    return num ;
}

int sumOfEncryptedInt(vector<int>& nums) {
    int sum = 0 ;
    for(int num : nums) {
        if(num > 9) {
            num = encrypt(num) ;
        }
        sum += num ;
    }
    return sum ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  FIND THE SUM OF ENCRYPTED INTEGERS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = sumOfEncryptedInt(nums) ;
	
	cout << endl ;
	cout << "Sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}