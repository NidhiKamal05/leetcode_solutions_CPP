
// 1807. EVALUATE THE BRACKET PAIRS OF A STRING

/** T.C. - O(N + M) & S.C. - O(M) **/

/* C++ */
// https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/solutions/8541151/c-solution-using-hash-map-string-by-nidh-tqfj/

/* JAVA */
// https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/solutions/8541167/java-solution-evaluate-bracket-pairs-on-ljleu/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

string evaluate(string s, vector<vector<string>>& knowledge) {
	unordered_map<string, string> mp ;
    for(vector<string> k : knowledge) {
        mp[k[0]] = k[1] ;
    }
    string st, t, ans ;
    for(char c : s) {
        if(c == '(') {
            st.push_back(c) ;
            continue ;
        }
        if(!st.empty()) {
            if(c == ')') {
                st.pop_back() ;
                if(mp.count(t)) {
                    ans += mp[t] ;
                }
                else {
                    ans += '?' ;
                }
                t = "" ;
                continue ;
            }
            if(st.back() == '(') {
                t += c ;
            }
        }
        else {
            ans += c ;
        }
    }
    return ans ;
}

int main() {
	string s, ans ;
	vector<vector<string>> knowledge ;
	
	cout << endl ;
	cout << "  EVALUATE THE BRACKET PAIRS OF A STRING " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	// TEST CASE - 1
	s = "(name)is(age)yearsold" ;
	knowledge = {{"name", "bob"}, {"age", "two"}} ;
	
	// TEST CASE - 2
	// s = "hi(name)" ;
	// knowledge = {{"a", "b"}} ;
	
	// TEST CASE - 3
	// s = "(a)(a)(a)aaa" ;
	// knowledge = {{"a", "yes"}} ;
	
	cout << endl ;
	cout << "s = \"" << s << "\"" << endl ;
	cout << "knowledge = { " ;
	for(vector<string> k : knowledge) {
		cout << "{\"" << k[0] << ",\"" << k[1] << "\"" << "} " ;
	}
	cout << "}" << endl ;
	
	ans = evaluate(s, knowledge) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}