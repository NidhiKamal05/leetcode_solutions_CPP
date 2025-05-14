
// 997. FIND THE TOWN JUDGE

#include<iostream>
#include<vector>

using namespace std ;

int findTownJudge(int n, vector<vector<int>>& trust) {
	if(trust.size()==0 && n==1) {
		return 1 ;
	}
	vector<int> count(n+1, 0) ;
	for(auto& t : trust) {
		count[t[0]]-- ;
		count[t[1]]++ ;
	}
	for(int i=0; i<count.size(); ++i) {
		if(count[i] == n-1) {
			return i ;
		}
	}
	return -1 ;
}

int main() {
	vector<vector<int>> trust ;
	int e, n ;
	
	cout << endl ;
	cout << "  FIND THE TOWN JUDGE " << endl ;
	cout << " `````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the 2D array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements in the 2D array...... " << endl ;
	for(int i=0; i<n; ++i) {
		vector<int> v ;
		for(int i=0; i<2; ++i) {
			cin >> e ;
			v.push_back(e) ;
		}
		trust.push_back(v) ;
	}
	
	cout << endl ;
	cout << "Enter number of people, n = " ;
	cin >> n ;
	
    e = findTownJudge(n, trust) ;
	
	cout << endl ;
	if(e != -1) {
		cout << e << " is the town judge..." << endl ;
	}
	else {
		cout << "No one is the town judge..." << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}