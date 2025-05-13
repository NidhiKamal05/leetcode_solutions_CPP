
// 2094. FINDING 3-DIGIT EVEN NUMBERS

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

vector<int> findEvenNumbers(vector<int>& digits) {
    vector<int> ans ;
    int n = digits.size() ;
    unordered_set<int> set ;
    for(int i=0; i<n; ++i) {
        if(digits[i] == 0) {
            continue ;
        }
        for(int j=0; j<n; ++j) {
            for(int k=0; k<n; ++k) {
                if(digits[k]%2 != 0 || i == j || j == k || i == k) {
                    continue ;
                }
                int num = digits[i]*100 + digits[j]*10 + digits[k] ;
                set.insert(num) ;
            }
        }
    }
    for(auto& num : set) {
        ans.push_back(num) ;
    }
    sort(ans.begin(), ans.end()) ;
    return ans ;
}

int main() {
	vector<int> digits, result ;
	int n, e ;
	
	cout << endl ;
	cout << "  FINDING 3-DIGIT EVEN NUMBERS " << endl ;
	cout << " ------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of array..... " << endl ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<n; ++i) {
	    cin >> e ;
	    digits.push_back(e) ;
	}
	
	result = findEvenNumbers(digits) ;
	
	cout << endl ;
	cout << "Resultant array....." << endl ;
	cout << "[ " ;
	for(int& r : result) {
	    cout << r << " " ;
	}cout << "]" ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}