
// 3483. UNIQUE 3-DIGIT EVEN NUMBER

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

int totalNumbers(vector<int>& digits) {
    unordered_set<int> unique3DigitNum ;
    int n = digits.size() ;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) {
            for(int k=0; k<n; ++k) {
                if(i!=j && j!=k && k!=i) {
                    if(digits[i] != 0) {
                        if(digits[k] % 2 == 0) {
                            int num = digits[i]*100 + digits[j]*10 + digits[k] ;
                            unique3DigitNum.insert(num) ;
                        }
                    }
                }
            }
        }
    }
    return unique3DigitNum.size() ;
}

int main() {
	vector<int> digits ;
	int e, n ;
	
	cout << endl ;
	cout << "  UNIQUE 3-DIGIT EVEN NUMBER " << endl ;
	cout << " ````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		digits.push_back(e) ;
	}
	
    e = totalNumbers(digits) ;
	
	cout << endl ;
	cout << "Unique 3-digit numbers = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}