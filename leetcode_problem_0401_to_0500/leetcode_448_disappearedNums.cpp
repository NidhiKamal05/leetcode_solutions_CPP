
// 448. FIND ALL NUMBERS DISAPPEARED IN AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

vector<int> findDisappearedNumbers(vector<int> & nums) {
	int n = nums.size() ;
	vector<bool> appeared(n, false) ;
	vector<int> ans ;
	for(auto i : nums)
		appeared.at(i-1) = true ;
	for(int i=0; i<n; ++i)
		if(!appeared.at(i))
			ans.push_back(i+1) ;
	return ans ;
}

int main() {
	vector<int> nums, result;
	int len, e;
	
	cout << endl ;
	cout << "  FIND ALL NUMBERS DISAPPEARED IN AN ARRAY  " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array....." << endl ;
	for(int i = 0; i < len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    result = findDisappearedNumbers(nums) ;
	
	cout << endl ;
	if(!result.empty())
        for(int i=0; i<result.size(); i++)
	    	cout << " " << result.at(i) << " " ;
	else
		cout << "NOT FOUND" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



// TIME LIMIT EXCEED //
/*vector<int> findDisappearedNumbers(vector<int> & nums){
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	int n = nums.size() ;
	vector<int> ans ;
	for(int i=1; i<=n; ++i){
		bool found = false ;
		for(int j=0; j<n; ++j){
			if(nums.at(j) > i)
				break ;
			if(nums.at(j) == i){
				found = true ;
				break ;
			}
		}
		if(!found)
			ans.push_back(i) ;
	}
	return ans ;
}*/

/*vector<int> findDisappearedNumbers(vector<int> & nums){
	int n = nums.size() ;
	vector<int> ans ;
	int j = 0 ;
	for(int i=1; i<=n && j<nums.size(); ++i){
		if(i != nums.at(j))
			ans.push_back(i) ;
		else
			++j ;
	}
	return ans ;
}*/

/*vector<int> findDisappearedNumbers(vector<int> & nums){
	vector<int> temp{} ;
	for(int i=1; i<=nums.size(); ++i)
		temp.push_back(i) ;
	for(int i=0; i<temp.size(); ++i){
		for(int j=0; nums.at(j)<=temp.at(i); ++j){
			
		}
	}
}*/

/*vector<int> findDisappearedNumbers(vector<int> & nums)
{
	vector<int> r{} ;
	int FLAG = 0 ;
	if(nums.size() == 1)
		return r ;
	for(int i=1; i<=nums.size(); ++i)
	{   
        FLAG = 0 ;
		for(int j=0; j<nums.size(); ++j)
		{
			if(i == nums.at(j))
			{
			    FLAG = 1 ;
				break ;
			}
		}
		if(FLAG != 1)
		{
			r.push_back(i) ;
		}
	}
	return r ;
}*/

// vector<int> findDisappearedNumbers(vector<int> & nums)
// {
	// vector<int> r{} ;
	// if(nums.size() == 1)
		// return r ;
	// int FLAG ;
	// for(int i=1; i<=nums.size(); ++i)
	// {
		// for(int j=i-1; j<nums.size(); ++j)
		// {
			// if(i != nums.at(j))
			// {
				// FLAG = 0 ;
				// break ;
			// }	
		// }
		// r.push_back() ;
	// }
// }

// vector<int> findDisappearedNumbers(vector<int> & nums)
// {
	// vector<int> r{} ;
	// if(nums.size() == 1)
		// return r ;
	// sort(nums.begin(), nums.end()) ;
	// Sort(nums) ;
	// for(int i=0; i<nums.size()-1; ++i)
	// {
		// if(nums.at(i+1) != nums.at(i)+1)
			// r.push_back(nums.at(i)+1) ;
	// }
	// return r ;
// }