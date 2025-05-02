
// 2706. BUY TWO CHOCOLATES

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

int buyChoco(vector<int> & prices, int money){
	Sort(prices) ;
	int leftMoney ;
	// sort(prices.begin(), prices.end()) ;
	if(prices.at(0)+prices.at(1) <= money){
		leftMoney = money - (prices.at(0)+prices.at(1)) ;
		return leftMoney ;
	}
	return money ;
}

int main()
{
	vector<int> prices{} ;
	int len, e, money ;
	
	cout << endl ;
	cout << "  BUY TWO CHOCOLATES " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter prices..." << endl ;
	for(int i = 0; i < len; i++){
		cin >> e ;
		prices.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter money : " ;
	cin >> money ;
	
	cout << endl ;
    e = buyChoco(prices, money) ;
	
	cout << endl ;
	cout << "Left Money = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}
