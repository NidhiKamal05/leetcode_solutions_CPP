
// 977. SQUARES OF A SORTED ARRAY

#include<iostream>
#include<vector> 
#include<cmath> 

using namespace std ;

void Sort(vector<int> & v)
{
	int temp ;
	for(int i=0; i<v.size()-1; ++i)	{
		for(int j=i+1; j<v.size(); ++j){
	    	if(v.at(j) < v.at(i)){
				temp = v.at(i) ;
				v.at(i) = v.at(j) ;
				v.at(j) = temp ;
			}
	    }
	}
}

vector<int> sortedSquares(vector<int> & nums)
{
	vector<int> s{} ;
	if(nums.size() == 1)
		s.push_back(pow(nums.at(0),2)) ;
	else
	    for(int i=0; i<nums.size(); ++i)
	    	s.push_back(pow(nums.at(i),2)) ;
	// sort(s.begin(), s.end()) ;
	Sort(s) ;
	return s ;
}

int main()
{
	vector<int> nums{};;
	vector<int> r{};
	int l, e ;
	
	vector<int> :: iterator it ;
	
	cout << " SQUARES OF A SORTED ARRAY " << endl ;
	cout << "```````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of array......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	r = sortedSquares(nums) ;
	
	cout << endl ;
	
	cout << "Squares....." << endl ;
	cout << "[" ;
	for(it=r.begin(); it<r.end()-1; ++it)
	{
		cout << *it << ", " ;
	}
	cout << *it << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}