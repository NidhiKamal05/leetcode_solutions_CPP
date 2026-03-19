
// 2284. SENDER WITH LARGEST WORD COUNT

/** T.C. - O(N * M) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/sender-with-largest-word-count/solutions/7669254/c-solution-hash-map-on-m-by-nidhi_kamal-oc1b/

/* JAVA */
// https://leetcode.com/problems/sender-with-largest-word-count/solutions/7669472/java-by-nidhi_kamal-mp9y/

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    private int wordCount(String s) {
        int cnt = 0 ;
        for(char c : s.toCharArray()) {
            if(c == ' ') {
                ++cnt ;
            }
        }
        return ++cnt ;
    }
    public String largestWordCount(String[] messages, String[] senders) {
        String ans = "" ;
        int maxCnt = 0 ;
        Map<String, Integer> wordCnt = new HashMap<>() ;
        for(int i=0; i<senders.length; ++i) {
            int cnt = wordCount(messages[i]) ;
            wordCnt.put(senders[i], wordCnt.getOrDefault(senders[i], 0) + cnt) ;
        }
        for(Map.Entry<String, Integer> entry : wordCnt.entrySet()) {
            if(entry.getValue() > maxCnt) {
                maxCnt = entry.getValue() ;
                ans = entry.getKey() ;
            }
            else if(entry.getValue() == maxCnt) {
                if(entry.getKey().compareTo(ans) > 0) {
                    ans = entry.getKey() ;
                }
            }
            else {
                continue ;
            }
        }
        return ans ;
    }
}*/

int wordCount(string s) {
	int cnt = 0 ;
	for(int i=0; i<s.length(); ++i) {
		if(s[i] == ' ') {
			++cnt ;
		}
	}
	return ++cnt ;
}

string largestWordCount(vector<string>& messages, vector<string>& senders) {
	int maxCnt = 0 ;
	map<string, int, greater<string>> wordCnt ;
	for(int i=0; i<senders.size(); ++i) {
		int cnt = wordCount(messages[i]) ;
		wordCnt[senders[i]] += cnt ;
	}
	for(auto wc : wordCnt) {
		maxCnt = max(maxCnt, wc.second) ;
	}
	for(auto wc : wordCnt) {
		if(wc.second == maxCnt) {
			return wc.first ;
		}
	}
	return "" ;
}

int main() {
	string sentence, sender ;
	vector<string> messages, senders ;
	int n ;
	
	cout << endl ;
	cout << "  SENDER WITH LARGEST WORD COUNT " << endl ;
	cout << " ********************************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter messages in the array...." << endl ;
	for(int i=0; i<n; ++i) {
		getline(cin, sentence) ;
		messages.push_back(sentence) ;
		cout << "==" << messages[i] << endl ;
	}
	
	cout << endl ;
	cout << "Enter senders name in the array...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> sender ;
		senders.push_back(sender) ;
	}
	
	sender = largestWordCount(messages, senders) ;
	
	cout << endl ;
	cout << "Sender with largest word count = " << sender << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}