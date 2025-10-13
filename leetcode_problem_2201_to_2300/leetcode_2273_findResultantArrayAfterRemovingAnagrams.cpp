
// 2273. FIND RESULTANT ARRAY AFTER REMOVING ANAGRAMS

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public List<String> removeAnagrams(String[] words) {
        int n = words.length ;
        List<String> anagrams = new ArrayList<>(n) ;
        List<Integer> index = new ArrayList<>() ;
        for(int i=0; i<n; ++i) {
            char[] chars = words[i].toCharArray() ;
            Arrays.sort(chars) ;
            anagrams.add(i, new String(chars)) ;
            if(i != 0 && anagrams.get(i).equals(anagrams.get(i-1))) {
                index.add(i) ;
            }
        }
        anagrams.clear() ;
        for(int i=0; i<n; ++i) {
            if(index.contains(i)) {
                continue ;
            }
            anagrams.add(words[i]) ;
        }
        return anagrams ;
    }
}*/

vector<string> removeAnagrams(vector<string>& words) {
    int n = words.size() ;
    vector<string> anagrams(n) ;
    vector<int> index ;
    for(int i=0; i<n; ++i) {
        anagrams[i] = words[i] ;
        sort(anagrams[i].begin(), anagrams[i].end()) ;
        if(i != 0 && anagrams[i] == anagrams[i-1]) {
            index.push_back(i) ;
        }
    }
    anagrams.clear() ;
    for(int i=0; i<n; ++i) {
        if(find(index.begin(), index.end(), i) != index.end()) {
            continue ;
        }
        anagrams.push_back(words[i]) ;
    }
    return anagrams ;
}

int main() {
	int n ;
	string word ;
	vector<string> words, result ;
	
	cout << endl ;
	cout << "  FIND RESULTANT ARRAY AFTER REMOVING ANAGRAMS " << endl ;
	cout << " ----------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter words...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> word ;
		words.push_back(word) ;
	}
	
	result = removeAnagrams(words) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(string word : result) {
		cout << word << " " ;
	}
	cout << "]" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}