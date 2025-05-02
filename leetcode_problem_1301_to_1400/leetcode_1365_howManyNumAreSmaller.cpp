
// 1365. HOW MANY NUMBERS ARE SMALLER THAN THE CURRENT NUMBER

#include<iostream>
#include<vector>

using namespace std ;

vector<int> smallerNumbersThanCurrent(vector<int> & nums){
	vector<int> ans{} ;
	int cnt ;
	for(int i=0; i<nums.size(); ++i){
		cnt = 0 ;
		for(int j=0; j<nums.size(); ++j){
			if(j != i){
				if(nums.at(i)>nums.at(j)){
					++cnt ;
				}
			}
		}
		ans.push_back(cnt) ;
	}
	return ans ;
}

int main()
{
    vector<int> nums{} ;
    vector<int> answer{} ;
	int e, l ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  HOW MANY NUMBERS ARE SMALLER THAN THE CURRENT NUMBER " << endl ;
	cout << " ------------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; i++)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	answer = smallerNumbersThanCurrent(nums) ;
	
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