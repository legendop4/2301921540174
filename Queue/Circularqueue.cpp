//LEETCODE PROBLEM Design Circular Queue
// LINK : https://leetcode.com/problems/design-circular-queue/
// submission detail : https://leetcode.com/submissions/detail/1527205652/



class MyCircularQueue {
private:
        vector<int> queue;
        int front;
        int rear;
        int n;
public:
    MyCircularQueue(int k) {
        n = k;
        queue.resize(n);
        front = rear= -1;
    }
    
    bool enQueue(int value) {
        if((rear+1) %n == front)
            return false;
        if(rear== -1){
            front = 0;
            rear = 0;
        }else{
            rear = (rear+1) %n;
        }
        queue[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if(front ==-1)
            return false;
        if(front == rear ){
            front = rear = -1;
        }else{
            front = (front +1)%n;
        }
        return true;
    }
    
    int Front() {
        if(front ==-1){
            return -1;
        }
        return queue[front];
    }

    
    int Rear() {
        if(rear == -1)
            return -1;
        return queue[rear];   
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return (rear+1) %n == front;
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
