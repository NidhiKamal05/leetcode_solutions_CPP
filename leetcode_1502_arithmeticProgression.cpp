
// 1502. CAN MAKE ARITHMETIC PROGRESSION

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

bool canMakeArithmeticProgression(vector<int> & arr){
	Sort(arr) ;
	// sort(arr.begin(), arr.end()) ;
	int d = arr.at(1)-arr.at(0) ;
	for(int i=0; i<arr.size()-1; ++i){
		if((arr.at(i+1)-arr.at(i)) != d)
			return false ;
	}
	return true ;
}

int main()
{
	int l, e;
	vector<int> arr{};
	bool isAP ;
	
	cout << endl ;
	cout << "  CAN MAKE ARITHMETIC PROGRESSION  " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i < l; i++)
	{
		cin >> e ;
		arr.push_back(e) ;
	}
	
    isAP = canMakeArithmeticProgression(arr) ;	
	
	if(isAP == 1)
	    cout << "Is AP : TRUE...." << endl ;
	else
		cout << "Is AP : FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}