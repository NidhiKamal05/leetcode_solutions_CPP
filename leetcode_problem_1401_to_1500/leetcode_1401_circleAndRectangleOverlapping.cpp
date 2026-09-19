
// 1401. CIRCLE AND RECTANGLE OVERLAPPING

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/circle-and-rectangle-overlapping/solutions/8529580/c-0-ms-runtime-beats-100-o1-solution-by-5lglw/

/* JAVA */
// https://leetcode.com/problems/circle-and-rectangle-overlapping/solutions/8529587/java-o1-solution-beats-100-math-geometry-1vui/

#include<iostream>

using namespace std ;

bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
	int closestX = xCenter < x1 ? x1 : (xCenter > x2 ? x2 : xCenter) ;
    int closestY = yCenter < y1 ? y1 : (yCenter > y2 ? y2 : yCenter) ;
	int xDist = abs(xCenter - closestX) ;
	int yDist = abs(yCenter - closestY) ;
	return ((xDist * xDist) + (yDist * yDist)) <= (radius * radius) ;
}

/*bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
	int closestX = 0 ;
	if(xCenter < x1) {
		closestX = x1 ;
	}
	else if(xCenter > x2) {
		closestX = x2 ;
	}
	else {
		closestX = xCenter ;
	}
	int closestY = 0 ;
	if(yCenter < y1) {
		closestY = y1 ;
	}
	else if(yCenter > y2) {
		closestY = y2 ;
	}
	else {
		closestY = yCenter ;
	}
	int xDist = abs(xCenter - closestX) ;
	int yDist = abs(yCenter - closestY) ;
	return ((xDist * xDist) + (yDist * yDist)) <= (radius * radius) ;
}*/

int main() {
	int radius, xCenter, yCenter ;
	int x1, y1, x2, y2 ;
	bool ans ;
	
	cout << endl ;
	cout << "  CIRCLE AND RECTANGLE OVERLAPPING " << endl ;
	cout << " ``````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Circle...." << endl ;
	cout << "Enter radius = " ;
	cin >> radius ;
	cout << "Enter center of the circle...." << endl ;
	cout << "xCenter = " ;
	cin >> xCenter ;
	cout << "yCenter = " ;
	cin >> yCenter ;
	
	cout << endl ;
	cout << "Enter coordinates of bottom-left coner of the rectangle.... " << endl ;
	cout << "x1 = " ;
	cin >> x1 ;
	cout << "y1 = " ;
	cin >> y1 ;
	
	cout << endl ;
	cout << "Enter coordinates of top-right coner of the rectangle.... " << endl ;
	cout << "x2 = " ;
	cin >> x2 ;
	cout << "y2 = " ;
	cin >> y2 ;
	
    ans = checkOverlap(radius, xCenter, yCenter, x1, y1, x2, y2) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}