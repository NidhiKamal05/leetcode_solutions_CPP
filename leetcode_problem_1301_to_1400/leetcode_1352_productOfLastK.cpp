
// 1352. PRODUCT OF THE LAST K NUMBERS

#include<iostream>
#include<vector>

using namespace std ;

class ProductOfNumbers {
private:
	vector<int> prefixProduct ;
    int product ;
public:
	ProductOfNumbers() {
        product = 1 ;
	}
	
	void add(int num) {
        if(num == 0) {
            prefixProduct.clear() ;
            product = 1 ;
        }
        else {
            product *= num ;
		    prefixProduct.push_back(product) ;
        }
	}
	
	int getProduct(int k) {
        int arrSize = prefixProduct.size() ;
		if(arrSize < k) {
            return 0 ;
        }
        if(arrSize == k) {
            return prefixProduct[arrSize-1] ;
        }
        return prefixProduct[arrSize-1] / prefixProduct[arrSize-k-1] ;
	}
} ;

int main()
{
	ProductOfNumbers p ;
	int num, k, n = 0 ;
	
	cout << endl ;
	cout << "  PRODUCT OF THE LAST K NUMBERS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "1. ADD" << endl ;
	cout << "2. GET PRODUCT" << endl ;
	cout << "3. EXIT" << endl ;
	
	cout << "Enter any choice...." << endl ;
	cin >> n ;
	
	while(n != 3) {		
	
		cout << "Enter any choice...." << endl ;
		cin >> n ;
		
		switch(n) {
			case 1 :
				cout << "Enter a number, num = " ;
				cin >> num ;
				p.add(num) ;
				break ;
				
			case 2 : 
				int res ;
				cout << "Enter a number, k = " ;
				cin >> k ;
				res = p.getProduct(k) ;
				cout << "Product = " << res << endl ;
				break ;
				
			case 3 :
				exit(1) ;
				
			default : 
				cout << "Wrong Input...." << endl ;
		}
		
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}