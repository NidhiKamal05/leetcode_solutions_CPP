
// 1390. FOUR DIVISORS

#include<iostream>
#include<vector>

using namespace std ;

int getDivisorsSum(int num) {
    int cnt = 0, sum = 0 ;
    for(int i=1; i*i<=num; ++i) {
        if(num % i == 0) {
            ++cnt ;
            sum += i ;
            if((num / i) != i) {
                ++cnt ;
                sum += (num / i) ;
            }
        }
    }
    return cnt == 4 ? sum : 0 ;
}

int sumFourDivisors(vector<int>& nums) {
    int totalSum = 0 ;
    for(int& num : nums) {
        totalSum += getDivisorsSum(num) ;
    }
    return totalSum ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  FOUR DIVISORS " << endl ;
	cout << " ~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = sumFourDivisors(nums) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}