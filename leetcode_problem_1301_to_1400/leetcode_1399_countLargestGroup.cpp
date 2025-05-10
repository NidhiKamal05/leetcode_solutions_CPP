
// 1399. COUNT LARGEST GROUP

#include<iostream>
#include<map>

using namespace std ;

int digitSum(int num) {
    int sum = 0 ;
    while(num) {
        sum += (num % 10) ;
        num /= 10 ;
    }
    return sum ;
}

int countLargestGroup(int n) {
    map<int, int> freq ;
    int sum = 0, maxSize = 0, cnt = 0 ;
    for(int i=1; i<=n; ++i) {
        sum = digitSum(i) ;
        freq[sum]++ ;
        maxSize = max(maxSize, freq[sum]) ;
    }
    for(auto& f : freq) {
        if(f.second == maxSize) {
            ++cnt ;
        }
    }
    return cnt ;
}

int main() {
	int n, cnt ;
	
	cout << endl ;
	cout << "  COUNT LARGEST GROUP " << endl ;
	cout << " `````````````````````" << endl ;
	
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
    cnt = countLargestGroup(n) ;
	
	cout << endl ;
	cout << "Count = " << cnt << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}