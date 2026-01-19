
// 14. LONGEST COMMON PREFIX

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

string longestCommonPrefix(vector<string> & strs) {
	string ans = "" ;
    sort(strs.begin(), strs.end()) ;
    string s1 = strs[0], s2 = strs[strs.size()-1] ;
    int i = 0 ;
    while(i < s1.length() && i < s2.length()) {
        if(s1[i] != s2[i]) {
            return ans ;
        }
        ans += s1[i++] ;
    }
    return ans ;
}

int main() {
	vector<string> strs ;
	string s ;
	int l ;
	
	cout << endl ;
	cout << "  LONGEST COMMON PREFIX  " << endl ;
	cout << " ------***********------ " << endl ;
	
	cout << endl ;
	cout << "Enter length..... " << endl ;
	cout << "l = " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter strings..... " << endl ;
	for(int i=0; i<l; ++i) {
		cin >> s ;
		strs.push_back(s) ;
	}
	
	s = longestCommonPrefix(strs) ;
	
	cout << endl ;
	
	cout << "Longest Common Prefix = " << s << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}