
// 2048. NEXT GREATER NUMERICALLY BALANCED NUMBER

#include<iostream>
#include<unordered_map>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    private boolean isBalanced(int num) {
        Map<Integer, Integer> mp = new HashMap<>() ;
        while(num != 0) {
            mp.put(num % 10, mp.getOrDefault(num % 10, 0) + 1) ;
            num /= 10 ;
        }
        for(Map.Entry<Integer, Integer> m : mp.entrySet()) {
            if(m.getKey() != m.getValue()) {
                return false ;
            }
        }
        return true ;
    }
    public int nextBeautifulNumber(int n) {
        if(n >= 666666) {
            return 1224444 ;
        }
        ++n ;
        while(!isBalanced(n)) {
            ++n ;
        }
        return n ;
    }
}*/

bool isBalanced(int num) {
    unordered_map<int, int> mp ;
    while(num) {
        mp[num % 10]++ ;
        num /= 10 ;
    }
    for(auto& m : mp) {
        if(m.first != m.second) {
            return false ;
        }
    }
    return true ;
}

int nextBeautifulNumber(int n) {
    if(n >= 666666) {
        return 1224444 ;
    }
    ++n ;
    while(!isBalanced(n)) {
        ++n ;
    }
    return n ;		
}

int main() {
	int n, ans ;
	
	cout << endl ;
	cout << "  NEXT GREATER NUMERICALLY BALANCED NUMBER " << endl ;
	cout << " ------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	ans = nextBeautifulNumber(n) ;
	
	cout << endl ;
	cout << "Next greater balanced number = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}