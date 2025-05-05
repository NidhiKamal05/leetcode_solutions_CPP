
// 2679. SUM IN A MATRIX

// #include<iostream>
// #include<vector>

#include<bits/stdc++.h>

using namespace std ;

//*JAVA SOLUTION*//
/*class Solution {
    public int matrixSum(int[][] nums) {
        for(int[] row : nums){
            Arrays.sort(row) ;
        }
        int maximum ;
        int sum = 0 ;
        for(int j=0; j<nums[0].length; ++j) {
            maximum = Integer.MIN_VALUE ;
            for(int i=0; i<nums.length; ++i) {
                maximum = Math.max(maximum, nums[i][j]) ;
            }
            sum += maximum ;
        }
        return sum ;
    }
}*/

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

int matrixSum(vector<vector<int>>& nums) {
	int row = nums.size() ;
    int col = (nums[0]).size() ;
    for(int i=0; i<row; ++i){
        for(int j=0; j<col; ++j) {
			Sort(nums[i]) ;
            // sort((nums[i]).begin(), (nums[i]).end()) ;
        }
    }
    int maximum ; 
    int c = col ;
    int sum = 0 ;
    for(int j=0; j<col; ++j) {
        maximum = INT_MIN ;
        for(int i=0; i<row; ++i) {
            maximum = max(maximum, nums[i][c-1]) ;
            (nums[i]).pop_back() ;
        }
        --c ;
        sum += maximum ;
    }
    return sum ;
}

int main()
{
	vector<vector<int>> nums ;
	int m, n, e ;
	
	cout << endl ;
	cout << "  SUM IN A MATRIX " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^" << endl ;	
	
	cout << endl ;
	cout << "No. of rows = " ;
	cin >> m ;
	cout << "No. of cols = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the matrix " << m << "X" << n << "......" << endl ;
	for(int i=0; i<m; ++i){
		vector<int> t ;
		for(int j=0; j<n; ++j){
			cin >> e ;
			t.push_back(e) ;
		}
		nums.push_back(t) ;
	}
	
	system("pause") ;
	system("cls") ;
	
	cout << endl ;
	cout << "Matrix......." << endl ;
	for(int i=0; i<m; ++i){
		vector<int> t ;
		cout << "| " ;
		for(int j=0; j<n; ++j){
			cout << (nums.at(i)).at(j) << " " ;
		}
		cout << "|" << endl ;
	}
	
	e = matrixSum(nums) ;
	
	cout << "Final Score = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}