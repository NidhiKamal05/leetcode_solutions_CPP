
// 2843. COUNT SYMMETRIC INTEGERS

#include<iostream>
#include<vector>

using namespace std ;

bool symmetricOrNot(int num) {
	vector<int> v ;
	while(num) {
		v.push_back(num%10) ;
		num /= 10 ;
	}
	if(v.size()%2 != 0) {
		return false ;
	}
	int i = 0, j = v.size()-1 ;
	int prefix = 0, suffix = 0 ;
	while(i < j) {
		prefix += v[i++] ;
		suffix += v[j--] ;
	}
	if(prefix == suffix) {
		return true ;
	}
	return false ;
}

int countSymmetricIntegers(int low, int high) {
	int cnt = 0 ;
	for(int num=low; num<=high; ++num) {
		if(symmetricOrNot(num)) {
			++cnt ;
		}
	}
	return cnt ;
}

int main(){
	int low, high, cnt ;
	
	cout << endl ;
	cout << "  COUNT SYMMETRIC INTEGERS " << endl ;
	cout << " ``````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter low : " ;
	cin >> low ;
	
	cout << endl ;
	cout << "Enter high : " ;
	cin >> high ;
	
	cout << endl ;
    cnt = countSymmetricIntegers(low, high) ;
	
	cout << "Count = " << cnt << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}