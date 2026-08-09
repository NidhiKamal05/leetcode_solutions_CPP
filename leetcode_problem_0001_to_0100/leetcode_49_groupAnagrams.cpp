
// 49. GROUP ANAGRAMS

/** T.C. - O(N * KlogK) & S.C. - O(N * K) **/

/* C++ */
// https://leetcode.com/problems/group-anagrams/solutions/8451297/c-solution-beats-8852-by-nidhi_kamal-nggs/

/* JAVA */
// https://leetcode.com/problems/group-anagrams/solutions/8451330/java-runtime-beats-9928-hash-map-by-nidh-g204/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std ;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp ;
    for(string& s : strs) {
        string t = s ;
        sort(t.begin(), t.end()) ;
        mp[t].push_back(s) ;
    }
    vector<vector<string>> ans ;
    for(auto& m : mp) {            
        ans.push_back(m.second) ;
    }
    return ans ;
}

int main() {
	int n ;
	string word ;
	vector<string> strs ;
	vector<vector<string>> ans ;
	
	cout << endl ;
	cout << "  GROUP ANAGRAMS " << endl ;
	cout << " ----------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter strings in the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> word ;
		strs.push_back(word) ;
	}
	
	ans = groupAnagrams(strs) ;
	
	cout << endl ;
	cout << "Answer...." << endl ;
	cout << "[ " ;
	for(vector<string> v : ans) {
		cout << "[ " ;
		for(string s : v) {
			cout << "\"" << s << "\"" << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {		
        List<List<String>> ans = new ArrayList<>() ;		
        int n = strs.length ;		
        Set<String> st = new HashSet<>() ;
        for(String s : strs) {
            st.add(s) ;
        }		
        for(int i=0; i<n; ++i) {			
            if(!st.contains(strs[i])) {
                continue ;
            }			
            List<String> anagrams = new ArrayList<>() ;			
            anagrams.add(strs[i]) ;
            st.remove(strs[i]) ;			
            char[] charArray_1 = strs[i].toCharArray() ;
            Arrays.sort(charArray_1) ;
            String s1 = new String(charArray_1) ;			
            for(int j=i+1; j<n; ++j) {				
                char[] charArray_2 = strs[j].toCharArray() ;
                Arrays.sort(charArray_2) ;
                String s2 = new String(charArray_2) ;				
                if(s1.equals(s2)) {
                    anagrams.add(strs[j]) ;
                    st.remove(strs[j]) ;
                }				
            }			
            ans.add(anagrams) ;			
        }		
        return ans ;
    }	
}*/

/*vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans ;
    int n = strs.size() ;
    unordered_set<string> st ;
    for(string s : strs) {
        st.insert(s) ;
    }
    for(int i=0; i<n; ++i) {
        if(st.find(strs[i]) == st.end()) {
            continue ;
        }
        vector<string> anagrams ;
        anagrams.push_back(strs[i]) ;
        st.erase(strs[i]) ;
        string s1 = strs[i] ;
        sort(s1.begin(), s1.end()) ;
        for(int j=i+1; j<n; ++j) {
            string s2 = strs[j] ;
            sort(s2.begin(), s2.end()) ;
            if(s1 == s2) {
                anagrams.push_back(strs[j]) ;
                st.erase(strs[j]) ;
            }
        }
        ans.push_back(anagrams) ;
    }
    return ans ;
}*/