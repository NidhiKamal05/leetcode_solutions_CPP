
// 622. DESIGN CIRCULAR QUEUE

class MyCircularQueue {
private:
	vector<int> cQueue ;
	int front ;
	int rear ;
	int currentSize ;
	int maxSize ;
	
public:
    MyCircularQueue(int k) {
        cQueue = vector<int>(k) ;
		maxSize = k ;
		currentSize = 0 ;		
		front = 0 ;
		rear = k-1 ;
    }
    
    bool enQueue(int value) {
		if(isFull())
			return false ;
		rear = (rear == maxSize-1) ? 0 : ++rear ;
		++currentSize ;
		cQueue[rear] = value ;
        return true ;
    }
    
    bool deQueue() {        
		if(isEmpty())
			return false ;
		front = (front == maxSize-1) ? 0 : ++front ;
		--currentSize ;	
        return true ;
    }
    
    int Front() {
        if(isEmpty())
			return -1 ;
		return cQueue[front] ;
    }
    
    int Rear() {
        if(isEmpty())
			return -1 ;
		return cQueue[rear] ;
    }
    
    bool isEmpty() {
        return currentSize == 0 ;
    }
    
    bool isFull() {
        return currentSize == maxSize ;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */