
// 2567. MINIMUM SCORE BY CHANGING TWO ELEMENTS

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-score-by-changing-two-elements/solutions/8618142/c-0-ms-runtime-beats-100-greedy-by-nidhi-on9a/

/* JAVA */
// https://leetcode.com/problems/minimum-score-by-changing-two-elements/solutions/8618145/java-greedy-solution-runtime-beats-9896-0adns/

#include<iostream>
#include<vector>

using namespace std ;

/** LOW SCORE CAN ALWAYS BE MADE 0, SO THE ANSWER EQUALS THE SMALLEST POSSIBLE HIGH SCORE **/

int minimizeSum(vector<int>& nums) {
	int mn1 = 1e9, mn2 = 1e9, mn3 = 1e9 ;
    int mx1 = 0, mx2 = 0, mx3 = 0 ;
    for(int num : nums) {
        if(num < mn1) {
            mn3 = mn2 ;
            mn2 = mn1 ;
            mn1 = num ;
        }
        else if(num < mn2) {
            mn3 = mn2 ;
            mn2 = num ;
        }
        else if(num < mn3) {
            mn3 = num ;
        }
        
        if(num > mx1) {
            mx3 = mx2 ;
            mx2 = mx1 ;
            mx1 = num ;
        }
        else if(num > mx2) {
            mx3 = mx2 ;
            mx2 = num ;
        }
        else if(num > mx3) {
            mx3 = num ;
        }
    }
    return min({mx3 - mn1, mx2 - mn2, mx1 - mn3}) ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  MINIMUM SCORE BY CHANGING TWO ELEMENTS " << endl ;
	cout << " ````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = minimizeSum(nums) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}