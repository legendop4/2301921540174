//LEETCODE PROBLEM  Implement Stack using Queue
// LINK : https://leetcode.com/problems/implement-stack-using-queues/
// submission detail : https://leetcode.com/submissions/detail/1525151587/


class MyStack {
    private:
        queue<int> q;
public:
    MyStack() {
      
    }
    
    void push(int x) {
        q.push(x);
        for(int i = 0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();
        }
    }

    
    int pop() {
        int top = q.front();
        q.pop();
        return top;    
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
