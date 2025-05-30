
// 3120. COUNT THE NUMBER OF SPECIAL CHARACTERS I

#include<iostream>
#include<unordered_set>

using namespace std ;

int numberOfSpecialChars(string word) {
    int cnt = 0 ;
    unordered_set<char> lowerSet ;
    unordered_set<char> upperSet ;
    for(char& c : word) {
        if(c >= 'a' && c <= 'z') {
            lowerSet.insert(c) ;
        }
        else {
            upperSet.insert(c) ;
        }
    }
    for(auto& c : lowerSet) {
        if(upperSet.count(toupper(c)))  {
            ++cnt ;
        }
    }
    return cnt ;
}

int main() {
	string word ;
	int count ;
	
	cout << endl ;
	cout << "  COUNT THE NUMBER OF SPECIAL CHARACTERS I " << endl ;
	cout << " ==========================================" << endl ;
	
	cout << endl ;
	cout << "Enter a word..." << endl ;
	cin >> word ;
	
	count = numberOfSpecialChars(word) ;
	
	cout << endl ;
	cout << "Count = " << count << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}