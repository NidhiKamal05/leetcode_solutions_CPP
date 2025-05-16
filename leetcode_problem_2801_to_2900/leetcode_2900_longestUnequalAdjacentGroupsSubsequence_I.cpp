
// 2900. LONGEST UNEQUAL ADJACENT GROUPS SUBSEQUENCE I

#include<iostream>
#include<vector>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public List<String> getLongestSubsequence(String[] words, int[] groups) {
        List<String> longestSequence = new ArrayList<>() ;
        List<Integer> index = new ArrayList<>() ;
        index.add(0) ;
        for(int i=1; i<groups.length; ++i) {
            if(groups[i] != groups[index.get(index.size()-1)]) {
                index.add(i) ;
            }
        }
        for(int i=0; i<index.size(); ++i) {
            longestSequence.add(words[index.get(i)]) ;
        }
        return longestSequence ;
    }
}*/

vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
	vector<string> longestSequence ;
	vector<int> index ;
	index.push_back(0) ;
	//cout << endl << index[index.size()-1] << "-" ;
	for(int i=1; i<groups.size(); ++i) {
		if(groups[i] != groups[index[index.size()-1]]) {
			index.push_back(i) ;
			//cout << index[index.size()-1] << "-" ;
		}
	}
	for(int i=0; i<index.size(); ++i) {
		longestSequence.push_back(words[index[i]]) ;
	}
	return longestSequence ;
}

int main() {
	vector<int> groups ;
	vector<string> words, longestSequence ;
	string s ;
	int e, n ;
	
	cout << endl ;
	cout << "  LONGEST UNEQUAL ADJACENT GROUPS SUBSEQUENCE I " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter strings(a,b,c,...) in the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> s ;
		words.push_back(s) ;
	}
	
	cout << endl ;
	cout << "Enter elements(0,1) of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		groups.push_back(e) ;
	}
	
    longestSequence = getLongestSubsequence(words, groups) ;	
	
	cout << endl ;
	cout << "Longest Subsequence...... " << endl ;
	cout << "[ " ;
	for(string s : longestSequence) {
		cout << s << " " ;
	}
	cout << "]" ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}