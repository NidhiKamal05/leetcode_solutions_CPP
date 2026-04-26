
// 2000. REVERSE PREFIX OF WORD

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/reverse-prefix-of-word/solutions/8100011/c-0-ms-runtime-beats-100-on-time-o1-spac-j22y/

/* JAVA */
// https://leetcode.com/problems/reverse-prefix-of-word/solutions/8100063/java-solution-1-ms-easy-by-nidhi_kamal-7iqg/

#include<iostream>
#include<algorithm>

using namespace std ;

string reversePrefix(string word, char ch) {
	int chIndex = word.find(ch) ;
	reverse(word.begin(), word.begin() + chIndex + 1) ;
	return word ;
}

/*string reversePrefix(string word, char ch) {
	int i = 0, j = word.find(ch) ;
	while(i <= j) {
		swap(word[i++], word[j--]) ;
	}
	return word ;
}*/

int main(){
	string word, rev ;
	char ch ;
	
	cout << endl ;
	cout << "  REVERSE PREFIX OF WORD " << endl ;
	cout << " ````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a word : " ;
	cin >> word ;
	
	cout << endl ;
	cout << "Enter a character : " ;
	cin >> ch ;
	
    rev = reversePrefix(word, ch) ;
	
	cout << endl ;	
	cout << "Reverse = " << rev << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}