
// 2075. DECODE THE SLANTED CIPHERTEXT

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/decode-the-slanted-ciphertext/solutions/7779714/c-solution-by-nidhi_kamal-ypna/

/* JAVA */
// 

#include<iostream>
#include<vector>

using namespace std ;

string decodeCipherText(string encodedText, int rows) {
	int n = encodedText.length() ;
    int cols = n / rows ;
    vector<vector<char>> mat(rows, vector<char>(cols)) ;
    int idx = 0 ;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            mat[i][j] = encodedText[idx++] ;
        }
    }
    string str ;
    for(int i = 0; i < cols; ++i) {
        int k = i ;
        for(int j = 0; j < rows; ++j) {
            str += mat[j][k++] ;
            if(k > cols - 1) {
                break ;
            }
        }
    }
    while(!str.empty() && str.back() == ' ') {
        str.pop_back() ;
    }
    return str ;
}

int main() {
	string encodedText, ans ;
	int rows ;
	
	cout << endl ;
	cout << "  DECODE THE SLANTED CIPHERTEXT " << endl ;
	cout << " ```````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	getline(cin, encodedText) ;
	
	cout << endl ;
	cout << "Enter no. of rows = " ;
	cin >> rows ;
	
    ans = decodeCipherText(encodedText, rows) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}