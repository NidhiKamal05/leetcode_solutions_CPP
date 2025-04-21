
// 238. PRODUCT OF ARRAY EXCEPT SELF

#include<iostream>
#include<vector>

using namespace std ;

vector<int> productExceptSelf(vector<int> & nums){
	int n = nums.size() ;
	vector<int> res{} ;
	vector<int> leftProducts ;
	vector<int> rightProducts(n) ;
	leftProducts.push_back(1) ;
	for(int i=1; i<n; ++i)
		leftProducts.push_back(leftProducts.at(i-1)*nums.at(i-1)) ;
	rightProducts.at(n-1) = 1 ;
	for(int i=n-2; i>=0; --i)
		rightProducts.at(i) = rightProducts.at(i+1)*nums.at(i+1) ;
	for(int i=0; i<n; ++i)
		res.push_back(leftProducts.at(i)*rightProducts.at(i)) ;
	return res ;
}

// TIME LIMIT EXCEEDED //
/*vector<int> productExceptSelf(vector<int> & nums){
	vector<int> answer{} ;	
	int leftProduct ;
	int rightProduct ;
	for(int i=0; i<nums.size(); ++i){
		leftProduct = 1 ;
		rightProduct = 1 ;
		for(int j=0; j<i; ++j)
		    leftProduct *= nums.at(j) ;
		for(int k=i+1; k<nums.size(); ++k)
		    rightProduct *= nums.at(k) ;
		answer.push_back(leftProduct*rightProduct) ;
	}
	return answer ;
}*/

// TIME LIMIT EXCEEDED //
/*vector<int> productExceptSelf(vector<int> & nums){
	vector<int> answer{} ;	
	for(int i=0; i<nums.size(); ++i){
		int x = 1 ;
		for(int j=0; j<nums.size(); ++j){
		    if((j == nums.size()-2)&&(i == nums.size()-1)){
				x *= nums.at(j) ;
				break ;
			}
		    if(i == j){
		    	++j ;
		    }
		    x *= nums.at(j) ;
	    }
		answer.push_back(x) ;
	}
	return answer ;
}*/

// int i, j, x ;
	// i = 0 ;
	// while(i < nums.size())
		
		// j = 0 ;
		
		// while(j < nums.size())
			
		    // ++j ;
			
		// ++i ;
		
		// if(answer.size() == nums.size())
		// {
			// break ;
		// }
		
int main()
{
    vector<int> nums{} ;
    vector<int> answer{} ;
	int e, k ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  PRODUCT OF ARRAY EXCEPT SELF  " << endl ;
	cout << " -------****************------- " << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> k ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<k; i++)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	answer = productExceptSelf(nums) ;
	
	cout << endl ;
	
	cout << "[" ;
	for(it=answer.begin(); it<answer.end()-1; ++it)
	{
		cout << *(it) << "," ;
	}
	cout << *(it) << "]"  << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}