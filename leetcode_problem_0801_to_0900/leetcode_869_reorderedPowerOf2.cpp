
// 869. REORDERED POWER OF 2

#include<iostream>
#include<vector>
#include<cmath>

using namespace std ;

vector<int> digitFreq(int num) {
	vector<int> freq(10, 0) ;
	while(num) {
		freq[num % 10]++ ;
		num /= 10 ;
	}
	return freq ;
}

bool isEqualFreq(vector<int>& a, vector<int>& b) {
	for(int i=0; i<10; ++i) {
		if(a[i] != b[i]) {
			return false ;
		}
	}
	return true ;
}

bool reorderedPowerOf2(int n) {
	vector<int> freq = digitFreq(n) ;
    for(int i=0; i<=30; ++i) {
        int powerOf2 = pow(2, i) ;
        vector<int> target = digitFreq(powerOf2) ;
        if(isEqualFreq(freq, target)) {
            return true ;
        }
    }
    return false ;
}

int main() {
	int n ;
	bool ans ;
	
	cout << endl ;
	cout << "  REORDERED POWER OF 2 " << endl ;
	cout << " ======================" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	ans = reorderedPowerOf2(n) ;
	
	cout << endl ;
	cout << (ans ? "TRUE...." : "FALSE") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}