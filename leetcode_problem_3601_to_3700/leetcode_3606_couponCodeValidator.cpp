
// 3606. COUPON CODE VALIDATOR

#include<iostream>
#include<vector>
#include<set>
#include<queue>

using namespace std ;

vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
	vector<string> ans ;
    priority_queue<pair<string, string>, vector<pair<string, string>>, greater<pair<string, string>>> pq ;
    set<string> validBusiness = {"electronics", "grocery", "pharmacy", "restaurant"} ;
    for(int i=0; i<code.size(); ++i) {
        if(!code[i].empty() && validBusiness.find(businessLine[i]) != validBusiness.end() && isActive[i]) {
            bool flag = true ;
            string c = code[i] ;
            for(int j=0; j<c.length(); ++j) {
                if(isalpha(c[j]) || isdigit(c[j]) || c[j] == '_') {
                    continue ;
                }
                flag = false ;
                break ;
            }
            if(flag == true) {
                pq.push({businessLine[i], code[i]}) ;
            }
        }
    }
    while(!pq.empty()) {
        ans.push_back(pq.top().second) ;
        pq.pop() ;
    }
    return ans ;
}

int main() {
	int n ;
	string s ;
	bool b ;
	vector<string> code, businessLine, ans ;
	vector<bool> isActive ;
	
	cout << endl ;
	cout << "  COUPON CODE VALIDATOR " << endl ;
	cout << " =======================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter codes......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> s ;
		code.push_back(s) ;
	}
	
	cout << endl ;
	cout << "Enter business line......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> s ;
		businessLine.push_back(s) ;
	}
	
	cout << endl ;
	cout << "Enter 0 or 1......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> b ;
		isActive.push_back(b) ;
	}
	
	ans = validateCoupons(code, businessLine, isActive) ;
	
	cout << endl ;
	cout << "[ " ;
	for(string& c : ans) {
		cout << "\"" << c << "\" " ;
	}
	cout << "]" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}