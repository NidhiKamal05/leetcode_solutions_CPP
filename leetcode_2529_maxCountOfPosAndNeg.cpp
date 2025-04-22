
// 2529. MAXIMUM COUNT OF POSITIVE AND NEGATIVE INTEGERS

#include<iostream>
#include<vector>

using namespace std ;

int maximumCount(vector<int> & nums){
	int pos = 0, neg = 0 ;
	for(int num : nums){
		if(num > 0)
			++pos ;
		if(num < 0)
			++neg ;
	}
	return max(pos, neg) ;
}

int main()
{
	vector<int> nums{} ;
	int l, e, count ;
	
	cout << endl ;
	cout << "  MAXIMUM COUNT OF POSITIVE AND NEGATIVE INTEGERS  " << endl ;
	cout << " ================================================= " << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	count = maximumCount(nums) ;
	
	cout << endl ;
	
	cout << "Maximum Count = " << count << endl ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*int maximumCount(vector<int> & nums)
{
	int i = 0 ;
	int j = nums.size()-1 ;
	int pos = 0 ;
	int neg = 0 ;
	// if(nums.size()==1)
	// {
		
	// }
	if(nums.at(i)>0)
	{
		pos = nums.size()-1 ;
		return pos ;
	}
	if(nums.at(j)<0)
	{
		neg = nums.size()-1 ;
		return neg ;
	}
	if((nums.at(i)==0)&&(nums.at(j)==0))
	{
		return 0 ;
	}
	while(i < j)
	{
		if(nums.at(i)<0)
			++neg ;
		if(nums.at(j)>0)
			++pos ;
		// if((nums.at(i)<0)&&(nums.at(j)<0))
			// neg += 2 ;
		// else if((nums.at(i)<0)||(nums.at(j)<0))
			// ++neg ;
		// if((nums.at(i)>0)&&(nums.at(j)>0))
			// pos += 2 ;
		// else if((nums.at(i)>0)||(nums.at(j)>0))
			// ++pos ;
		// ++i;
		// --j ;
	}
	// if((nums.at(i)>0)&&((nums.size()%2) == 0))
		// ++pos ;
	// if((nums.at(j)<0)&&((nums.size()%2) == 0))
		// ++neg ;
	if(pos > neg)
		return pos ;
	else
	    return neg ;

// if(nums.size()==1){
            // if((nums.at(0)<0)||(nums.at(0)>0)){
                // return 1 ;
            // }
            // else{
                // return 0 ;
            // }
        // }

        // int i = 0 ;
	    // int j = nums.size()-1 ;
	    // int pos = 0 ;
	    // int neg = 0 ;
	// while(i < j)
	// {
		// if((nums.at(i)<0)&&(nums.at(j)<0))
			// neg += 2 ;
		// else if((nums.at(i)<0)||(nums.at(j)<0))
			// ++neg ;
		// if((nums.at(i)>0)&&(nums.at(j)>0))
			// pos += 2 ;
		// else if((nums.at(i)>0)||(nums.at(j)>0))
			// ++pos ;
		// ++i;
		// --j ;
	// }
	// if(pos > neg)
		// return pos ;
	// else
	    // return neg ;	
}*/

// if(nums.at(i)>0)
	// pos += 2 ;
// if(nums.at(j)<0)
	// neg += 2 ;