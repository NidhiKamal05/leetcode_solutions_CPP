
// 2657. FIND THE PREFIX COMMON ARRAY OF TWO ARRAYS

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int n = A.size() ;
	map<int, int> mpB ;
	for(int i=0; i<n; ++i) {
		mpB[B[i]] = i ;
	}
	vector<int> ans(n) ;
	int cnt ;
	for(int i=0; i<n; ++i) {
		cnt = 0 ;
		for(int j=0; j<=i; ++j) {
			if(mpB[A[j]] <= i) {
				++cnt ;
			}
		}
		ans[i] = cnt ;
	}
	return ans ;
}

int main() {
	vector<int> A, B, ans ;
	int l, e ;
	
	cout << endl ;
	cout << "  FIND THE PREFIX COMMON ARRAY OF TWO ARRAYS " << endl ;
	cout << " ============================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array 1...." << endl ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array 1...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		A.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array 2...." << endl ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array 2...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		B.push_back(e) ;
	}
	
	ans = findThePrefixCommonArray(A, B) ;
	
	cout << endl ;
	cout << "Answer....." << endl ;
	for(int i=0; i<ans.size(); ++i){
		cout << " " << ans[i] << " " ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}