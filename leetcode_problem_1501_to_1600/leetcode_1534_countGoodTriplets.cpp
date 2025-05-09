
// 1534. COUNT GOOD TRIPLETS

#include<iostream>
#include<vector>

using namespace std ;

int countGoodTriplets(vector<int> & arr, int a, int b, int c){
	int cnt = 0 ;
	for(int i=0; i<arr.size()-2; ++i)
		for(int j=i+1; j<arr.size()-1; ++j)
			for(int k=j+1; k<arr.size(); ++k)
				if(abs(arr[i]-arr[j]) <= a)
					if(abs(arr[j]-arr[k]) <= b)
						if(abs(arr[i]-arr[k]) <= c)
							++cnt ;
	return cnt ;
}

int main()
{
	vector<int> arr{} ;
	int len, e, a, b, c ;
	
	cout << endl ;
	cout << "  COUNT GOOD TRIPLETS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array..." << endl ;
	for(int i = 0; i < len; i++){
		cin >> e ;
		arr.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter three integers.....\n" ;
	cout << "a = " ; cin >> a ;
	cout << "b = " ; cin >> b ;
	cout << "c = " ; cin >> c ;
	
	cout << endl ;
    e = countGoodTriplets(arr, a, b, c) ;
	
	cout << endl ;
	cout << "No. of good triplets = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}
