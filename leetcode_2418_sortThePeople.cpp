
// 2418. SORT THE PEOPLE

#include<iostream>
#include<vector>
#include<cstring>

using namespace std ;

// void sortColors(vector<int> & nums)
// {
	// string temp ;
	// for(int i=0; i<heights.size()-1; ++i)
	// {
		// for(int j=i+1; j<heights.size(); ++j)
		// {
			// if(heights.at(i) < heights.at(j))
			// {
				// temp = names.at(i) ;
				// names.at(i) = names.at(j) ;
				// names.at(j) = temp ;
			// }
		// }
	// }
// }

vector<string> sortPeople(vector<string> & names, vector<int> & heights){
	string temp ;
	for(int i=0; i<heights.size()-1; ++i)
	{
		for(int j=i+1; j<heights.size(); ++j)
		{
			if(heights.at(i) < heights.at(j))
			{
				temp = names.at(i) ;
				names.at(i) = names.at(j) ;
				names.at(j) = temp ;
			}
		}
	}
	return names ;
}

int main()
{
	vector<int> heights;
	vector<string> names;
	int l, e ;
	string n ;
	
	vector<string> :: iterator it ;
	
	cout << endl ;
	cout << "  SORT THE PEOPLE " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter heights......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		heights.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter names......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> n ;
		names.push_back(n) ;
	}
	
	names = sortPeople(names, heights) ;
	
	cout << endl ;
	cout << "After Sorting....." << endl ;
	cout << "[" ;
	for(it=names.begin(); it<names.end()-1; ++it)
	{
		cout << *it << ", " ;
	}
	cout << *it << "]" << endl ;
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}