
// 118. PASCAL'S TRIANGLE

#include<iostream>
#include<vector>

using namespace std ;

vector<vector<int>> generate(int numRows) {
	vector<vector<int>> ans ;
	for(int i=0; i<numRows; ++i) {
		vector<int> v(i+1, 1) ;
		for(int j=1; j<v.size()-1; ++j) {
			v[j] = ans[i-1][j-1] + ans[i-1][j] ;
		}
		ans.push_back(v) ;
	}
	return ans ;
}

int main() {
	int numRows ;
	vector<vector<int>> ans ;
	
	cout << endl ;
	cout << "  PASCAL'S TRIANGLE " << endl ;
	cout << " *******************" << endl ;
	
	cout << endl ;
	cout << "Enter number of rows, numRows = " ;
	cin >> numRows ;
	
	ans = generate(numRows) ;
	
	cout << endl ;
	cout << "Pascal Triangle......" << endl ;
	cout << "[ " ;
	for(vector<int>& v : ans) {
		cout << "[ " ;
		for(int& num : v) {
			cout << num << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}