
// 3024. TYPE OF TRIANGLE

#include<iostream>
#include<vector>
#include<cstring>

using namespace std ;

string triangleType(vector<int>& nums) {
    int x = nums.at(0) ;
    int y = nums.at(1) ;
    int z = nums.at(2) ;

    string type ;

    if(((x+y)<=z) || ((y+z)<=x) || ((z+x)<=y))
        type = "none" ;
    else if((x==y)&&(y==z))
        type = "equilateral" ;
    else if((x==y) || (y==z) || (z==x))
        type = "isosceles" ;
    else
        type = "scalene" ;
        
    return type ;
}

/*string triangleType(vector<int> & nums){
	int x = nums.at(0) ;
	int y = nums.at(1) ;
	int z = nums.at(2) ;
	string type ;
	if((x==y)&&(y==z)){
		type = "equilateral" ;
	}
	if(((x+y)>z)&&((y+z)>x)&&((z+x)>y)){
		if(((x==y)&&(y!=z)) || ((y==z)&&(z!=x)) || ((z==x)&&(x!=y))){
			type = "isosceles" ;
		}
        if(((x!=y)&&(y!=z)) || ((y!=z)&&(z!=x)) || ((z!=x)&&(x!=y))){
			type = "scalene" ;
		}		
	}
	return type ;
}*/

int main()
{
	int l = 3, e;
	vector<int> nums{};
	string type ;
	
	cout << endl ;
	cout << "  TYPE OF TRIANGLE  " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~ " << endl ;
	
	// cout << "Enter size of the array : " ;
	// cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i < l; i++)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
    type = triangleType(nums) ;	
	
	cout << "Type = " << type << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}