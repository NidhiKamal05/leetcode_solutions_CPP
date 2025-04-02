
// 1486. XOR OPERATION IN AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

// int xorOperation(int n, int start)
// {
	// int r ;
	// vector<int> nums{} ;
	// for(int i=0; i<n; ++i)
		// nums.push_back(start+2*i) ;
	// if(nums.size()==1)
		// r = nums.at(0) ;
	// else
	// {
	    // r = nums.at(0)^nums.at(1) ;
	    // for(int i=2; i<nums.size(); ++i)
			// r ^= nums.at(i) ;
	// }
	// return r ;
// }

int xorOperation(int n, int start)
{
	int r ;
	if(n == 1)
		r = start ;
	else 
	{
	    int i = 0 ;
	    r = (start+2*i)^(start+2*(i+1)) ;
	    for(i=2; i<n; ++i)
	    	r ^= (start+2*i) ;
	}
	return r ;
}

int main()
{
	int n, start ;
	int r ;
	
	cout << endl ;
	cout << " XOR OPERATION IN AN ARRAY " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "n = " ;
	cin >> n ;
	cout << "start = " ;
	cin >> start ;
	
	r = xorOperation(n, start) ;
	
	cout << endl ;
	cout << "XOR = " << r ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}