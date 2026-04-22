
// 2452. WORDS WITHIN TWO EDITS OF DICTIONARY

/** T.C. - O(Q * M * N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/words-within-two-edits-of-dictionary/solutions/8053810/c-solution-brute-force-approach-easy-by-bdept/

/* JAVA */
// https://leetcode.com/problems/words-within-two-edits-of-dictionary/solutions/8054100/java-solution-beats-9926-by-nidhi_kamal-e36i/

#include<iostream>
#include<vector>

using namespace std ;

vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
    vector<string> ans ;
    for(string& q : queries) {
        for(string& d : dictionary) {
            int cnt = 0 ;
            for(int i = 0; i < d.length(); ++i) {
                if(q[i] != d[i]) {
                    ++cnt ;
                }
            }
            if(cnt < 3) {
                ans.push_back(q) ;
                break ;
            }
        }
    }
    return ans ;
}

int main() {
	vector<string> queries, dictionary, ans ;
	string word ;
	int n ;
	
	cout << endl ;
	cout << "  WORDS WITHIN TWO EDITS OF DICTIONARY " << endl ;
	cout << " ======================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, queries : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter words in the array, queries....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> word ;
		queries.push_back(word) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array, dictionary : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter words in the array, dictionary....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> word ;
		dictionary.push_back(word) ;
	}
	
    ans = twoEditWords(queries, dictionary) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(string& r : ans) {
		cout << "\"" << r << "\"" << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}