
// 1128. NUMBER OF EQUIVALENT PAIRS

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

/** 1 More Approach, O(N) **/
/*class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int> mpp ;
        int cnt = 0 ;
        for(auto& d : dominoes) {
            if(d[0] > d[1]) {
                swap(d[0], d[1]) ;
            }
            cnt += mpp[make_pair(d[0], d[1])]++ ;
        }
        return cnt ;
    }
};*/

int numEquivDominoPairs(vector<vector<int>>& dominoes) {
	int n = dominoes.size(), cnt = 0 ;
	for(int i=0; i<n-1; ++i) {
		int a = dominoes[i][0] ;
		int b = dominoes[i][1] ;
		for(int j=i+1; j<n; ++j) {
			int c = dominoes[j][0] ;
			int d = dominoes[j][1] ;
			if(((a==c)&&(b==d)) || ((a==d)&&(b==c))) {
				++cnt ;
			}
		}
	}
	return cnt ;
}

int main()
{
	vector<vector<int>> dominoes ;
	int len, e ;
	
	cout << endl ;
	cout << "  NUMBER OF EQUIVALENT PAIRS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array....... " << endl ;

	for(int i=0; i<len; ++i){
		vector<int> t ;
		for(int j=0; j<2; ++j){
			cin >> e ;
			t.push_back(e) ;
		}
		dominoes.push_back(t) ;
	}
	
    e = numEquivDominoPairs(dominoes) ;
	
	cout << "Number ofequivalent pair = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*int numEquivDominoPairs(vector<vector<int>>& dominoes) {
	for(int i=0; i<dominoes.size(); ++i)
		if(dominoes[i][1] > dominoes[i][0])
			swap(dominoes[i][0], dominoes[i][1]) ;
	map<vector<int>, int> mp ;
	for(auto i : dominoes)
		mp[i]++ ;
	int cnt = 0;
	map<vector<int>, int> :: iterator it ;
	for(it=mp.begin(); it!=mp.end(); ++it) {
		if(it->second > 1)
			cnt += ((((it->second))*((it->second))-1)/2) ;
			// ++cnt ;
	}
	return cnt-1 ;
}*/