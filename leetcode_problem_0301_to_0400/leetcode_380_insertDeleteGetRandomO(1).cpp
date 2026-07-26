
// 380. INSERT DELETE GET RANDOM O(1)

/** T.C. - O(1) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/insert-delete-getrandom-o1/solutions/8421767/c-solution-hash-map-design-rand-by-nidhi-szyg/

/* JAVA */
// https://leetcode.com/problems/insert-delete-getrandom-o1/solutions/8421777/java-by-nidhi_kamal-lgnf/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

class RandomizedSet {
private:
    vector<int> v ;
    unordered_map<int, int> mp ;
	
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        // if(mp.find(val) != mp.end()) {
        if(mp.count(val)) {
            return false ;
        }
        v.push_back(val) ;
        mp[val] = v.size() - 1 ;
        return true ;
    }
    
    bool remove(int val) {
        // if(mp.find(val) == mp.end()) {
        if(!mp.count(val)) {
            return false ;
        }
        auto it = mp.find(val) ;
        int idx = it->second ;
        v[idx] = v.back() ;
        v.pop_back() ;
        mp[v[idx]] = idx ;
        mp.erase(val) ;
        return true ;
    }
    
    int getRandom() {
        return v[rand() % v.size()] ;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

/*
class RandomizedSet {
unordered_set<int> s ;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
		if(s.find(val) != s.end()) {
			return false ;
		}
		s.insert(val) ;
		return true ;
    }
    
    bool remove(int val) {
		if(s.find(val) == s.end()) {
			return false ;
		}
		s.erase(val) ;
		return true ;
    }
    
    int getRandom() {
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
 
 
		// if(mp[val] == 1) {
			// return false ;
		// }
		// mp[val]++ ;
		

		// if(mp[val] == 1) {
			// mp[val]-- ;
			// return true ;
		// }