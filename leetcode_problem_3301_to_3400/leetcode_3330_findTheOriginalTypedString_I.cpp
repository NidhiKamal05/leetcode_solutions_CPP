
// 3330. FIND THE ORIGINAL TYPED STRING I

#include<iostream>

using namespace std ;

int possibleStringCount(string word) {
	int n = word.length(), ans = 1 ;
	for(int i=1; i<n; ++i) {
		if(word[i-1] == word[i]) {
			++ans ;
		}
	}
	return ans ;
}

int main() {
	int ans ;
	string word ;
	
	cout << endl ;
	cout << "  FIND THE ORIGINAL TYPED STRING I " << endl ;
	cout << " **********************************" << endl ;
	
	cout << endl ;
	cout << "Enter a word, word = " ;
	cin >> word ;
	
	ans = possibleStringCount(word) ;
	
	cout << endl ;
	cout << "Original typed string = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}