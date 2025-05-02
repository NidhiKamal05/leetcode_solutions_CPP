
// 1460. MAKE TWO ARRAYS EQUAL BY REVERSING SUBARRAYS

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

/*bool canBeEqual(vector<int> & target, vector<int> & arr){
	Sort(target) ;
	Sort(arr) ;
	// sort(target.begin(), target.end()) ;
	// sort(arr.begin(), arr.end()) ;
	return target == arr ;
}*/

bool canBeEqual(vector<int> & target, vector<int> & arr){
	Sort(target) ;
	Sort(arr) ;
	// sort(target.begin(), target.end()) ;
	// sort(arr.begin(), arr.end()) ;
	for(int i=0,j=arr.size()-1; i<=j; ++i,--j)
		if((target.at(i) != arr.at(i))||(target.at(j) != arr.at(j)))
			return false ;
	return true ;
}

int main()
{
	vector<int> arr;
	vector<int> target;
	int l, e ;
	bool res ;
	
	cout << endl ;
	cout << "  MAKE TWO ARRAYS EQUAL BY REVERSING SUBARRAYS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of target......."  << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		target.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter elements of array......."  << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		arr.push_back(e) ;
	}
	
	cout << endl ;	
	res = canBeEqual(target, arr) ;
	
	if(res == 1)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}