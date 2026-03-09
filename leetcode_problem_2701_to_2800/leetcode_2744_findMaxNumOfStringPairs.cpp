
// 2744. FIND MAXIMUM NUMBER OF STRING PAIRS

/* C++ */
// https://leetcode.com/problems/find-maximum-number-of-string-pairs/solutions/7637351/c-solution-very-easy-simple-hash-map-by-6e6jl/
// https://leetcode.com/problems/find-maximum-number-of-string-pairs/solutions/7637362/c-0-ms-runtime-beats-100-by-nidhi_kamal-w5gp/

/* JAVA */
// https://leetcode.com/problems/find-maximum-number-of-string-pairs/solutions/7637370/java-solution-beats-8609-by-nidhi_kamal-lxxb/

#include<iostream>
#include<vector>
#include<set>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int maximumNumberOfStringPairs(String[] words) {
        int n = words.length, pairs = 0 ;
        Set<String> s = new HashSet<>() ;
        s.add(words[0]) ;
        for(int i=1; i<n; ++i) {
            StringBuilder rev = new StringBuilder() ;
            rev.append(words[i].charAt(1)) ;
            rev.append(words[i].charAt(0)) ;
            if(s.contains(rev.toString())) {
                ++pairs ;
            }
            else {
                s.add(words[i]) ;
            }
        }
        return pairs ;
    }
}*/

/*class Solution {
    public int maximumNumberOfStringPairs(String[] words) {
        int n = words.length, pairs = 0 ;
        for(int i=0; i<n-1; ++i) {
            for(int j=i+1; j<n; ++j) {
                String a = new String(words[i]) ;
                String b = new String(words[j]) ;
                if(a.charAt(0) == b.charAt(1) && a.charAt(1) == b.charAt(0)) {
                    ++pairs ;
                }
            }
        }
        return pairs ;
    }
}*/

/** // BRUTE FORCE // **/
/*int maximumNumberOfStringPairs(vector<string>& words) {
    int n = words.size(), pairs = 0 ;
    for(int i=0; i<n-1; ++i) {
        for(int j=i+1; j<n; ++j) {
            if(words[i][0] == words[j][1] && words[i][1] == words[j][0]) {
                ++pairs ;
            }
        }
    }
    return pairs ;
}*/

int maximumNumberOfStringPairs(vector<string>& words) {
    int n = words.size(), pairs = 0 ;
    set<string> s = {words[0]} ;
    for(int i=1; i<n; ++i) {
        string rev ;
        rev += words[i][1] ;
        rev += words[i][0] ;
        if(s.find(rev) != s.end()) {
            ++pairs ;
        }
        else {
            s.insert(words[i]) ;
        }
    }
    return pairs ;
}

int main() {
	int n ;
	string s ;
	vector<string> words ;
	
	cout << endl ;
	cout << "  FIND MAXIMUM NUMBER OF STRING PAIRS " << endl ;
	cout << " =====================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> s ;
		words.push_back(s) ;
	}
	
	n = maximumNumberOfStringPairs(words) ;
	
	cout << endl ;
	cout << "Maximum string pairs = " << n << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}