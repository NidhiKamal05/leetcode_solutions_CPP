
// 119. PASCAL'S TRIANGLE II

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/pascals-triangle-ii/solutions/8171497/c-0-ms-runtime-beats-100-memory-beats-73-vpkr/

/* JAVA */
// https://leetcode.com/problems/pascals-triangle-ii/solutions/8171560/java-solution-0-ms-beats-100-on-by-nidhi-invv/

#include<iostream>
#include<vector>

using namespace std ;

/** 
/* C(n, r) = n! / (r! * (n - r)!)
/* Recurrence relation of combination, C(n, r) = C(n, r - 1) * ((n - r + 1) / r)
/*/

vector<int> getRow(int rowIndex) {
    int n = rowIndex ;
    vector<int> row(n + 1, 1) ;
    long long prev = 1 ;
    for(int r = 1; r <= n; ++r) {
        long long curr = prev * (n - r + 1) / r ;
        row[r] = (int)curr ;
        prev = curr ;
    }
    return row ;        
}

int main() {
	int rowIndex ;
	vector<int> ans ;
	
	cout << endl ;
	cout << "  PASCAL'S TRIANGLE II " << endl ;
	cout << " **********************" << endl ;
	
	cout << endl ;
	cout << "Enter index of row, rowIndex = " ;
	cin >> rowIndex ;
	
	ans = getRow(rowIndex) ;
	
	cout << endl ;
	cout << rowIndex << "th row of Pascal's triangle......" << endl ;
	cout << "[ " ;
	for(int& num : ans) {
		cout << num << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** TIME LIMIT EXCEEDED **/

/*long long fact(int num) {
	long long f = 1 ;
	for(int n=num; n>0; --n) {
		f *= n ;
	}
	return f ;
}

vector<int> getRow(int rowIndex) {
	int n = rowIndex ;
	vector<int> row(n+1) ;
	for(int r=0; r<=n; ++r) {
		row[r] = (fact(n) / (fact(r) * fact(n-r))) ;
	}
	return row ;
}*/