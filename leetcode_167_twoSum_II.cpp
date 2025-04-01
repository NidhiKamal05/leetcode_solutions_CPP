
// 167. TWO SUM II - INPUT ARRAY IS SORTED

#include<iostream>
#include<vector>

using namespace std ;

vector<int> twoSum(vector<int>& numbers, int target)
{
	vector<int> r{} ;	
	int i, j ;
	i = 0 ;
	j = numbers.size()-1 ;
	while(i < j) 
	{
	    if((numbers.at(i)+numbers.at(j)) > target)
	    {
	    	--j ;
	    }
	    else if((numbers.at(i)+numbers.at(j)) < target)
	    {
	    	++i ;
	    }
		else
		{
			r.push_back(i+1) ;
			r.push_back(j+1) ;
			return r ;
		}
	}
	return r ;
}

int main()
{
	vector<int> nums{}, pos{} ;
	
	int len, n, target ;
	
	cout << endl ;
	
	cout << "  TWO SUM II - INPUT ARRAY IS SORTED" << endl ;
	cout << "  --------*******************--------" ;
	cout << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << "\nEnter elements of the array......" << endl ;
	for(int i=0; i<len; i++)
	{
		cin >> n ;
		nums.push_back(n) ;
	}
	
	cout << "\nEnter target number : " ;
    cin >> target ;
	
	pos = twoSum(nums, target) ;
	
	if(!pos.empty()){
        cout << "Positions = {" << pos.at(0) << ',' << pos.at(1) << '}' << endl ;
	}
	else{
		cout << "NOT FOUND" << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*vector<int> Sort(vector<int>  v)
{
	int t ;
	for(int i=0; i<v.size()-1; ++i)
	{
		for(int j=v.size()-1; j>i; --j)
		{
			if(v.at(j) < v.at(j-1))
			{
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
	return v ;
}*/
	
	// nums = Sort(nums) ;
	//sort(nums.begin(), nums.end()) ;
	
// if(nums.at(j)+nums.at(j+1))
			// {
				// r.push_back(j) ;
			    // r.push_back(j+1) ;
			    // return r ;
			// }
			// else
			// {
	    	    // --j ;
			// }
// if(nums.at(i-1)+nums.at(i))
			// {
				// r.push_back(i-1) ;
			    // r.push_back(i) ;
			    // return r ;
			// }
			// else
			// {
	    	    // ++i ;
			// }