
// 2769. FIND THE MAXIMUM ACHIEVABLE NUMBER

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/find-the-maximum-achievable-number/solutions/8620019/c-solution-beats-9928-by-nidhi_kamal-bs7t/

/* JAVA */
// https://leetcode.com/problems/find-the-maximum-achievable-number/solutions/8620006/c-1-liner-solution-o1-time-by-nidhi_kama-zc56/

#include<iostream>

using namespace std ;

/*
Case 1: num + t = x + t => x = num
Case 2: num - t = x - t => x = num
Case 3: num - t = x + t = > x = num - 2t
Case 4: num + t = x - t = > x = num + 2t

Hence, Case 4 gives the maximum value of x
Therefore, return num + (2 * t)
*/

int theMaximumAchievableX(int num, int t) {
    return num + (2 * t) ;
}

int main(){
	int num, t, maxNum ;
	
	cout << endl ;
	cout << "  FIND THE MAXIMUM ACHIEVABLE NUMBER " << endl ;
	cout << " ````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, num = " ;
	cin >> num ;
	
	cout << endl ;
	cout << "Enter an integer, t = " ;
	cin >> t ;
	
	cout << endl ;
    maxNum = theMaximumAchievableX(num, t) ;
	
	cout << "Maximum Achievable Number = " << maxNum << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}