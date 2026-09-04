class MinStack {
public:
    stack<int>s;
    stack<int>ms;
    MinStack() {
        
    }
    
    void push(int val) {

        if(s.empty() == true){
            ms.push(val);
        }else{
            auto curr = ms.top();
            int ele = min(curr, val);
            ms.push(ele);
        }

        s.push(val);
    }
    
    void pop() {
        s.pop();
        ms.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return ms.top();
    }
};
