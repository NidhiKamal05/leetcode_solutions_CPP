
// 1410. HTML ENTITY PARSER

/** T.C. - O(N * M) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/html-entity-parser/solutions/8595052/c-solution-beats-9531-by-nidhi_kamal-qabk/

/* JAVA */
// https://leetcode.com/problems/html-entity-parser/solutions/8595016/java-solution-by-nidhi_kamal-wcbh/

#include<iostream>
#include<map>

using namespace std ;

string entityParser(string text) {
    map<string, string> mp ;
    mp["&quot;"] =  "\"" ;
    mp["&apos;"] =  "'" ;
    mp["&gt;"] =  ">" ;
    mp["&lt;"] =  "<" ;
    mp["&frasl;"] =  "/" ;
	
    for(auto e : mp) {
		string key = e.first, value = e.second ;
		size_t start = 0 ;
		while((start = text.find(key, start)) != string::npos) {
			text.replace(start, key.length(), value) ;
			start += value.length() ;
		}
    }
	
    size_t start = 0 ;
	while((start = text.find("&amp;", start)) != string::npos) {
		text.replace(start, 5, "&") ;
		++start ;
	}     
	
    return text ;
}

int main() {
	string text, ans ;
	
	cout << endl ;
	cout << "  HTML ENTITY PARSER " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	// text = "&amp; is an HTML entity but &ambassador; is not." ;
	// text = "and I quote: &quot;...&quot;" ;
	text = "&amp;quot;&amp;apos;&amp;amp;&amp;gt;&amp;lt;&amp;frasl;" ;
	
	ans = entityParser(text) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}