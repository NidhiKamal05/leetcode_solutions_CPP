
// 812. LARGEST TRIANGLE AREA

#include<iostream>
#include<vector>

using namespace std ;

double largestTriangleArea(vector<vector<int>>& points) {
    double maxArea = INT_MIN ;
    int n = points.size() ;
    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            for(int k=j+1; k<n; ++k) {
                int x1 = points[i][0], y1 = points[i][1] ;
                int x2 = points[j][0], y2 = points[j][1] ;
                int x3 = points[k][0], y3 = points[k][1] ;
                double area = 0.5 * abs((x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1-y2))) ;
                maxArea = max(maxArea, area) ;
            }
        }
    }
    return maxArea ;
}

int main(){
	vector<vector<int>> points ;
	int l, e ;
	double maxArea ;
	
	cout << endl ;
	cout << "  LARGEST TRIANGLE AREA " << endl ;
	cout << " =======================" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the 2-D array....." << endl ;
	for(int i=0; i<l; ++i){
		vector<int> p ;
		for(int j=0; j<2; ++j){
			cin >> e ;
			p.push_back(e) ;
		}
		points.push_back(p) ;
	}
	
	maxArea = largestTriangleArea(points) ;
	
	cout << endl ;
	cout << "Largest Triangle Area = " << maxArea << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}