
// 3838. WEIGHTED WORD MAPPING

/** T.C. - O(N * M) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/weighted-word-mapping/solutions/8332048/c-runtime-beats-100-0-ms-by-nidhi_kamal-y2pq/

/* JAVA */
// https://leetcode.com/problems/weighted-word-mapping/solutions/8332074/java-solution-runtime-beats-9685-easy-by-hvcy/

#include<iostream>
#include<vector>

using namespace std ;

string mapWordWeights(vector<string>& words, vector<int>& weights) {
    string str ;
    for(string& word : words) {
        int sum = 0;
        for(char& c : word) {
            sum += weights[c - 'a'] ;
        }
        str += ('z' - (sum % 26)) ;
    }
    return str ;
}

int main() {
	vector<int> weights ;
	vector<string> words ;
	int n, e ;
	string word ;
	
	cout << endl ;
	cout << "  WEIGHTED WORD MAPPING " << endl ;
	cout << " ```````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter words....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> word ;
		words.push_back(word) ;
	}
	
	cout << endl ;
	cout << "Enter weights of the character....." << endl ;
	for(int i = 0; i < 26; i++){
		cin >> e ;
		weights.push_back(e) ;
	}
	
    word = mapWordWeights(words, weights) ;
	
	cout << endl ;
	cout << "Answer = " << word << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}