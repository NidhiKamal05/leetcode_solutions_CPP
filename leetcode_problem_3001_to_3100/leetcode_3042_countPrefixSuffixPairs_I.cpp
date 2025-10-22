
// 3042. COUNT PREFIX AND SUFFIX PAIRS I

#include<iostream>
#include<vector>

using namespace std ;

int countPrefixSuffixPairs(vector<string>& words) {
    int cnt = 0, n = words.size() ;
    for(int i=0; i<n-1; ++i) {
        for(int j=i+1; j<n; ++j) {
            string str1 = words[i] ;
            string str2 = words[j] ;
            if(str1.size() > str2.size()) {
                continue ;
            }
            if(str2.find(str1) == 0 && str2.rfind(str1) == str2.size() - str1.size()) {
                ++cnt ;
            }
        }
    }
    return cnt ;
}

int main() {
	string s ;
	vector<string> words ;
	int n ;
	
	cout << endl ;
	cout << "  COUNT PREFIX AND SUFFIX PAIRS I " << endl ;
	cout << " `````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter strings...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> s ;
		words.push_back(s) ;
	}
	
	cout << endl ;
    n = countPrefixSuffixPairs(words) ;
	
	cout << "Count = " << n << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*
bool isPrefix(string pref, string s) {
	int i = 0 ;
	while(i<pref.length() && i<s.length()) {
		if(s[i] != pref[i]) {
			return false ;
		}
		++i ;
	}
	if(i != pref.length()) {
		return false ;
	}
	return true ;
}

bool isSuffix(string suff, string s) {
	int i = suff.length()-1 ;
	while(i>=0 && i>=0) {
		if(s[i] != suff[i]) {
			return false ;
		}
		--i ;
	}
	if(i != -1) {
		return false ;
	}
	return true ;
}

int countPrefixSuffixPairs(vector<string>& words) {
	int cnt = 0 ;
	int n = words.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			bool ans1 = isPrefix(words[i], words[j]) ;
			bool ans2 = isSuffix(words[i], words[j]) ;
			if(ans1 && ans2) {
				++cnt ;
			}
		}
	}
	return cnt ;
}
*/