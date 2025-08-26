
// 3000. MAXIMUM AREA OF LONGEST DIAGONAL RECTANGLE

#include<iostream>
#include<vector>

using namespace std ;

int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
    int n = dimensions.size() ;
    int maxArea = 0, maxDiagSq = 0 ;
    for(int i=0; i<n; ++i) {
        int l = dimensions[i][0] ;
        int w = dimensions[i][1] ;
        int diagonalSquare = (l * l) + (w * w) ;
        if(diagonalSquare > maxDiagSq) {
            maxDiagSq = diagonalSquare ;
            maxArea = l * w ;
        }
        else if(diagonalSquare == maxDiagSq) {
            maxArea = max(maxArea, l * w) ;
        }
        else {
            continue ;
        }
    }
    return maxArea ;
}

int main() {
	int n, l, w ;
	vector<vector<int>> dimensions ;
	
	cout << endl ;
	cout << "  MAXIMUM AREA OF LONGEST DIAGONAL RECTANGLE " << endl ;
	cout << " ********************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter pair of length and width of the rectangles......" << endl ;
	for(int i=0; i<n; ++i) {
		cout << "\nl = " ;
		cin >> l ;
		cout << "w = " ;
		cin >> w ;
		dimensions.push_back({l, w}) ;
	}
	
	w = areaOfMaxDiagonal(dimensions) ;
	
	cout << endl ;
	cout << "Maximum area = " << w << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}