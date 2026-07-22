
// 55. JUMP GAME

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/jump-game/solutions/8413504/c-0-ms-runtime-beats-100-on-time-by-nidh-x64s/

/* JAVA */
// https://leetcode.com/problems/jump-game/solutions/8413510/java-greedy-solution-runtime-beats-9994-dm7xw/

#include<iostream>
#include<vector>

using namespace std ;

bool canJump(vector<int>& nums) {
    int n = nums.size(), goal = n - 1 ;
    for(int idx = n - 2; idx >= 0; --idx) {
        if(idx + nums[idx] >= goal) {
            goal = idx ;
        }
    }
    return goal == 0 ;
}
	
int main() {
	vector<int> nums ;
	int n, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  JUMP GAME  " << endl ;
	cout << " ---*****--- " << endl ;
	
	cout << endl ;
	cout << "Enter length of array..... " << endl ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; ++i) {
	    cin >> e ;
	    nums.push_back(e) ;
	}
	
	ans = canJump(nums) ;
	
	cout << endl ;	
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*bool canJump(vector<int> & nums) {	
	int i ;
	i = 0 ;
	if(nums.size() == 1)
		return true ;
	while(i<nums.size()) {
		if((i == nums.size()-1)||(nums.at(i) == 0))
	    	break ;
		if(nums.at(i) > 0) {
			if(i == nums.size()-1)
				return true ;
            if((nums.at(i+1) == 0)&&(nums.size()-i > nums.at(i)))
				i+=(nums.at(i)) ;
			else
		        ++i ;
		}
	}
	if(i == nums.size()-1)
		return true ;
	else
		return false ;
	
	// vector<int> :: iterator it ;
	// it = nums.begin() ;
	// if(nums.size() == 1)
		// return true ;
	// while(it < nums.end())
	// {
		// if((it == nums.end()-1)||((*it) == 0))
	    	// break ;
		// if((*it) > 0)
		// {
			// if(it == nums.end()-1)
				// return true ;		    
		    // ++it ;
		// }
	// }
	// if(it == nums.end()-1)
		// return true ;
	// else
		// return false ;
}
// i+=(nums.at(i)) ;*/