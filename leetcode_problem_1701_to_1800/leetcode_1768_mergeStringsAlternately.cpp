
// 1768. MERGE STRINGS ALTERNATELY

#include<iostream>
#include<cstring>

using namespace std ;

string mergeAlternately(string word1, string word2){
	string s ;
	int i=0 ;
	int j=0 ;
	while((i!=word1.length()) || (j!=word2.length())){
		if(i == word1.length()){
			s.push_back(word2.at(j)) ;
			++j ;
		}
		else if(j == word2.length()){
			s.push_back(word1.at(i)) ;
			++i ;
		}
		else{
		    s.push_back(word1.at(i)) ;
		    s.push_back(word2.at(j)) ;
		    ++i ;
		    ++j ;
		}
	}
	return s ;
}

int main()
{
	string word1, word2, s ;
	
	cout << endl ;
	cout << "  MERGE STRINGS ALTERNATELY  " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	
	cout << "Enter word 1 : " ;
	cin >> word1 ;
	
	cout << "Enter word 2 : " ;
	cin >> word2 ;
	
    s = mergeAlternately(word1,word2) ;
	
	cout << "Merged String : " << s << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}