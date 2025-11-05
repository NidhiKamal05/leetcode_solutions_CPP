
// 2848. POINTS THAT INTERSECT WITH CARS

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

int numberOfPoints(vector<vector<int>>& nums) {
    unordered_set<int> s ;
    for(vector<int>& v : nums) {
        for(int i=v[0]; i<=v[1]; ++i) {
            s.insert(i) ;
        }
    }
    return s.size() ;
}

int main() {
	int n, e, start, end ;
	vector<vector<int>> nums ;
	
	cout << endl ;
	cout << "  POINTS THAT INTERSECT WITH CARS " << endl ;
	cout << " ---------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter starting and ending points of a car......" << endl ;
	for(int i=0; i<n; ++i) {
		cout << endl ;
		cout << "Start = " ;
		cin >> start ;
		cout << "End = " ;
		cin >> end ;
		nums.push_back({start, end}) ;
	}
	
	e = numberOfPoints(nums) ;
	
	cout << endl ;
	cout << "No. of points = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}