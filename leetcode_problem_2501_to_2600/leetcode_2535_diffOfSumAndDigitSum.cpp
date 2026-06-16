
// 2535. DIFFERENCE BETWEEN ELEMENT SUM AND DIGIT SUM OF AN ARRAY

/** T.C. - O(NLogM) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/solutions/8338074/c-solution-beats-8329-o1-space-by-nidhi_-tbgi/

/* JAVA */
// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/solutions/8338083/java-runtime-beats-9967-very-easy-soluti-xt7c/

#include<iostream>
#include<vector> 

using namespace std ;

int differenceOfSum(vector<int>& nums) {
    int sum = 0, digitSum = 0 ;
    for(int num : nums) {
        sum += num ;
        while(num) {
            digitSum += (num % 10) ;
            num /= 10 ;
        }
    }
    return abs(sum - digitSum) ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  DIFFERENCE BETWEEN ELEMENT SUM AND DIGIT SUM OF AN ARRAY " << endl ;
	cout << " ``````````````````````````````````````````````````````````" << endl ;
	
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
	
    e = differenceOfSum(nums) ;
	
	cout << "Subarray Sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




/*int differenceOfSum(vector<int>& nums) {
	int n = nums.size() ;
	int sum = 0 ;
	int digitSum = 0 ;
	for(int i=0; i<n; ++i) {
		int num = nums[i] ;
		sum += num ;
		while(num) {
			digitSum += (num%10) ;
			num /= 10 ;
		}
	}
	return abs(sum - digitSum) ;
}*/