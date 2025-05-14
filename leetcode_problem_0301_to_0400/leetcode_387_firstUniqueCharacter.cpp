
// 387. FIRST UNIQUE CHARACTER IN A STRING

#include<iostream>
#include<cstring>
#include<unordered_map>

using namespace std ;

int firstUniqChar(string s) {
	unordered_map<char, int> mp ;
	for(auto i : s)
		mp[i]++ ;
	for(int i=0; i<s.length(); ++i)
		if(mp[s[i]] == 1)
			return i ;
	return -1 ;
}

int main() {
	string s ;
	int index ;
	
	cout << endl ;
	cout << "  FIRST UNIQUE CHARACTER IN A STRING " << endl ;
	cout << " ````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string..... " << endl ;
	cin >> s ;
	
    index = firstUniqChar(s) ;
	
	cout << endl ;
	cout << "Index = " << index << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}