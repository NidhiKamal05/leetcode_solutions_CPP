
// 1291. SEQUENTIAL DIGITS

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/sequential-digits/solutions/8394623/c-runtime-beats-100-0-ms-o1-solution-by-ulgx8/

/* JAVA */
// https://leetcode.com/problems/sequential-digits/solutions/8394631/java-o1-solution-runtime-0-ms-beats-100-m86dt/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

vector<int> sequentialDigits(int low, int high) {
    vector<int> ans ;
    for(int i = 1; i <= 9; ++i) {
        int num = i ;
        for(int j = i + 1; j <= 9; ++j) {
            num = num * 10 + j ;
            if(num > high) break ;
            if(num >= low && num <= high) {
                ans.push_back(num) ;
            }
        }
    }
    sort(ans.begin(), ans.end()) ;
    return ans ;
}

int main() {
	vector<int> res ;
	int low, high ;
	
	cout << endl ;
	cout << "  SEQUENTIAL DIGITS " << endl ;
	cout << " ```````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter range...." << endl ;
	cout << "low = " ;
	cin >> low ;
	cout << "high = " ;
	cin >> high ;
	
    res = sequentialDigits(low, high) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(int& r : res) {
		cout << r << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}