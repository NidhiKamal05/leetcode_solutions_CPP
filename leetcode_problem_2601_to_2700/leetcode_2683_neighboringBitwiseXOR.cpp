
// 2683. NEIGHBORING BITWISE XOR

#include<iostream>
#include<vector>

using namespace std ;

/*bool doesValidArrayExist(vector<int>& derived) {
    int XOR = 0 ;
    for(int& val : derived) {
        XOR ^= val ;
    }
    return XOR == 0 ;
}*/

bool doesValidArrayExist(vector<int>& derived) {
    int n = derived.size() ;
    vector<int> original(n) ;
    original[0] = 0 ;
    for(int i=1; i<n; ++i) {
        original[i] = derived[i-1] ^ original[i-1] ;
    }
    vector<int> a(n) ;
    for(int i=0; i<n-1; ++i) {
        a[i] = original[i] ^ original[i+1] ;
    }
    a[n-1] = original[n-1] ^ original[0] ;
    return derived == a ;
}

int main() {
	vector<int> derived ;
	int e, n ;
	bool ans ;
	
	cout << endl ;
	cout << "  NEIGHBORING BITWISE XOR " << endl ;
	cout << " `````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		derived.push_back(e) ;
	}
	
	cout << endl ;
    ans = doesValidArrayExist(derived) ;
	
	if(ans)
		cout << "TRUE....." << endl ;
	else
		cout << "FALSE....." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}