
// 3232. FIND IF DIGIT GAME CAN BE WON

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/find-if-digit-game-can-be-won/solutions/8347284/c-0-ms-solution-runtime-beats-100-by-nid-uj3f/

/* JAVA */
// https://leetcode.com/problems/find-if-digit-game-can-be-won/solutions/8347287/java-solution-beats-9561-tc-on-sc-o1-by-9o1jo/

#include<iostream>
#include<vector>

using namespace std ;

bool canAliceWin(vector<int>& nums) {
	int singleDigitSum = 0 ;
	int doubleDigitSum = 0 ;
	for(int n : nums) {
		if(n < 10) {
			singleDigitSum += n ;
		}
		else {
			doubleDigitSum += n ;
		}
	}
	return !(singleDigitSum == doubleDigitSum) ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  FIND IF DIGIT GAME CAN BE WON " << endl ;
	cout << " ..............................." << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for (int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = canAliceWin(nums) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE....." << endl ;
	else
		cout << "FALSE....." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}