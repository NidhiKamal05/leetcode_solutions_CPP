
// 763. PARTITIONS LABELS

#include<iostream>
#include<vector>

using namespace std ;

vector<int> partitionLabels(string s) {
	int len = s.length() ;
	vector<int> lastOcc(26, 0) ;
	for(int i=0; i<len; ++i) {
		lastOcc[s[i]-'a'] = i ;
	}
	vector<int> ans ;
	int start = 0, end = 0 ;
	for(int i=0; i<len; ++i) {
		end = max(end, lastOcc[s[i]-'a']) ;
		if(i == end) {
			ans.push_back(end-start+1) ;
			start = end+1 ;
		}
	}
	return ans ;
}

int main(){
	string s ;
	vector<int> ans ;
	
	cout << endl ;
	cout << "  PARTITIONS LABELS " << endl ;
	cout << " ```````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string.....\n" ;
	cin >> s ;
	
    ans = partitionLabels(s) ;
	
	cout << endl ;
	cout << "List....." << endl ;
	cout << "[ " ;
	for(int& n : ans) {
		cout << n << " " ;
	}
	cout << "]" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}