
// 1013. PARTITION ARRAY INTO THREE PARTS WITH EQUAL SUM

#include<iostream>
#include<vector>

using namespace std ;

bool canThreePartsEqualSum(vector<int>& arr) {
	int sum = accumulate(arr.begin(), arr.end(), 0) ;
    if(sum%3 != 0) {
        return false ;
    }
    int j = 0, cnt = 0 ;
    for(int i=0; i<3; ++i) {
        int s = 0 ;
        while(j < arr.size()) {
            s += arr[j++] ;
            if(s == (sum/3)) {
                ++cnt ;
                break ;
            }
        }
    }
    if(cnt == 3) {
        return true ;
    }
    return false ;
}

int main(){
	vector<int> arr ;
	int l, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  PARTITION ARRAY INTO THREE PARTS WITH EQUAL SUM " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;	
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		arr.push_back(e) ;
	}
	
	ans = canThreePartsEqualSum(arr) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}