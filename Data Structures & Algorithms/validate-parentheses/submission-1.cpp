class Solution {
public:
    bool isValid(string str) {
        stack<char>s;
        for(auto key : str){
            if(key == '(' || key == '[' || key == '{'){
                s.push(key);
            }else if(s.empty() == true){
                return false;
            }else if((s.top() == '(' && key == ')') || (s.top() == '{' && key == '}') || (s.top() == '[' && key == ']')){
                s.pop();
            }else{
                return false;
            }
        }
        if(s.empty() == true){
            return true;
        }

        return false;
    }
};
