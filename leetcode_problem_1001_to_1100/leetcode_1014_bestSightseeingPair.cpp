
// 1014. BEST SIGHTSEEING PAIR

#include<iostream>
#include<vector>

using namespace std ;

// JAVA SOLUTION
/*class Solution {
    public int maxScoreSightseeingPair(int[] values) {
        int n = values.length ;
        int maxSore = Integer.MIN_VALUE ;
        int maxI = values[0] ;
        for(int j=1; j<n; ++j) {
            maxSore = Math.max(maxSore, maxI+values[j]-j) ;
            maxI = Math.max(maxI, values[j]+j) ;
        }
        return maxSore ;
    }
}*/

int maxScoreSightseeingPair(vector<int>& values) {
    int n = values.size() ;
    int maxSore = INT_MIN ;
    int maxI = values[0] ;
    for(int j=1; j<n; ++j) {
        maxSore = max(maxSore, maxI+values[j]-j) ;
        maxI = max(maxI, values[j]+j) ;
    }
    return maxSore ;
}
	
// TIME LIMIT EXCEED //
/*int maxScoreSightseeingPair(vector<int>& values) {
	int n = values.size() ;
	int maxSore = INT_MIN ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			int score = values[i] + values[j] + i - j ;
			maxSore = max(maxSore, score) ;
		}
	}
	return maxSore ;
}*/

int main() {
	vector<int> values ;
	int e, n ;
	
	cout << endl ;
	cout << "  BEST SIGHTSEEING PAIR " << endl ;
	cout << " ```````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		values.push_back(e) ;
	}
	
	cout << endl ;
	
    e = maxScoreSightseeingPair(values) ;
	
	cout << "Best sightseeing pair = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}