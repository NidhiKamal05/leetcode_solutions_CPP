
// 1007. MINIMUM DOMINO ROTATIONS FOR EQUAL ROW

#include<iostream>
#include<vector>

using namespace std ;

int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
    int n = tops.size(), minRotations = INT_MAX ;
    for(int val=1; val<=6; ++val) {
        int rotateTop = 0, rotateBottom = 0 ;
        bool validDomino = true ;
        for(int i=0; i<n; ++i) {
            if((tops[i] != val) && (bottoms[i] != val)) {
                validDomino = false ;
                break ;
            }
            if(tops[i] != val) {
                ++rotateTop ;
            }
            if(bottoms[i] != val) {
                ++rotateBottom ;
            }
        }
        if(validDomino) {
            minRotations = min(minRotations, min(rotateTop, rotateBottom)) ;
        }
    }
    return minRotations != INT_MAX ? minRotations : -1 ;
}

int main() {
	vector<int> tops, bottoms ;
	int l, e ;
	
	cout << endl ;
	cout << "  MINIMUM DOMINO ROTATIONS FOR EQUAL ROW " ;
	cout << " ========================================" ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cout << l ;
	
	cout << endl ;
	cout << "Enter elements of the array, tops....." ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		tops.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter elements of the array, bottoms....." ;	
	for(int i=0; i<l; ++i) {
		cin >> e ;
		bottoms.push_back(e) ;
	}
	
	e = minDominoRotations(tops, bottoms) ;
	
	cout << endl ;
	cout << "Minimum Domino Rotations = " << e << endl ;
	
	cout << endl ;
	
	system("pause");
	
	return 0 ;
}