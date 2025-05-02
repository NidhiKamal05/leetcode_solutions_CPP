
// 2149. REARRANGE ARRAY ELEMENTS BY SIGN

#include<iostream>
#include<vector>

using namespace std ;

/** ONE MORE APPROACH TO SOLVE THIS **/

// JAVA SOLUTION
/*class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n = nums.length ;
        int[] ans = new int[n] ;
        int pos = 0 ;
        int neg = 1 ;
        for(int i=0; i<n; ++i){
            if(nums[i] > 0) {
                ans[pos] = nums[i] ;
                pos += 2 ;
            }
            else {
                ans[neg] = nums[i] ;
                neg += 2 ;
            }
        }
        return ans ;
    }
}*/

vector<int> rearrangeArray(vector<int>& nums){
    vector<int> pos ;
    vector<int> neg ;
    for(int i=0; i<nums.size(); ++i){
        if(nums.at(i) >= 1)
            pos.push_back(nums.at(i)) ;
        else
            neg.push_back(nums.at(i)) ;
    }
    vector<int> ans ;
    for(int i=0; i<pos.size(); ++i){
        ans.push_back(pos.at(i)) ;
        ans.push_back(neg.at(i)) ;
    }
    return ans ;
}

int main(){
	vector<int> nums{} ;
	vector<int> ans ;
	int len, e;
	
	cout << endl ;
	cout << "  REARRANGE ARRAY ELEMENTS BY SIGN " << endl ;
	cout << " ``````````````````````````````````" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array...." << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    ans = rearrangeArray(nums) ;
	
	if(!ans.empty())
        for(int i=0; i<ans.size(); i++)
			cout << " " << ans.at(i) << " " ;
	else
		cout << "NOT FOUND" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}