
// 455. ASSIGN COOKIES

/** T.C. - O(NlogN + MlogM) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/assign-cookies/solutions/7813751/c-solution-by-nidhi_kamal-zuf3/

/* JAVA */
// https://leetcode.com/problems/assign-cookies/solutions/7813783/java-solution-runtime-beats-9968-by-nidh-vlld/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int findContentChildren(vector<int>& g, vector<int>& s) {
	sort(g.begin(), g.end()) ;
    sort(s.begin(), s.end()) ;
    int assign = 0 ;
    int n1 = g.size(), n2 = s.size() ;
    int i = 0, j = 0;
    while(i < n1 && j < n2) {
        if(g[i] <= s[j]) {
            ++assign ;
            ++i ;
            ++j ;
        }
        else {
            ++j ;
        }
    }
    return assign ;
}

int main() {
	int n, e ;
	vector<int> g, s ;
	
	cout << endl ;
	cout << "  ASSIGN COOKIES " << endl ;
	cout << " ================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array(g), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter greed factor of childrens......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> e ;
		g.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array(s), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter size of the cookies......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> e ;
		s.push_back(e) ;
	}
	
	e = findContentChildren(g, s) ;
	
	cout << endl ;
	cout << "Maximum number = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




/*void Sort(vector<int>& v) {
	int n = v.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(v[i] > v[j]) {
				swap(v[i], v[j]) ;
			}
		}
	}
}*/