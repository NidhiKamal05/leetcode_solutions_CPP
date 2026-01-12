
// 1266. MINIMUM TIME VISITING ALL POINTS

#include<iostream>
#include<vector>

using namespace std ;

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
	int time = 0 ;
	for(int i=0; i<points.size()-1; ++i) {
		int x1 = points[i][0] ;
		int y1 = points[i][1] ;
		int x2 = points[i+1][0] ;
		int y2 = points[i+1][1] ;
		time += max(abs(x1-x2), abs(y1-y2)) ;
	}
	return time ;
}

int main() {
	vector<vector<int>> points ;
	int l, e ;
	
	cout << endl ;
	cout << "  MINIMUM TIME VISITING ALL POINTS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the 2D array....." << endl ;
	for(int i=0; i<l; ++i) {
		cout << "Point " << (i+1) << " :-" << endl ;
		int x = 0, y = 0 ;
		cout << "x = " ;
		cin >> x ;
		cout << "y = " ;
		cin >> y ;
		points.push_back({x, y}) ;
	}
	
	e = minTimeToVisitAllPoints(points) ;
	
	cout << endl ;
	cout << "Minimum time = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}