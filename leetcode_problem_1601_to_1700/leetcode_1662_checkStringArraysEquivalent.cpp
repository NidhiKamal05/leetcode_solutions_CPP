
// 1662. CHECK IF TWO STRING ARRAYS ARE EQUIVALENT

#include<iostream>
#include<vector>
#include<cstring>

using namespace std ;

//** SOL-1 **//
/*class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1, s2 ;
        for(string& word : word1) {
            s1.append(word) ;
        }
        for(string& word : word2) {
            s2.append(word) ;
        }
        return s1 == s2 ;
    }
};*/

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
	string s1, s2 ;
	for(int i=0; i<word1.size(); ++i) {
		s1.append(word1[i]) ;
	}
	for(int i=0; i<word2.size(); ++i) {
		s2.append(word2[i]) ;
	}
	return s1 == s2 ;
}

int main() {
	string word ;
	vector<string> word1 ;
	vector<string> word2 ;
	int l ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF TWO STRING ARRAYS ARE EQUIVALENT " << endl ;
	cout << " ```````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array1 : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array1...... " << endl ;
	for(int i=0; i<l; ++i) {
		cin >> word ;
		word1.push_back(word) ;
	}
	
	cout << endl ;
	cout << "Enter length of the array2 : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array2...... " << endl ;
	for(int i=0; i<l; ++i) {
		cin >> word ;
		word2.push_back(word) ;
	}
	
    ans = arrayStringsAreEqual(word1, word2) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE....." << endl ;
	else
		cout << "FALSE....." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}