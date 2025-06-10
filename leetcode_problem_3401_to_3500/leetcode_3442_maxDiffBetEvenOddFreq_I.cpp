
// 3442. MAX DIFFERENCE BETWEEN EVEN AND ODD FREQUENCY I

#include<iostream>
#include<map>
#include<queue>

using namespace std ;

// *****BOTH WORKS***** //
/*int maxDifference(string s) {
    map<char, int> mp ;
    priority_queue<int, vector<int>, greater<int>> pqEven ;
    priority_queue<int> pqOdd ;
    for(char& c : s) {
        mp[c]++ ;
    }
    for(auto& m : mp) {
        if(m.second % 2 == 0) {
            pqEven.push(m.second) ;
        }
        else {
            pqOdd.push(m.second) ;
        }
    }
    return pqOdd.top() - pqEven.top() ;
}*/

int maxDifference(string s) {
    int maxOdd = INT_MIN ;
    int minEven = INT_MAX ;
    map<char, int> mp ;
    for(char& c : s) {
        mp[c]++ ;
    }
    for(auto& m : mp) {
        int el = m.second ;
        if(el % 2 == 0) {
            minEven = min(el, minEven) ;
        }
        else {
            maxOdd = max(el, maxOdd) ;
        }
    }
    return maxOdd - minEven ;
}

int main() {
	string s ;
	int maxDiff ;
	
	cout << endl ;
	cout << "  MAX DIFFERENCE BETWEEN EVEN AND ODD FREQUENCY I " << endl ;
	cout << " `````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string : " ;
	cin >> s ;
	
	cout << endl ;
    maxDiff = maxDifference(s) ;
	
	cout << "Maximum Difference = " << maxDiff << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}