
// 3300. MINIMUM ELEMENT AFTER REPLACEMENT WITH DIGIT SUM

#include<iostream>
#include<vector> 

using namespace std ;

int digitSum(int num) {
    int sum = 0 ;
    while(num) {
        sum += (num % 10) ;
        num /= 10 ;
    }
    return sum ;
}

int minElement(vector<int>& nums) {
    int minEle = INT_MAX ;
    for(int num : nums) {
        minEle = min(digitSum(num), minEle) ;
    }
    return minEle ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  MINIMUM ELEMENT AFTER REPLACEMENT WITH DIGIT SUM " << endl ;
	cout << " ``````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = minElement(nums) ;
	
	cout << endl ;
	cout << "Min element = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}