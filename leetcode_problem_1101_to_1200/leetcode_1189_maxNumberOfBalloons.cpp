
// 1189. MAXIMUM NUMBER OF BALLOONS

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/maximum-number-of-balloons/solutions/8351554/c-solution-runtime-beats-100-0-ms-by-nid-15wd/

/* JAVA */
// https://leetcode.com/problems/maximum-number-of-balloons/solutions/8351569/java-easy-solution-hash-map-math-by-nidh-r8uc/

#include<iostream>
#include<unordered_map>

using namespace std ;

int maxNumberOfBalloons(string text) {
	unordered_map<char, int> freq ;
    for(char& c : text) {
        if(c == 'b' || c == 'a' || c == 'l' || c == 'o' || c =='n') {
            freq[c]++ ;
        }
    }
    int ans = 10001 ;
    if(freq.size() == 5) {
        for(auto& f : freq) {
            int freqCnt = f.first == 'l' || f.first == 'o' ? f.second / 2 : f.second ;
            ans = min(ans, freqCnt) ;
        }
    }
    return ans == 10001 ? 0 : ans ;
}

int main() {
	string text ;
	int ans ;
	
	cout << endl ;
	cout << "  MAXIMUM NUMBER OF BALLOONS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string, text...." << endl ;
	cin >> text ;
	
	ans = maxNumberOfBalloons(text) ;
	
	cout << endl ;
	cout << "Maximum number of instances = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}