
// 1381. DESIGN A STACK WITH INCREMENT OPERATION

class CustomStack {
private:
	vector<int> s ;
	int top ;
	int maxLen ;
public:
	CustomStack(int maxSize) {
		s.resize(maxSize) ;
		top = -1 ;
		maxLen = maxSize ;
	}
	
	void push(int x) {
		if(top < maxLen-1) {
			s[++top] = x ;
		}
	}
	
	int pop() {
		if(top == -1)
			return -1 ;
		return s[top--] ;
	}
	
	void increment(int k, int val) {
		int n = min(k, top+1) ;
		for(int i=0; i<n; ++i)
			s[i] += val ;
	}
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */