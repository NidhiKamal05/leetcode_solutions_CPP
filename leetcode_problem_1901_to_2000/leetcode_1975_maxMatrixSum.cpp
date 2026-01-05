
// 1975. MAXIMUM MATRIX SUM

#include<iostream>
#include<vector>
#include<cmath>

using namespace std ;

long long maxMatrixSum(vector<vector<int>>& matrix) {
	long long matrixSum = 0 ;
    int minVal = 100001, neg = 0 ;
    for(vector<int>& row : matrix) {
        for(int& num : row) {
            int absVal = abs(num) ;
            matrixSum += absVal ;
            minVal = min(minVal, absVal) ;
            if(num < 0) {
                ++neg ;
            }
        }
    }
    return (neg % 2 != 0) ? (matrixSum - (2 * minVal)) : matrixSum ;
}

int main() {
	vector<vector<int>> matrix ;
	int n, e ;
	long long maxSum = 0 ;
	
	cout << endl ;
	cout << "  MAXIMUM MATRIX SUM " << endl ;
	cout << " ====================" << endl ;
	
	cout << endl ;
	cout << "Enter no. of rows (for n X n matrix), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<n; ++i) {
		vector<int> row ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		matrix.push_back(row) ;
	}
	
	maxSum = maxMatrixSum(matrix) ;
	
	cout << endl ;
	cout << "Max matrix sum = " << maxSum << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}