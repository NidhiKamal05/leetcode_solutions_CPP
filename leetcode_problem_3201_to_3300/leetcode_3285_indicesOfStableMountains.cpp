
// 3285. FIND INDICES OF STABLE MOUNTAINS

#include<iostream>
#include<vector>

using namespace std ;

vector<int> stableMountains(vector<int>& height, int threshold) {
	vector<int> stable ;
	int n = height.size() ;
	for(int i=1; i<n; ++i) 
		if(height.at(i-1) > threshold)
			stable.push_back(i) ;
	return stable ;
}

int main() {
	vector<int> height ;
	vector<int> stable ;
	int l, e, threshold ;
	
	cout << endl ;
	cout << "  FIND INDICES OF STABLE MOUNTAINS " << endl ;
	cout << " ==================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		height.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter threshold value : " ;
	cin >> threshold ;
	
	stable = stableMountains(height, threshold) ;
	
	cout << endl ;
	if(stable.empty())
		cout << "Empty....." ;
	else {
		cout << "Stable Mountains...... " << endl ;
		for(int i=0; i<stable.size(); ++i)
			cout << " " << stable.at(i) ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}