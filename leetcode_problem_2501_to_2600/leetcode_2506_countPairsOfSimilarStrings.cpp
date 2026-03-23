
// 2506. COUNT PAIRS OF SIMILAR STRINGS

/** T.C. - O(N^2) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/count-pairs-of-similar-strings/solutions/7684082/c-solution-by-nidhi_kamal-x8o0/

/* JAVA */
// https://leetcode.com/problems/count-pairs-of-similar-strings/solutions/7684178/java-by-nidhi_kamal-00ja/

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

int similarPairs(vector<string>& words) {
	int cnt = 0, n = words.size() ;
    bool FOUND_1, FOUND_2 ;
    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            FOUND_1 = true ;
            for(char& c : words[i]) {
                if(words[j].find(c) == string::npos) {
                    FOUND_1 = false ;
                    break ;
                }
            }
            FOUND_2 = true ;
            for(char& c : words[j]) {
                if(words[i].find(c) == string::npos) {
                    FOUND_2 = false ;
                    break ;
                }
            }
            cnt += FOUND_1 && FOUND_2 ? 1 : 0 ;
        }
    }
    return cnt ;
}

/*int similarPairs(vector<string>& words) {
    int cnt = 0, n = words.size() ;
    unordered_set<char> set_1, set_2 ;
    for(int i = 0; i < n - 1; ++i) {
        set_1.clear() ;
        for(char& c : words[i]) {
            set_1.insert(c) ;
        }
        for(int j = i + 1; j < n; ++j) {
            set_2.clear() ;
            for(char& c : words[j]) {
                set_2.insert(c) ;
            }
            cnt += set_1 == set_2 ? 1 : 0 ;
        }
    }
    return cnt ;
}*/

int main() {
	string word ;
	vector<string> words ;
	int n ;
	
	cout << endl ;
	cout << "  COUNT PAIRS OF SIMILAR STRINGS " << endl ;
	cout << " ********************************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements(string) of the array...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> word ;
		words.push_back(word) ;
	}
	
	n = similarPairs(words) ;
	
	cout << endl ;
	cout << "Pairs = " << n << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




/*int similarPairs(vector<string>& words) {
	// vector<set<char>> v ;
	// for(string word : words) {
		// set<char> s ;
		// for(char ch : word) {
			// s.insert(ch) ;
		// }
		// v.push_back(s) ;
	// }
	constexpr int c = 3+3 ;
	cout << c << endl ;
	return c ;
}*/