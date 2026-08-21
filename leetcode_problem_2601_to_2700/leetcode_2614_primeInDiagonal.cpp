
// 2614. PRIME IN DIAGONAL

/** T.C. - O(N * sqrt(M)) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/prime-in-diagonal/solutions/8473861/c-very-easy-solution-by-nidhi_kamal-bi1t/

/* JAVA */
// https://leetcode.com/problems/prime-in-diagonal/solutions/8473866/java-by-nidhi_kamal-3dyt/

#include<iostream>
#include<vector>

using namespace std ;

bool isPrime(int num) {
    if(num < 2) {
        return false ;
    }
    for(int i = 2; i * i <= num; ++i) {
        if(num % i == 0) {
            return false ;
        }
    }
    return true ;
}

int diagonalPrime(vector<vector<int>>& nums) {
    int n = nums.size() ;
    int largestPrime = 0 ;
    for(int i = 0; i < n; ++i) {
        if(isPrime(nums[i][i])) {
            largestPrime = max(largestPrime, nums[i][i]) ;
        }
        if(isPrime(nums[i][n - 1 - i])) {
            largestPrime = max(largestPrime, nums[i][n - 1 - i]) ;
        }
    }
    return largestPrime ;
}

int main() {
	int n, e ;
	vector<vector<int>> nums ;
	
	cout << endl ;
	cout << "  PRIME IN DIAGONAL " << endl ;
	cout << " ```````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the 2-D array....." << endl ;
	for(int i=0; i<n; ++i) {
		vector<int> row ;
		cout << "Enter elements in the " << i << "th row...." << endl ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		nums.push_back(row) ;
	}
	
	e = diagonalPrime(nums) ;
	
	cout << endl ;
	cout << "Largest Prime = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}