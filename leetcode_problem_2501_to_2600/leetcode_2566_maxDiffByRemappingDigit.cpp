
// 2566. MAXIMUM DIFFERENCE BY REMAPPING A DIGIT

#include<iostream>
#include<algorithm>

using namespace std ;

int minMaxDifference(int num) {
	string s1 = to_string(num) ;
    string s2 = s1 ;
    int len = s1.length() ;
    char ch1, ch2 ;
    for(char c : s1) {
        if(c != '9') {
            ch1 = c ;
            break ;
        }
    }
    for(char c : s2) {
        if(c != '0') {
            ch2 = c ;
            break ;
        }
    }
    replace(s1.begin(), s1.end(), ch1, '9') ;
    replace(s2.begin(), s2.end(), ch2, '0') ;
    return stoi(s1) - stoi(s2) ;
}

int main() {
	int num, diff ;
	
	cout << endl ;
	cout << "  MAXIMUM DIFFERENCE BY REMAPPING A DIGIT " << endl ;
	cout << " =========================================" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, num = " ;
	cin >> num ;
	
	diff = minMaxDifference(num) ;
	
	cout << endl ;
	cout << "Maximum difference = " << diff << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}