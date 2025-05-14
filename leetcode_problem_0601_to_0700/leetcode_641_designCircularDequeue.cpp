
// 641. DESIGN CIRCULAR DEQUEUE

class MyCircularDeque {

private:
    vector<int> deQueue ; 
    int front ;
    int rear ;
    int currentSize ;
    int maxSize ;

public:
    MyCircularDeque(int k) {
        deQueue = vector<int>(k) ;
        currentSize = 0 ;
        maxSize = k ;
        front = 0 ;
        rear = k-1 ;
    }
    
    bool insertFront(int value) {
        if(isFull())
            return false ;
        front = (front == 0) ? maxSize-1 : --front ;
        deQueue.at(front) = value ;
        ++currentSize ;
        return true ;
    }
    
    bool insertLast(int value) {
        if(isFull())
            return false ;
        rear = (rear == maxSize-1) ? 0 : ++rear ; 
        deQueue.at(rear) = value ;
        ++currentSize ;
        return true ;
    }
    
    bool deleteFront() {
        if(isEmpty())
            return false ;
        front = (front == maxSize-1) ? 0 : ++front ;
        --currentSize ;
        return true ;
    }
    
    bool deleteLast() {
        if(isEmpty())
            return false ;
        rear = (rear == 0) ? maxSize-1 : --rear ; 
        --currentSize ;
        return true ;    
    }
    
    int getFront() {
        if(isEmpty())
            return -1 ;
        return deQueue.at(front) ;
    }
    
    int getRear() {
        if(isEmpty())
            return -1 ;
        return deQueue.at(rear) ;
    }
    
    bool isEmpty() {
        return currentSize == 0 ;
    }
    
    bool isFull() {
        return currentSize == maxSize ;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */