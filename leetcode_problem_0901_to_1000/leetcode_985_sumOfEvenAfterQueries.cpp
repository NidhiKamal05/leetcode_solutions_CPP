
// 985. SUM OF EVEN NUMBERS AFTER QUERIES

/** T.C. - O(N * Q) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/sum-of-even-numbers-after-queries/solutions/8534673/c-solution-by-nidhi_kamal-uwww/

/* JAVA */
// https://leetcode.com/problems/sum-of-even-numbers-after-queries/solutions/8534682/java-solution-beats-8812-by-nidhi_kamal-zal7/

#include<iostream>
#include<vector>

using namespace std ;

/** O(N + Q) , O(1)
/*vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
    int sum = 0 ;
    for(int& num : nums) {
        if(num % 2 == 0) {
            sum += num ;
        }
    }
    vector<int> ans ;
    for(vector<int>& query : queries) {
        int val = query[0], idx = query[1] ;
        if(nums[idx] % 2 == 0) {
            sum -= nums[idx] ;
        }
        nums[idx] += val ;
        if(nums[idx] % 2 == 0) {
            sum += nums[idx] ;
        }
        ans.push_back(sum) ;
    }
    return ans ;
}*/

int sumEven(vector<int>& nums) {
    int sum = 0 ;
    for(int& num : nums) {
        if(num % 2 == 0) {
            sum += num ;
        }
    }
    return sum ;
}

vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
    vector<int> ans ;
    for(vector<int>& query : queries) {
        nums[query[1]] += query[0] ;
        ans.push_back(sumEven(nums)) ;
    }
    return ans ;
}

/*vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
	vector<int> ans ;
	int n = queries.size() ;
	int sum = 0 ;
	for(int i=0; i<n; ++i) {
		nums[queries[i][1]] += queries[i][0] ;
		sum = 0 ;
		for(int& num : nums) {
			// sum += ((num%2 == 0) ? num : 0) ;
			if(num%2 == 0) {
				sum += num ;
			}
		}
		ans.push_back(sum) ;
	}
	return ans ;
}*/

int main() {
	vector<int> nums. ans ;
	vector<vector<int>> queries ;
	int e, n ;
	
	cout << endl ;
	cout << "  SUM OF EVEN NUMBERS AFTER QUERIES " << endl ;
	cout << " ..................................." << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter length of the query : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of array queries...... " << endl ;
	for(int i=0; i<n; ++i) {
		vector<int> v ;
		cin >> e ;
		v.push_back(e) ;
		cin >> e ;
		v.push_back(e) ;
		queries.push_back(v) ;
	}
	
	cout << endl ;
    ans = sumEvenAfterQueries(nums, queries) ;
	
	cout << "After Queries..." << endl ;
	for(int& i : ans) {
		cout << " " << i ; 
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}