
// 155. MIN STACK

/** T.C. - O(1) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/min-stack/solutions/8577680/c-min-stack-by-nidhi_kamal-eikv/

/* JAVA */
// https://leetcode.com/problems/min-stack/solutions/8577677/java-solution-with-o1-time-complexity-by-cmfj/

#include<iostream>

using namespace std ;

class MinStack {
private:
    vector<pair<int, int>> s ;

public:
    MinStack() {
        
    }
    
    void push(int value) {
        int minVal = s.empty() ? value : min(value, s.back().second) ;
        s.push_back({value, minVal}) ;
    }
    
    void pop() {
        s.pop_back() ;
    }
    
    int top() {
        return s.back().first ;
    }
    
    int getMin() {
        return s.back().second ; ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */