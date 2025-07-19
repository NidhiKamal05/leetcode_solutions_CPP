
// 1233. REMOVE SUB-FOLDERS FROM THE FILESYSTEM

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<string>& v) {
	int n = v.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(v[i] > v[j]) {
				swap(v[i], v[j]) ;
			}
		}
	}	
}

vector<string> removeSubfolders(vector<string>& folder) {
	Sort(folder) ;
	// sort(folder.begin(), folder.end()) ;
	vector<string> result ;
	result.push_back(folder[0]) ;
	for(int i=1; i<folder.size(); ++i) {
		string prevFolder = result.back() ;
		prevFolder += '/' ;
		if(folder[i].compare(0, prevFolder.size(), prevFolder) == 0) {
			continue ;
		}
		result.push_back(folder[i]) ;
	}
	return result ;
}

int main() {
	int n ;
	string s ;
	vector<string> folder, result ;
	
	cout << endl ;
	cout << "  REMOVE SUB-FOLDERS FROM THE FILESYSTEM " << endl ;
	cout << " ========================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter folders or subfolders in the array......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> s ;
		folder.push_back(s) ;
	}
	
	result = removeSubfolders(folder) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(string& r : result) {
		cout << "\"" << r << "\" " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}