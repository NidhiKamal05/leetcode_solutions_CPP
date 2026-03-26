
// 1684. COUNT THE NUMBER OF CONSISTENT STRINGS

/** T.C. - O(M + N * K) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/count-the-number-of-consistent-strings/solutions/7695624/c-solution-easy-by-nidhi_kamal-9fc8/

/* JAVA */
// https://leetcode.com/problems/count-the-number-of-consistent-strings/solutions/7695653/java-by-nidhi_kamal-k0j4/

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

int countConsistentStrings(string allowed, vector<string>& words) {
    int cnt = 0 ;
    unordered_set<char> st ;
    for(char& c : allowed) {
        st.insert(c) ;
    }
    bool FLAG ;
    for(string& s : words) {
        FLAG = true ;
        for(char& c : s) {
			// if(!st.count(c)) {
            if(st.find(c) == st.end()) {
                FLAG = false ;
                break ;
            }
        }
        cnt += FLAG ? 1 : 0 ;
    }
    return cnt ;
}

int main() {
	vector<string> words ;
	string allowed, s ;
	int len, cnt ;
	
	cout << endl ;
	cout << "  COUNT THE NUMBER OF CONSISTENT STRINGS " << endl ;
	cout << " ````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string allowed : " ;
	cin >> allowed ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements(string) of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> s ;
		words.push_back(s) ;
	}
	
    cnt = countConsistentStrings(allowed, words) ;
	
	cout << endl ;
	cout << "Count = " << cnt << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}