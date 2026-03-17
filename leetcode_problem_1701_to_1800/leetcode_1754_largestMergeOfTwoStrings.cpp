
// 1754. LARGEST MERGE OF TWO STRINGS

/** T.C. - O((N + M) ^ 3) & S.C. - O(N + M) **/

/* C++ */
// https://leetcode.com/problems/largest-merge-of-two-strings/solutions/7654466/c-by-nidhi_kamal-2e41/

/* JAVA */
// https://leetcode.com/problems/largest-merge-of-two-strings/solutions/7654502/java-solution-by-nidhi_kamal-e13b/

#include<iostream>

using namespace std ;

string largestMerge(string word1, string word2) {
    if(word1.length() == 0 || word2.length() == 0) {
        return word1 + word2 ;
    }
    if(word1 > word2) {
        return word1[0] + largestMerge(word1.substr(1) , word2) ;
    }
    return word2[0] + largestMerge(word1, word2.substr(1)) ;
}

/* T.C. - O(N + M) */
/*string largestMerge(string word1, string word2) {
    string merge ;
    int i = 0, j = 0;
    int len1 = word1.length(), len2 = word2.length();
    while (i < len1 && j < len2) {
        if (word1.substr(i) > word2.substr(j)) {
            merge += (word1[i++]);
        } else {
            merge += (word2[j++]);
        }
    }
    return merge + word1.substr(i) + word2.substr(j) ;
}*/

int main() {
	string word1, word2, ans ;
	
	cout << endl ;
	cout << "  LARGEST MERGE OF TWO STRINGS " << endl ;
	cout << " ==============================" << endl ;
	
	cout << endl ;
	cout << "Enter a string, word1 = " ;
	cin >> word1 ;
	
	cout << endl ;
	cout << "Enter a string, word2 = " ;
	cin >> word2 ;
	
    ans = largestMerge(word1, word2) ;	
	
	cout << endl ;
	cout << "Largest Merge = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/**WRONG ANSWER**/
/**JAVA VERSION**/
/*class Solution {
    public String largestMerge(String word1, String word2) {
        StringBuilder merge = new StringBuilder() ;
        int len1 = word1.length(), len2 = word2.length() ;
        int i = 0, j = 0 ;
        while(i < len1 && j < len2) {
            if(word1.charAt(i) > word2.charAt(j)) {
                merge.append(word1.charAt(i++)) ;
            }
            else if(word1.charAt(i) < word2.charAt(j)) {
                merge.append(word2.charAt(j++)) ;
            }
            else {
                int i1 = i, j1 = j ;
                while(i1 < len1 && j1 < len2 && (word1.charAt(i1) == word2.charAt(j1))) {
                    ++i1 ;
                    ++j1 ;
                }
                if(i1 == len1) {
					merge.append(word1.charAt(j++)) ;
				}
				else if(j1 == len2) {
                    merge.append(word1.charAt(i++)) ;
                }
				else {
					if(word1.charAt(i1) > word2.charAt(j1)) {
						merge.append(word1.charAt(i++)) ;
					}
					else {
						merge.append(word2.charAt(j++)) ;
					}
				}                
            }
        }
        merge.append(word1.substring(i)).append(word2.substring(j)) ;
        return merge.toString() ;
    }
}*/

/*string largestMerge(string word1, string word2) {
    string merge ;
    int len1 = word1.length(), len2 = word2.length() ;
    int i = 0, j = 0 ;
    while(i < len1 && j < len2) {
        if(word1[i] > word2[j]) {
            merge += word1[i++] ;
        }
        else if(word1[i] < word2[j]) {
            merge += word2[j++] ;
        }
        else {
            int i1 = i, j1 = j ;
            while(i1 < len1 && j1 < len2 && (word1[i1] == word2[j1])) {
                ++i1 ;
                ++j1 ;
            }
            if(i1 == len1 || j1 == len2) {
                merge += (word1.substr(i) + word2.substr(j)) ;
                return merge ;
            }
            if(word1[i1] > word2[j1]) {
                merge += word1[i++] ;
            }
            else {
                merge += word2[j++] ;
            }
        }
    }
    merge += (word1.substr(i) + word2.substr(j)) ;
    return merge ;
}*/
