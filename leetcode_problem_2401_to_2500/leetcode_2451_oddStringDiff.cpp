
// 2451. ODD STRING DIFFERENCE

/** T.C. - O(M.N) & S.C. - O(M.N) **/

/* C++ */
// https://leetcode.com/problems/odd-string-difference/solutions/8403342/c-solution-tc-omn-sc-omn-hash-map-by-nid-83iq/

/* JAVA */
// https://leetcode.com/problems/odd-string-difference/solutions/8403332/java-solution-by-nidhi_kamal-f1cc/

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

string oddString(vector<string>& words) {
    map<vector<int>, vector<string>> mp ;
    // unordered_map<vector<int>, vector<string>> mp ;  WON'T WORK
    for(string& s : words) {
        int n = s.length() ;
        vector<int> diffArr ;
        for(int i = 1; i < n; ++i) {
            diffArr.push_back(s[i] - s[i - 1]) ;
        }
        mp[diffArr].push_back(s) ;
    }
    for(auto& m : mp) {
        if(m.second.size() == 1) {
            return m.second[0] ;
        }
    }
    return "" ;
}

int main() {
	int n ;
	string word ;
	vector<string> words ;
	
	cout << endl ;
	cout << "  ODD STRING DIFFERENCE " << endl ;
	cout << " -----------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter words in the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> word ;
		words.push_back(word) ;
	}
	
	word = oddString(words) ;
	
	cout << endl ;
	cout << "Odd String = " << word << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*
string oddString(vector<string>& words) {
	// map<vector<int>, string> mp_1 ;
	map<vector<int>, int> mp_2 ;
	map<vector<int>, vector<string>> mp ;
	for(string& word : words) {
		vector<int> diff ;
		for(int i=1; i<word.length(); ++i) {
			diff.push_back(word[i] - word[i-1]) ;
		}
		mp[diff].push_back(word) ;
		// mp_1[diff] = word ;
		mp_2[diff]++ ;
	}
	for(auto& u : mp_2) {
		if(u.second == 1) {
			// return mp_1[u.first] ;
			return mp[u.first] ;
		}
	}
	return "" ;
}
*/