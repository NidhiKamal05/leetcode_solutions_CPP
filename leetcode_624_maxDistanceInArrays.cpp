
// 624. MAXIMUM DISTANCE IN ARRAYS

#include<iostream>
#include<vector>

using namespace std ;

int maxDistance(vector<vector<int>>& arrays) {
    int maxDistance = INT_MIN ;
    int minVal = arrays[0][0] ;
    int maxVal = arrays[0].back() ;
    for(int i=1; i<arrays.size(); ++i){
        maxDistance = max(maxDistance, max(abs(minVal-arrays[i].back()), abs(maxVal-arrays[i][0]))) ;
        minVal = min(minVal, arrays[i][0]) ; 
        maxVal = max(maxVal, arrays[i].back()) ; 
    }
    return maxDistance ;
}

/*int maxDistance(vector<vector<int>> & arrays){
	int maxNum = INT_MIN ;
	for(int i=0; i<arrays.size(); ++i)
		maxNum = max(maxNum, arrays[i].back()) ;
	int minNum = INT_MAX ;
	for(int i=0; i<arrays.size(); ++i)
		minNum = min(minNum, arrays[i][0]) ;
	return abs(maxNum-minNum) ;
}*/

int main()
{
	vector<vector<int>> arrays ;
	int m, n, e ;
	
	cout << endl ;
	cout << "  MAXIMUM DISTANCE IN ARRAYS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;	
	
	cout << endl ;
	cout << "Enter number of arrays : " ;
	cin >> m ;	
	
	cout << endl ;
	for(int i=0; i<m; ++i){
		vector<int> arr ;
		cout << "Enter size of the array : " ;
		cin >> n ;
		cout << "Enter elements of the array......" << endl ;
		for(int j=0; j<n; ++j){
			cin >> e ;
			arr.push_back(e) ;
		}
		arrays.push_back(arr) ;
	}
	
	cout << endl ;
	cout << "Arrays......." << endl ;
	cout << "[ " ;
	for(int i=0; i<arrays.size(); ++i){
		cout << "[ " ;
		for(int j=0; j<(arrays.at(i)).size(); ++j){
			cout << (arrays.at(i)).at(j) << "" ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	e = maxDistance(arrays) ;
	
	cout << endl ;
	cout << "Maximum distance = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}