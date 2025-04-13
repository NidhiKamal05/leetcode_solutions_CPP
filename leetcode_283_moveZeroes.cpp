
// 283. MOVE ZEROES

#include<iostream>
#include<vector>

using namespace std ;

void moveZeroes(vector<int> & nums){
	int c = 0 ;
	for(int i=0; i<nums.size(); ++i){
		if(nums.at(i) == 0){
		    nums.erase(nums.begin()+i, nums.begin()+i+1) ;
			--i ;
			++c ;
		}
	}
	for(int i=0; i<c; i++)
		nums.push_back(0) ;
}

/*void moveZeroes(vector<int> & nums){
	int c = 0, i = 0, j = nums.size()-1 ;
	while(i <= j){
		if(nums.at(i) == 0){
		    nums.erase(nums.begin()+i, nums.begin()+i+1) ;
			--i ;
			++c ;
		}
		if(nums.at(j) == 0){
		    // nums.erase(nums.begin()+j-1, nums.begin()+j) ;
		    nums.erase(nums.end()-2, nums.end()-1) ;
			++j ;
			++c ;
		}
		++i ;
		--j ;
	}
	for(int i=0; i<c; i++)
		nums.push_back(0) ;
}*/

int main()
{
	vector<int> nums{} ;
	int l, e ;
	
	cout << endl ;
	cout << "  MOVE ZEROES  " << endl ;
	cout << " --*********-- " << endl ;
	
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
	cout << *(nums.end()-1) ;
	cout << *(nums.begin()+4) ;
	moveZeroes(nums) ;
	
	cout << endl ;
	
	cout << "After moving zeroes...... " << endl ;
	for(int i=0; i<l; ++i)
	{
		cout << " " << nums.at(i) << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}