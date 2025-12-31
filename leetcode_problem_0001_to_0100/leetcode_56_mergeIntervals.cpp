
// 56. MERGE INTERVALS

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0],b[0])) ;
        int n = intervals.length ;
        List<int[]> list = new ArrayList<>() ;
        list.add(intervals[0]) ;
        for(int i=1; i<n; ++i) {
            int back = list.size()-1 ;
            int[] l = list.get(back) ;
            if(l[1] >= intervals[i][0]) {
                l[1] = Math.max(l[1], intervals[i][1]) ;
            }
            else {
                list.add(intervals[i]) ;
            }
        }
        int[][] result = new int[list.size()][2] ;
        for(int i=0; i<list.size(); ++i) {
            result[i] = list.get(i) ;
        }
        return result ;
    }
}*/

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