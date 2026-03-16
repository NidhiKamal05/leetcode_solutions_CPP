
// 692. TOP K FREQUENT WORDS

/** T.C. - O(N + MlogM) & S.C. - O(N) **/

// https://leetcode.com/problems/top-k-frequent-words/solutions/7651564/c-solution-by-nidhi_kamal-w347/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>

using namespace std ;

vector<string> topKFrequent(vector<string>& words, int k) {
	unordered_map<string, int> freq ;
    for(string word : words) {
        freq[word]++ ;
    }
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq ;
    for(auto f : freq) {
        pq.push({-f.second, f.first}) ;
    }
    vector<string> ans ;
    for(int i=0; i<k; ++i) {
        ans.push_back(pq.top().second) ;
        pq.pop() ;
    }
    return ans ;
}

int main() {
	string word ;
	vector<string> words, ans ;
	int k, n ;
	
	cout << endl ;
	cout << "  TOP K FREQUENT WORDS " << endl ;
	cout << " **********************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> word ;
		words.push_back(word) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = topKFrequent(words, k) ;
	
	cout << endl ;
	cout << "Top K Frequent Words....." << endl ;
	cout << "[ " ;
	for(string s : ans) {
		cout << "\"" << s << "\" " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*void Sort(vector<string>& v) {
	int n = v.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(v[i] > v[j]) {
				swap(v[i], v[j]) ;
			}
		}
	}
}*/