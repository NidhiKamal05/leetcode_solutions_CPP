
// 2455. AVERAGE VALUE OF EVEN NUMBERS THAT ARE DIVISIBLE BY THREE

#include<iostream>
#include<vector>

using namespace std ;

int averageValue(vector<int>& nums) {
	int cnt = 0, sum = 0 ;
    for(int& num : nums) {
        if((num % 6) == 0) {
            ++cnt ;
            sum += num ;
        }
    }
    if(cnt == 0) {
        return 0 ;
    }
    return sum/cnt ;
}

int main()
{
	vector<int> nums ;
	int len, e ;
	
	cout << endl ;
	cout << "  AVERAGE VALUE OF EVEN NUMBERS THAT ARE DIVISIBLE BY THREE " << endl ;
	cout << " ```````````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array......... " << endl ;

	for(int j=0; j<len; ++j){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = averageValue(nums) ;
	
	cout << "Average Value = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}