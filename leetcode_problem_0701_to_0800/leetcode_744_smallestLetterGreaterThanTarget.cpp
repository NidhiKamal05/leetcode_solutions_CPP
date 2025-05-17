
// 744. FIND SMALLEST LETTER GREATER THEN TARGET

#include<iostream>
#include<vector>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        for(char letter : letters) {
            if(letter > target) {
                return letter ;
            }
        }
        return letters[0] ;
    }
}*/

char nextGreatestLetter(vector<char>& letters, char target) {
	for(char& letter : letters) {
		if(letter > target) {
			return letter ;
		}
	}
	return letters[0] ;
}

int main() {
	char ch, target ;
	vector<char> letters ;
	int l ;
	
	cout << endl ;
	cout << "  FIND SMALLEST LETTER GREATER THEN TARGET " << endl ;
	cout << " ``````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array..... " << endl ;
	for(int i=0; i<l; ++i){
		cin >> ch ;
		letters.push_back(ch) ;
	}
	
	cout << endl ;
	cout << "Enter target..... " << endl ;
	cout << "target = " ;
	cin >> target ;
	
    ch = nextGreatestLetter(letters, target) ;
	
	cout << endl ;
	cout << "Answer = " << ch << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}