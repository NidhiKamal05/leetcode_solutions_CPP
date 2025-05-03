
// 1295. FIND NUMBERS WITH EVEN NUMBER OF DIGITS

#include<iostream>
#include<vector>

using namespace std ;

bool hasEvenDigits(int num) {
    int digitCount = 0 ;
    while(num) {
        ++digitCount ;
        num /= 10 ;
    }
    if(digitCount%2 == 0)
        return true ;
    return false ;
}

int findNumbers(vector<int>& nums) {
    int cnt = 0 ;
    for(int num : nums) {
        if(hasEvenDigits(num)) {
            ++cnt ;
        }
    }
    return cnt ;
}

int main()
{
	vector<int> nums ;
	int len, e ;
	
	cout << endl ;
	cout << "  FIND NUMBERS WITH EVEN NUMBER OF DIGITS " << endl ;
	cout << " `````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array....... " << endl ;

	for(int j=0; j<len; ++j){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = findNumbers(nums) ;
	
	cout << "Count of numbers with even digits = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}