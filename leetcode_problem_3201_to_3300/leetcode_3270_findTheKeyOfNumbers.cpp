
// 3270. FIND THE KEY OF NUMBERS

/** T.C. - O(log n) & S.C. - O(log n) **/

/* C++ */
// https://leetcode.com/problems/find-the-key-of-the-numbers/solutions/7643497/c-solution-runtime-beats-100-by-nidhi_ka-0ga6/

/* JAVA */
// https://leetcode.com/problems/find-the-key-of-the-numbers/solutions/7643976/java-solution-0-ms-runtime-beats-100-by-zze4i/

#include<iostream>
#include<vector>

using namespace std 

vector<int> padding(vector<int>& v, int n) {
    for(int i=0; i<n; ++i) {
        v.push_back(0) ;
    }
    return v ;
}

vector<int> extractDigits(int num) {
    vector<int> v ;
    while(num) {
        v.push_back(num % 10) ;
        num /= 10 ;
    }
    int n = 4 - v.size() ;
    if(n > 0) {
        v = padding(v, n) ;
    }
    return v ;
}

int generateKey(int num1, int num2, int num3) {
    vector<int> v1, v2, v3 ;
    v1 = extractDigits(num1) ;
    v2 = extractDigits(num2) ;
    v3 = extractDigits(num3) ;
    int n = 1000 ;
    int ans = 0 ;
    for(int i=3; i>=0; --i) {
        int minNum = min(v1[i], min(v2[i], v3[i])) ;
        ans += (minNum * n) ;
        n /= 10 ;
    }
    return ans ;    
}

/*int generateKey(int num1, int num2, int num3) {
    vector<int> v1, v2, v3 ;

    while(num1) {
        v1.push_back(num1 % 10) ;
        num1 /= 10 ;
    }
    int n1 = 4 - v1.size() ;
    for(int i=0; i<n1; ++i) {
        v1.push_back(0) ;
    }

    while(num2) {
        v2.push_back(num2 % 10) ;
        num2 /= 10 ;
    }
    int n2 = 4 - v2.size() ;
    for(int i=0; i<n2; ++i) {
        v2.push_back(0) ;
    }

    while(num3) {
        v3.push_back(num3 % 10) ;
        num3 /= 10 ;
    }
    int n3 = 4 - v3.size() ;
    for(int i=0; i<n3; ++i) {
        v3.push_back(0) ;
    }

    int n = 1000 ;
    int ans = 0 ;
    for(int i=3; i>=0; --i) {
        int minNum = min(v1[i], min(v2[i], v3[i])) ;
        ans += (minNum * n) ;
        n /= 10 ;
    }

    return ans ;
}*/

int main() {
	int num1, num2, num3, key ;
	
	cout << endl ;
	cout << "  FIND THE KEY OF NUMBERS " << endl ;
	cout << " `````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, num1 = " ;
	cin >> num1 ;
	
	cout << endl ;
	cout << "Enter an integer, num2 = " ;
	cin >> num2 ;
	
	cout << endl ;
	cout << "Enter an integer, num3 = " ;
	cin >> num3 ;
	
	key = generateKey(num1, num2, num3) ;
	
	cout << endl ;
	cout << "Key = " << key << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}