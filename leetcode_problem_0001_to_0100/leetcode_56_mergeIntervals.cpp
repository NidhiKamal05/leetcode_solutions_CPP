
// 56. MERGE INTERVALS

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end()) ;
    vector<vector<int>> result ;
    result.push_back(intervals[0]) ;
    int n = intervals.size() ;
    for(int i=1; i<n; ++i) {
        if(result.back()[1] >= intervals[i][0]) {
            result.back()[1] = max(result.back()[1], intervals[i][1]) ;
        }
        else {
            result.push_back(intervals[i]) ;
        }
    }
    return result ;
}

int main() {
	int l ;
	vector<vector<int>> intervals, result ;
	
	cout << endl ;
	cout << "  MERGE INTERVALS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the 2D array, n = " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter starting and ending points...." << endl ;
	for(int i=0; i<l; ++i){
		cout << endl ;
		int start, end ;
		cout << "start = " ;		
		cin >> start ;
		cout << "end = " ;
		cin >> end ;
		intervals.push_back({start, end}) ;
	}
	
	result = merge(intervals) ;
	
	cout << endl ;	
	cout << "Result....." << endl ;
	cout << "[ " ;
	for(vector<int>& v : result){
		cout << "[ " ;
		for(int& num : v){
			cout << num << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}