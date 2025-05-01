
// 1528. SHUFFLE STRING

#include<iostream>
#include<vector>
#include<cstring>

using namespace std ;

//** JAVA SOLUTION **//
// class Solution {
    // public String restoreString(String s, int[] indices) {
        // char[] ch = new char[s.length()] ;
        // char[] string = s.toCharArray() ;
        // for(int i=0; i<s.length(); ++i)
            // ch[indices[i]] = string[i] ;	
        // String str = new String() ;
        // for(int i=0; i<ch.length; ++i)
            // str += ch[i] ;
        // return str ;
    // }
// }

string restoreString(string s, vector<int> & indices){
	vector<char> ch(s.length()) ;
	for(int i=0; i<s.length(); ++i)
		ch.at(indices.at(i)) = s.at(i) ;	
	string str ;
	for(int i=0; i<ch.size(); ++i)
		str.push_back(ch.at(i)) ;
	return str ;
}

int main(){
	string s, str ;
	vector<int> indices ;
	int e ;
	
	cout << endl ;
	cout << " SHUFFLE STRING " << endl ;
	cout << "~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter a string...." << endl ;
	cin >> s ;
	
	cout << endl << "Enter elements of the array...." << endl ;
	for(int i = 0; i<s.length(); ++i){
		cin >> e ;
		indices.push_back(e) ;
	}
	
	cout << endl ;	
	str = restoreString(s, indices) ;
	
	cout << "Shuffled string = " << str << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}