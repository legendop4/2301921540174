//LEETCODE PROBLEM  Implement Queue Using Stacks
// LINK : https://leetcode.com/problems/implement-queue-using-stacks/
// submission detail : https://leetcode.com/submissions/detail/1527195321/


class MyQueue {
    private:
    queue<int> inp;
    queue<int> out;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        inp.push(x);
    }
    
    int pop() {
        peek();
        int val = out.front();
        out.pop();
        return val;
    }
    
    int peek() {
        if(out.empty()){
            while(!inp.empty()){
                out.push(inp.front());
                inp.pop();
            }
        }
        return out.front();
    }
    
    bool empty() {
        return inp.empty() && out.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
