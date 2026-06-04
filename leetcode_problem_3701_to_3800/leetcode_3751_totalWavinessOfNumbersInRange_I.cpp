
// 3751. TOTAL WAVINESS OF NUMBERS IN RANGE I

/** T.C. - O((num2−num1)log(num2)) & S.C. - O(log(num2)) **/

/* C++ */
// https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/solutions/8313651/c-solution-by-nidhi_kamal-eq7z/

/* JAVA */
// https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/solutions/8313676/java-by-nidhi_kamal-boyp/

#include<iostream>
#include<vector>

using namespace std ;

vector<int> extractDigits(int num) {
	vector<int> digits ;
	while(num) {
		digits.push_back(num % 10) ;
		num /= 10 ;
	}
	return digits ;
}

int findWaviness(vector<int> digits) {
	int ans = 0, n = digits.size() ;
	for(int i = 1; i < n - 1; ++i) {
		if(digits[i - 1] < digits[i] && digits[i] > digits[i + 1]) {
			++ans ;
		}
		if(digits[i - 1] > digits[i] && digits[i] < digits[i + 1]) {
			++ans ;
		}
	}
	return ans ;
}

int totalWaviness(int num1, int num2) {
	int totalSum = 0 ;
	for(int num = num1; num <= num2; ++num) {
		vector<int> digits = extractDigits(num) ;
		totalSum += findWaviness(digits) ;
	}
	return totalSum ;
}

int main() {
	int num1, num2, sum ;
	
	cout << endl ;
	cout << "  TOTAL WAVINESS OF NUMBERS IN RANGE I " << endl ;
	cout << " ``````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, num1 = " ;
	cin >> num1 ;
	
	cout << endl ;
	cout << "Enter an integer, num2 = " ;
	cin >> num2 ;
	
    sum = totalWaviness(num1, num2) ;
	
	cout << endl ;
	cout << "Total sum of waviness = " << sum << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}