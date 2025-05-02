
// 1550. THREE CONSECUTIVE ODDS

#include<iostream>
#include<vector>

using namespace std ;

bool threeConsecutiveOdds(vector<int> & arr){
	if(arr.size() < 3)
		return false ;
	else
		for(int i=0; i<arr.size()-2; ++i)
			if(((arr.at(i)%2) != 0)&&((arr.at(i+1)%2) != 0)&&((arr.at(i+2)%2) != 0))
				return true ;
	return false ;
}

int main()
{
	vector<int> arr ;
	int l, e ;
	bool result ;
	
	cout << endl ;
	cout << "  THREE CONSECUTIVE ODDS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elemrnts of the array......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		arr.push_back(e) ;
	}
	
	result = threeConsecutiveOdds(arr) ;
	
	cout << endl ;
	if(result == 1)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}