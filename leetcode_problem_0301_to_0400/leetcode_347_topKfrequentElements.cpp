#include<iostream>
// 347. TOP K FREQUENT ELEMENTS

#include<vector>
#include<map>
// #include<queue>
// #include<utility>

using namespace std ;

void SortD(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) < v.at(j))
				swap(v.at(i),v.at(j)) ;
}

vector<int> topKFrequent(vector<int>& nums, int k) {
	vector<int> topK ;
	map<int, int> mp ;
	for(int i=0; i<nums.size(); ++i)
		mp[nums[i]]++ ;
	vector<pair<int, int>> p ;
	for(auto i : mp)
		p.push_back(make_pair(i.second, i.first)) ;
	// sort(p.rbegin(), p.rend()) ;
	SortD(nums) ;
	for(int i=0; i<p.size()&&k!=0; ++i){
		topK.push_back(p[i].second) ;
		--k ;
	}
	return topK ;
}

int main(){
	vector<int> nums{}, topK{};
	int len, e, k;
	
	cout << endl ;
	cout << "  TOP K FREQUENT ELEMENTS " << endl ;
	cout << " =========================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter value of k.... " << endl ;
	cout << "k = " ;
	cin >> k ;
	
    topK = topKFrequent(nums, k) ;
	
	if(!topK.empty())
        for(int i=0; i<topK.size(); i++)
	    	cout << " " << topK.at(i) << " " ;
	else
		cout << "NOT FOUND" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<int, vector<int>> pq ;
        vector<int> topK ;
        for(int i=0; i<nums.size(); ++i){
            pq.push(nums.at(i)) ;
            if(pq.size() > k)
                pq.pop() ;
        }
        for(int i=0; i<k; ++i){
            topK.push_back(pq.top()) ;
            pq.pop() ;
        }
        return topK ;
    }*/

/*vector<int> topKfrequent(vector<int> & nums, int k){
	if(nums.size() == 1)
		return nums ;
	vector<int> topK ;
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	for(int i=0; i<nums.size()-1; ++i){
		if(topK.size() == k)
			break ;
		if(nums.at(i) != nums.at(i+1))
			topK.push_back(nums.at(i)) ;
	}
	int j = nums.at(nums.size()-1) ;
	if(nums.at(j) != nums.at(j-1))
		topK.push_back(nums.at(j)) ;
	return topK ;
}*/

/*vector<int> topKfrequent(vector<int> & nums, int k){
	vector<int> topK ;
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	// priority_queue<int, vector<int>, greater<int>> pq ;
	unordered_set<int> uniqueElements ;
	for(int i=0; i<nums.size(); ++i){
		uniqueElements.insert(nums.at(i)) ;
	}
	for(int i=0; i<uniqueElements.size(); ++i){
		if(i == k)
			break ;
		topK.push_back(uniqueElements.at(i)) ;
		// pq.pop() ;
	}
	return topK ;
}*/