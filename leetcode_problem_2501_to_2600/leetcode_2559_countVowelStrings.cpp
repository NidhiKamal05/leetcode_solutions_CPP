
// 2559. COUNT VOWEL STRINGS IN RANGES

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
	
	vector<char> vowels = {'a','e','i','o','u'} ;
	map<char, int> mp ;
	for(char v : vowels) {
		mp[v]++ ;
	}
	
	int n = words.size() ;
	int cnt = 0 ;
	vector<int> prefixSum(n) ;
	for(int i=0; i<n; ++i) {
		int l = words[i].length() ;
		cout << mp[words[i][0]] << " " << mp[words[i][n-1]] << endl ;
		if((mp[words[i][0]] == 1) && (mp[words[i][l-1]] == 1)) {
			++cnt ;
		}
		prefixSum[i] = cnt ;
	}
	
	n = queries.size() ;
	vector<int> ans(n) ;
	for(int i=0; i<n; ++i) {
		if(queries[i][0] == 0) {
			ans[i] = prefixSum[queries[i][1]] ;
		}
		else {
			ans[i] = (prefixSum[queries[i][1]] - prefixSum[(queries[i][0])-1]) ;
		}
		// ans[i] = (queries[i][0] == 0 ? prefixSum[queries[i][1]] : (prefixSum[queries[i][1]]-prefixSum[(queries[i][0])-1]) ) ;
	}
	
	return ans ;
}

// TIME LIMIT EXCEED [93/94]
/*vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
	int n = queries.size() ;
	vector<char> vowels = {'a','e','i','o','u'} ;
	map<char, int> mp ;
	for(char v : vowels) {
		mp[v]++ ;
	}
	vector<int> ans ;
	int cnt ;
	for(int i=0; i<n; ++i) {
		cnt = 0 ;
		for(int j=queries[i][0]; j<=queries[i][1]; ++j) {
			int l = words[j].length() ;
			if((mp[words[j][0]] == 1) && (mp[words[j][l-1]] == 1)) {
				++cnt ;
			}
		}
		ans.push_back(cnt) ;
	}
	return ans ;
}*/

int main() {
	string word ;
	vector<string> words ;
	vector<vector<int>> queries ;
	int e, n ;
	vector<int> ans ;
	
	cout << endl ;
	cout << "  COUNT VOWEL STRINGS IN RANGES " << endl ;
	cout << " ```````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array(words) : " ;
	cin >> n ;	
	
	cout << endl ;
	cout << "Enter strings...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> word ;
		words.push_back(word) ;
	}	
	
	cout << endl ;
	cout << "Enter size of the array(queries) : " ;
	cin >> n ;	
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {		
		vector<int> v ;
		for(int j=0; j<2; ++j) {
			cin >> e ;
			v.push_back(e) ;
		}
		queries.push_back(v) ;
	}
	
	// cout << endl ;
	// cout << "Result...." << endl ;
	// for(int i=0; i<n; ++i) {
		// cout << queries[i][0] << "," << queries[i][1] << "--" ;
	// }
	
	cout << endl ;
	
    ans = vowelStrings(words, queries) ;
	
	cout << "Result...." << endl ;
	for(int i=0; i<n; ++i) {
		cout << ans[i] << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}