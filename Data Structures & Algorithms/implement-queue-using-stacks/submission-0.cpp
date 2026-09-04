class MyQueue {
public:
    stack<int>in;
    stack<int>out;
    MyQueue() {
        
    }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        while(in.empty() == false){
            auto curr = in.top();
            in.pop();
            out.push(curr);
        }

        int res = out.top();
        out.pop();

        while(out.empty() == false){
            auto curr = out.top();
            out.pop();
            in.push(curr);
        }

        return res;
    }
    
    int peek() {

        while(in.empty() == false){
            auto curr = in.top();
            in.pop();
            out.push(curr);
        }

        int res = out.top();

        while(out.empty() == false){
            auto curr = out.top();
            out.pop();
            in.push(curr);
        }

        return res;
        
    }
    
    bool empty() {
        return in.empty();
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