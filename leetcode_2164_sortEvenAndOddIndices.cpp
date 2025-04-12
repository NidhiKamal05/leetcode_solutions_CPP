
// 2164. SORT EVEN AND ODD INDICES INDEPENDENTLY

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v)
{
	int t ;
	for(int i=0; i<v.size()-1; ++i)
	{
		for(int j=i+1; j<v.size(); ++j)
		{
			if(v.at(i) > v.at(j))
			{
				t = v.at(i) ;
				v.at(i) = v.at(j) ;
				v.at(j) = t ;
			}
		}
	}
}

vector<int> sortEvenOdd(vector<int> & nums){
    if(nums.size() == 2)
        return nums ;
    vector<int> even{} ;
    vector<int> odd{} ;
    vector<int> sorted{} ;
    for(int i=0; i<nums.size(); ++i)
    {
        if(i%2 == 0)
            even.push_back(nums.at(i)) ;
        else
            odd.push_back(nums.at(i)) ;
    }
    // sort(even.begin(); even.end()) ;
    // sort(odd.begin(); odd.end()) ;
    // reverse(odd.begin(); odd.end()) ;
    Sort(even) ;
    Sort(odd) ;
    // Reverse(odd) ;
    int j=0;
    int k=0;
    for(int i=0; i<nums.size(); ++i){
        if(i%2 == 0){
            // nums.at(i) = even.at(j) ;
            sorted.push_back(even.at(j)) ;
            ++j ;
        }
        else{
            // nums.at(i) = odd.at(k) ;
            sorted.push_back(odd.at(k)) ;
            ++k ;
        }
    }
    // return nums ;
    return sorted ;
}

int main()
{
	vector<int> nums;
	int l, e ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  SORT EVEN AND ODD INDICES INDEPENDENTLY " << endl ;
	cout << " `````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of array......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	system("pause") ;
	
	sortColors(nums) ;
	
	cout << endl ;
	cout << "After Sorting....." << endl ;
	cout << "[" ;
	for(it=nums.begin(); it<nums.end()-1; ++it)
	{
		cout << *it << ", " ;
	}
	cout << *it << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}