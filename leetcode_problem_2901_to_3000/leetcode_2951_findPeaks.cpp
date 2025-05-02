
// 2951. FIND THE PEAKS

#include<iostream>
#include<vector>

using namespace std ;

vector<int> findPeaks(vector<int> & mountain){
	vector<int> ans{} ;
	for(int i=1; i<mountain.size()-1; ++i)
		if((mountain.at(i-1)<mountain.at(i))&&(mountain.at(i)>mountain.at(i+1)))
			ans.push_back(i) ;
	return ans ;
}

int main(){
	vector<int> mountain{} ;
	vector<int> ans{} ;
	int l, e ;
	
	cout << endl ;
	cout << "  FIND THE PEAKS " << endl ;
	cout << " ----------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e;
		mountain.push_back(e) ;
	}
	
	ans = findPeaks(mountain) ;
	
	cout << endl ;
	if(!ans.empty())
		for(int i=0; i<ans.size(); ++i)
			cout << " " << ans.at(i) << " "  ;
	else
		cout << "Empty..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}