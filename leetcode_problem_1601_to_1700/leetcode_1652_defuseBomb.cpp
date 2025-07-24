
// 1652. DEFUSE THE BOMB

#include<iostream>
#include<vector>

using namespace std ;

vector<int> decrypt(vector<int>& code, int k) {
    int n = code.size() ;
    vector<int> ans(n, 0) ;
    if(k == 0) {
        return ans ;
    }
    for(int i=0; i<n; ++i) {
        if(k > 0) {
            for(int j=i+1; j<=i+k; ++j) {
                ans[i] += (code[j % n]) ;
            }
        }
        else {
            for(int j=i-abs(k); j<i; ++j) {
                ans[i] += (code[(j + n) % n]) ;
            }
        }
    }
    return ans ;
}

int main(){
	vector<int> code ;
	vector<int> arr ;
	int k, l, e ;
	
	cout << endl ;
	cout << "  DEFUSE THE BOMB " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter size of the array...." << endl ;
	cin >> l ;
	
	cout << endl ;	
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		code.push_back(e) ;
	}
	
	cout << endl ;	
	cout << "k = " ;
	cin >> k ;
	
	arr = decrypt(code, k) ;
	
	cout << endl ;
	cout << "Bomb is defused...." << endl ;
	for(int i=0; i<arr.size(); ++i)
		cout << " " << arr.at(i) << " " ;
	
	cout << endl << endl ;
	system("pause") ;
	
	return 0 ;
}