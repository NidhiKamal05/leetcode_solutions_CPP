
// 2078. TWO FURTHEST HOUSES WITH DIFFERENT COLORS

#include<iostream>
#include<vector>

using namespace std ;

int maxDistance(vector<int>& colors) {
	int i, j ;
	int maxDistance = INT_MIN ;
	i = 0 ;
	j = colors.size()-1 ;
	while(i < j) {
		if(colors[i] != colors[j]) {
			maxDistance = max(maxDistance, abs(i-j)) ;
			break ;
		}
		else {
			++i ;
		}
	}
	i = 0 ;
	j = colors.size()-1 ;
	while(i < j) {
		if(colors[i] != colors[j]) {
			maxDistance = max(maxDistance, abs(i-j)) ;
			break ;
		}
		else {
			--j ;
		}
	}
	return maxDistance ;
}

int main(){
	vector<int> colors ;
	int l, e ;
	
	cout << endl ;
	cout << "  TWO FURTHEST HOUSES WITH DIFFERENT COLORS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		colors.push_back(e) ;
	}
	
	e = maxDistance(colors) ;
	
	cout << endl ;
	cout << "Maximum Distance = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}