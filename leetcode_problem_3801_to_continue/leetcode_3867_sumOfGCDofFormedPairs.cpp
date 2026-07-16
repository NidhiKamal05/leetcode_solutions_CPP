
// 3867. SUM OF GCD OF FORMED PAIRS

/** T.C. - O(NlogN) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/solutions/8401218/c-runtime-beats-9662-memory-beats-8710-b-eqeb/

/* JAVA */
// https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/solutions/8401237/java-solution-sorting-two-pointers-math-7xo7j/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    private int gcd(int num1, int num2) {
        while(num2 != 0) {
            int temp = num1 ;
            num1 = num2 ;
            num2 = temp % num2 ;
        }
        return num1 ;
    }
    public long gcdSum(int[] nums) {
        int mx = nums[0], n = nums.length ;
        int[] prefixGCD = new int[n] ;
        prefixGCD[0] = mx ;
        for(int i = 1; i < n; ++i) {
            mx = Math.max(mx, nums[i]) ;
            prefixGCD[i] = gcd(nums[i], mx) ;
        }
        Arrays.sort(prefixGCD) ;
        int i = 0, j = n - 1 ;
        long sum = 0 ;
        while(i < j) {
            sum += gcd(prefixGCD[i++], prefixGCD[j--]) ;
        }
        return sum ;
    }
}*/

long long gcdSum(vector<int>& nums) {
	int mx = nums[0], n = nums.size() ;
	vector<int> prefixGCD(n) ;
	prefixGCD[0] = nums[0] ;
	for(int i = 1; i < n; ++i) {
		mx = max(mx, nums[i]) ;
		prefixGCD[i] = __gcd(nums[i], mx) ;
	}
	sort(prefixGCD.begin(), prefixGCD.end()) ;
	int i = 0, j = n - 1 ;
	long long sum = 0 ;
	while(i < j) {
		sum += __gcd(prefixGCD[i++], prefixGCD[j--]) ;
	}
	return sum ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  SUM OF GCD OF FORMED PAIRS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array : " << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = gcdSum(nums) ;
	
	cout << endl ;
	cout << "Sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}