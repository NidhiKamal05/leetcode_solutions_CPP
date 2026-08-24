
// 120. TRIANGLE

/** T.C. - O(N^2) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/triangle/solutions/8480104/c-0-ms-runtime-beats-100-dp-in-place-sol-2rhk/

/* JAVA */
// https://leetcode.com/problems/triangle/solutions/8480119/java-dp-solution-by-nidhi_kamal-ik61/

#include<iostream>
#include<vector>

using namespace std ;

int minimumTotal(vector<vector<int>> & triangle) {
	int n = triangle.size() ;
    for(int layer = n - 2; layer >= 0; --layer) {
        for(int i = 0; i < triangle[layer].size(); ++i) {
            int ith = triangle[layer + 1][i] ;
            int nextTo_ith = triangle[layer + 1][i + 1] ;
            triangle[layer][i] += min(ith, nextTo_ith) ;
        }
    }
    return triangle[0][0] ;
}

int main() {
	vector<vector<int>> triangle ;
	int m, n, e, min ;
	
	cout << endl ;
	cout << "  TRIANGLE " << endl ;
	cout << " ^^^^^^^^^^" << endl ;	
	
	cout << endl ;
	cout << "Size of array : " << endl ;
	cout << "m = " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter elements of array.... " << endl ;
	for(int i = 0; i < m; ++i) {
		vector<int> t ;
		cout << endl ;
		cout << "Enter size of the " << i << "th row, n = " ;
	    cin >> n ;
		for(int j = 0; j < n; ++j) {
			cin >> e ;
			t.push_back(e) ;
		}
		triangle.push_back(t) ;
	}
	
	// system("pause") ;
	// system("cls") ;
	
	cout << endl ;
	cout << "[ " ;
	for(int i = 0; i < triangle.size(); ++i) {
		cout << "[ " ;
		for(int j = 0; j < (triangle.at(i)).size(); ++j) {
			cout << (triangle.at(i)).at(j) << " " ;
		}
		cout << "]" ;
	}
	cout << "]" ;
	
	min = minimumTotal(triangle) ;
	
	cout << endl ;
	cout << "Minimum Total = " << min << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}