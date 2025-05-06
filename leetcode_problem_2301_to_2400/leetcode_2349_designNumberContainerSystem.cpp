
// 2349. DESIGN A NUMBER CONTAINER SYSTEM

class NumberContainers {
private:
    unordered_map<int, int> mp1 ;
    unordered_map<int, set<int>> mp2 ;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(mp1.find(index) != mp1.end()) {
            mp2[mp1[index]].erase(index) ;
            if(mp2[mp1[index]].empty()) {
                mp2.erase(mp1[index]) ;
            }
        }
        mp1[index] = number ;
        mp2[number].insert(index) ;
    }
    
    int find(int number) {
        return mp2[number].empty() ? -1 : *mp2[number].begin() ;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */