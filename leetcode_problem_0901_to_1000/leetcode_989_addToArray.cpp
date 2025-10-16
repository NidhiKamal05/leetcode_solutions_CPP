
// 989. ADD TO ARRAY-FORM OF INTEGER

#include<iostream>
#include<vector>

using namespace std ;

vector<int> addToArrayForm(vector<int>& num, int k) {
    int n = num.size() ;
    for(int i=n-1; i>=0; --i) {
        num[i] += k ;
        k = num[i] / 10 ;
        num[i] %= 10 ;
    }
    while(k > 0) {
        num.insert(num.begin(), k % 10) ;
        k /= 10 ;
    }
    return num ;
}

int main() {
	vector<int> num ;
	vector<int> res ;
	int n, k ;
	
	cout << endl ;
	cout << "  ADD TO ARRAY-FORM OF INTEGER " << endl ;
	cout << " ``````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> k ;
		num.push_back(k) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	cout << endl ;
	
    res = addToArrayForm(num, k) ;
	
	cout << "\nResult...." << endl ;
	for(int i=0; i<res.size(); ++i) {
		cout << " " << res[i] ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/** RUNTIME ERROR **/
/*
// void rev(vector<int>& arr) {
	// int i = 0, j = arr.size()-1 ;
	// while(i <= j) {
		// swap(arr[i++], arr[j--]) ;
	// }
// }

vector<int> addToArrayForm(vector<int>& num, int k) {
	vector<int> ans ;
	int x = 0 ;
	for(int n : num) {
		x = (x * 10) + n ;
	}
	x += k ;
	// cout << "x = " << x << endl ;
	while(x) {		
		ans.push_back(x % 10) ;
		x /= 10 ;
	}
	reverse(ans.begin(), ans.end()) ;
	// rev(ans) ;
	return ans ;
}*/