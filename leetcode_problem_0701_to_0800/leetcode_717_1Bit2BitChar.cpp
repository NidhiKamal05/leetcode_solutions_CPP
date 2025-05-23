
// 717. 1-BIT AND 2-BIT CHARACTERS

#include<iostream>
#include<vector>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public boolean isOneBitCharacter(int[] bits) {
        int n = bits.length ;
        for(int i=0; i<n-1; ++i) {
            if((bits[i] == 1) && (i++ == n-2)) {
                return false ;
            }
        }
        return true ;
    }
}*/

bool isOneBitCharcater(vector<int>& bits) {
	int n = bits.size() ;
    for(int i=0; i<n-1; ++i) {
        if(bits[i] == 1) {
            if(i == n-2) {
                return false ;
            }
            ++i ;
        }
    }
    return true ;
}

int main() {
	vector<int> bits ;
	int len, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  1-BIT AND 2-BIT CHARACTERS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array......." << endl ;
	for(int i = 0; i<len; i++) {
		cin >> e ;
		bits.push_back(e) ;
	}
	
    ans = isOneBitCharcater(bits) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}