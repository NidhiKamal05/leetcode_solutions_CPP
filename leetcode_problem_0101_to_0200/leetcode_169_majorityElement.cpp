
// 169. MAJORITY ELEMENT

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int majorityElement(vector<int> & nums) {
	int n = nums.size() ;
	map<int, int> mp ;
	for(int i : nums)
		mp[i]++ ;
	map<int, int> :: iterator it ;
	for(it=mp.begin(); it!=mp.end(); ++it)
		if(it->second > (n/2))
			break ;
	return it->first ;
}

int main()
{
	vector<int> nums{} ;
	int l, k ;
	
	cout << endl ;
	cout << "  MAJORITY ELEMENT  " << endl ;
	cout << " ----**********---- " << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i) {
		cin >> k ;
		nums.push_back(k) ;
	}
	
	k = majorityElement(nums) ;
	
	cout << endl ;
	
	cout << "Majority element = " << k << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*int majorityElement(vector<int> & nums)
{
	if(nums.size()>0){
	    int n = (nums.size()/2) ;
	    int count ;
	    
	    Sort(nums) ;
	    // sort(nums.begin(), nums.end()) ;
		
	    if(nums.size()>1){
	        for(int i=0,j=1; i<nums.size()-2,j<nums.size()-1; ++i,++j){
				count = 1 ;
	        	if(nums.at(i) == nums.at(j)){
	        		count++ ;
					if(count > n){
	        		    return nums.at(i) ;
	        	    }
	        	}
	        }
	    }
	    else if(nums.size() == 1){
	    	return nums.front() ;
	    }
	    else{
	        return 0 ;
	    }
	}
	return 0 ;
}*/