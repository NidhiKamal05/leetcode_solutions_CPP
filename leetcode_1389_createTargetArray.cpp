
// 1389. CREATE TARGET ARRAY IN THE GIVEN ORDER

#include<iostream>
#include<vector>

using namespace std ;

vector<int> createTargetArray(vector<int> & nums, vector<int> & index){
	vector<int> ans ;
	for(int i=0; i<nums.size(); ++i)
		ans.insert(ans.begin()+index.at(i), nums.at(i)) ;
	return ans ;
}

/** JAVA SOLUTION **/
/*class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        ArrayList<Integer> list = new ArrayList<Integer>() ;
        for(int i=0; i<nums.length; ++i)
            list.add(index[i], nums[i]) ;
        int[] ans = new int[list.size()] ;
        for(int i=0; i<list.size(); ++i)
            ans[i] = list.get(i) ;
        return ans ;
    }
}*/

int main(){
	vector<int> nums, index, result;
	int len, e;
	
	cout << endl ;
	cout << "  CREATE TARGET ARRAY IN THE GIVEN ORDER " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array nums....." << endl ;
	for(int i=0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl << "Enter elements of the array index....." << endl ;
	for(int i=0; i<len; i++){
		cin >> e ;
		index.push_back(e) ;
	}
	
    result = createTargetArray(nums, index) ;
	
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