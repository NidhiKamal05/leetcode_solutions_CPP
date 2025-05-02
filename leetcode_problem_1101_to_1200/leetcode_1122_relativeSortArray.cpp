
// 1122. RELATIVE SORT ARRAY

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v)
{
	int temp ;
	for(int i=0; i<v.size()-1; ++i){
		for(int j=i+1; j<v.size(); ++j){
			if(v.at(i) > v.at(j)){
				temp = v.at(i) ;
				v.at(i) = v.at(j) ;
				v.at(j) = temp ;
			}
		}
	}
}

vector<int> relativeSortarray(vector<int> & arr1, vector<int> & arr2)
{
	vector<int> result{} ;
	for(int i=0; i<arr2.size(); ++i){
		for(int j=0; j<arr1.size(); ++j){
			if(arr2.at(i) == arr1.at(j)){
				result.push_back(arr2.at(i)) ;
				arr1.at(j) = -1 ;
			}
		}
	}
	// sort(arr1.begin(), arr1.end()) ;
	Sort(arr1) ;
	for(int i=0; i<arr1.size(); ++i){
		if(arr1.at(i) >= 0){
			result.push_back(arr1.at(i)) ;
		}
	}
	return result ;
}

int main()
{
	vector<int> arr1;
	vector<int> arr2;
	vector<int> result;
	int m, n ;
	int e ;
	
	vector<int> :: iterator it ;
	
	cout << "  RELATIVE SORT ARRAY " << endl ;
	cout << "``````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of array 1 : " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter elements of array 1......."  << endl ;
	for(int i=0; i<m; ++i)
	{
		cin >> e ;
		arr1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of array 2 : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of array 2......."  << endl ;
	for(int i=0; i<n; ++i)
	{
		cin >> e ;
		arr2.push_back(e) ;
	}
	
	cout << endl ;
	system("pause") ;
	
	result = relativeSortarray(arr1, arr2) ;
	
	cout << endl ;
	
	// if(!(nums1.empty()))
	// {
	    cout << "After Sorting....." << endl ;
	    cout << "{" ;
	    for(it=result.begin(); it<result.end()-1; ++it)
	    {
	    	cout << *it << ", " ;
	    }
	    cout << *it << "}" << endl ;
	// }
	// else
	// {
		// cout << "EMPTY VECTOR...." << endl ;
	// }
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}