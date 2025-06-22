
// 2138. DIVIDE A STRING INTO GROUPS OF SIZE K

#include<iostream>
#include<vector>

using namespace std ;

vector<string> divideString(string s, int k, char fill) {
	vector<string> ans ;
	int n = s.length()%k ;
	if(n) {
		for(int i=0; i<k-n; ++i) {
			s += fill ;
		}
	}
	for(int i=0; i<s.length(); i+=k) {
		string str = s.substr(i, k) ;
		ans.push_back(str) ;
	}
	return ans ;
}

int main() {
	string s ;
	int k ;
	char fill ;
	vector<string> ans ;
	
	cout << endl ;
	cout << "  DIVIDE A STRING INTO GROUPS OF SIZE K " << endl ;
	cout << " ```````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	cout << endl ;
	cout << "Enter a character, fill = " ;
	cin >> fill ;
	
	ans = divideString(s, k, fill) ;
	
	cout << endl ;
	cout << "Answer...." << endl ;
	cout << "[ " ;
	for(string& s : ans) {
		cout << "\"" << s << "\" " ;
	}
	cout << "]" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}