
// 944. DELETE COLUMNS TO MAKE SORTED

#include<iostream>
#include<vector>

using namespace std ;

int minDeletionSize(vector<string>& strs) {
	int col = 0 ;
	int n = strs.size() ;
	int m = strs[0].length() ;
	for(int i=0; i<m; ++i) {
		for(int j=0; j<n-1; ++j) {
			if(strs[j][i] > strs[j+1][i]) {
				++col ;
				break ;
			}
		}
	}
	return col ;
}

int main() {
	string s ;
	vector<string> strs ;
	int l, ans ;
	
	cout << endl ;
	cout << "  DELETE COLUMNS TO MAKE SORTED " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter strings in the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> s ;
		strs.push_back(s) ;
	}
	
	ans = minDeletionSize(strs) ;
	
	cout << endl ;
	cout << "No. of columns = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}