
// 1346. CHECK IF N AND ITS DOUBLE EXIST

#include<iostream>
#include<vector>

using namespace std ;

bool checkIfExist(vector<int> & arr){
	for(int i=0; i<arr.size(); ++i)
		for(int j=0; j<arr.size(); ++j)
				if((i != j) && (arr[i] == (2*arr[j])))
					return true ;
	return false ;
}

int main()
{
	vector<int> arr{} ;
	int len, e ;
	bool result ;
	
	cout << endl ;
	cout << "  CHECK IF N AND ITS DOUBLE EXIST " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		arr.push_back(e) ;
	}
	
    result = checkIfExist(arr) ;
	
	if(result == 1)
		cout << "TRUE..." << endl ;
	else
	    cout << "FALSE..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}