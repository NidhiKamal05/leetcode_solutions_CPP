
// 121. BEST TIME TO BUY AND SELL STOCK

#include<iostream>
#include<vector>

using namespace std ;

int maxProfit(vector<int> & prices) {
	int minPrice = INT_MAX, maxProfit = 0 ;
    for(int price: prices) {
        minPrice = min(minPrice, price) ;
        maxProfit = max(maxProfit, price-minPrice) ;
    }
    return maxProfit ;
}

int main() {
	vector<int> prices ;
	int l, e ;
	
	cout << endl ;
	cout << "  BEST TIME TO BUY AND SELL STOCK " << endl ;
	cout << " `````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		prices.push_back(e) ;
	}
	
	e = maxProfit(prices) ;
	
	cout << endl ;
	cout << "Max Profit = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** TIME LIMIT EXCEEDED **/
/*int maxProfit(vector<int> & prices) {
	int n = prices.size() ;
	int maximumProfit = 0 ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			maximumProfit = max(maximumProfit, prices[j]-prices[i]) ;
		}
	}
	return maximumProfit ;
}*/