
// 287. FIND THE DUPLICATE NUMBER

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v)
{
	int t ;
	for(int i=0; i<v.size()-1; ++i){
		for(int j=v.size()-1; j>i; --j){
			if(v.at(j) < v.at(j-1)){
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
}

int findDuplicate(vector<int> & nums){
    vector<int> temp{} ;
    int duplicate ;
    int i=0, j=nums.size()-1 ;
    while(i <= j){
        if(i == j)
            temp.push_back(nums.at(i)) ;
        else{
            temp.push_back(nums.at(i)) ;
            temp.push_back(nums.at(j)) ;
        }
        ++i ;
        --j ;
    }
    // sort(temp.begin(),temp.end()) ;
    Sort(temp) ;
    for(int i=0; i<temp.size()-1; ++i){
        if(temp.at(i) == temp.at(i+1)){
            duplicate = temp.at(i) ;
            break ;
        }
    }
    return duplicate ;
}

int main()
{
	vector<int> nums{} ;
	int l, e, duplicate ;
	
	cout << endl ;
	cout << "  FIND THE DUPLICATE NUMBER  " << endl ;
	cout << " --------------------------- " << endl ;
	
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
	
	duplicate = findDuplicate(nums) ;
	
	cout << endl ;
	
	cout << "Duplicate number = " << duplicate << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}