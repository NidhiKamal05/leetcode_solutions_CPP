
// 2114. MAXIMUM NUMBER OF WORDS FOUND IN SENTENCES

#include<iostream>
#include<vector>

using namespace std ;

int mostWordsFound(vector<string>& sentences) {
	int cnt = 0 ;
	int maximumWords = INT_MIN ;
	for(int i=0; i<sentences.size(); ++i) {
		cnt = 0 ;
		for(int j=0; j<sentences[i].length(); ++j) {
			if(sentences[i][j] == ' ') {
				++cnt ;
			}
		}
		cnt += 1 ;
		maximumWords = max(cnt, maximumWords) ;
	}
	return maximumWords ;
}

/** BOTH WORKS with T.C.-O(N*M) and S.C.-O(1) **/
/*int mostWordsFound(vector<string>& sentences) {
    int maximumWords = 0 ;
    for(const string& sentence : sentences) {
        int spaces = count(sentence.begin(), sentence.end(), ' ') ;            
        maximumWords = max(spaces + 1, maximumWords) ;
    }
    return maximumWords ;
}*/

int main(){
	int l, ans ;
	string s ;
	vector<string> sentences ;
	
	cout << endl ;
	cout << "  MAXIMUM NUMBER OF WORDS FOUND IN SENTENCES " << endl ;
	cout << " --------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	for(int i=0; i<=l; ++i) {
		getline(cin, s) ;
		sentences.push_back(s) ;
	}

    ans = mostWordsFound(sentences) ;
	
	cout << endl ;
	cout << "Count = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}