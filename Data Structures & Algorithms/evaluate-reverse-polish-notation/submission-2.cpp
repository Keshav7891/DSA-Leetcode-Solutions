class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto key : tokens){
            if(key == "+"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(a+b);
            }else if(key == "-"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b-a);
            }else if(key == "*"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(a*b);
            }else if(key == "/"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b/a);
            }else{
                int ele = stoi(key);
                s.push(ele);
            }
        }

        return s.top();
    }
};
