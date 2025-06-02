
// 135. CANDY

#include<iostream>
#include<vector>

using namespace std ;

int candy(vector<int>& ratings) {
    int n = ratings.size() ;
    vector<int> candies(n, 1) ;
    for(int i=1; i<n; ++i) {
        if(ratings[i] > ratings[i-1]) {
            candies[i] = candies[i-1]+1 ;
        }
    }
    for(int i=n-2; i>=0; --i) {
        if(ratings[i] > ratings[i+1]) {
            candies[i] = max(candies[i+1]+1, candies[i]) ;
        }
    }
	int sum = 0 ;
	for(int& candy : candies) {
		sum += candy ;
	}
	return sum ;
    // return accumulate(candies.begin(), candies.end(), 0) ;
}

int main() {
	int n, e ;
	vector<int> ratings ;
	
	cout << endl ;
	cout << "  CANDY " << endl ;
	cout << " ^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array : " ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		ratings.push_back(e) ;
	}
	
	e = candy(ratings) ;
	
	cout << endl ;
	cout << "Total no. candy = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}