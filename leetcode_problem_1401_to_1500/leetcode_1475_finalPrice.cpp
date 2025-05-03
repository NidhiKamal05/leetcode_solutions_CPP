
// 1475. FINAL PRICES WITH A SPECIAL DISCOUNT IN A SHOP

#include<iostream>
#include<vector>

using namespace std ;

vector<int> finalPrice(vector<int> & prices) {
	int n = prices.size() ;
    for(int i=0; i<n-1; ++i) {
        int minPrice = 0 ;
        for(int j=i+1; j<n; ++j) {
            if(prices[j] <= prices[i]) {
                minPrice = prices[j] ;
                break ;
            }
        }
        prices[i] -= minPrice ;
    }
    return prices ;
}

int main() {
	vector<int> prices, afterDiscount ;
	int l, e ;
	
	cout << endl ;
	cout << "  FINAL PRICES WITH A SPECIAL DISCOUNT IN A SHOP " << endl ;
	cout << " ````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		prices.push_back(e) ;
	}
	
	afterDiscount = finalPrice(prices) ;
	
	cout << endl ;
	cout << "Final prices after discount....." << endl ;
	for(int i=0; i<l; ++i){
		cout << " " << afterDiscount[i] << " " ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}