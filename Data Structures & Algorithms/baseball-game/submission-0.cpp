class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        for(auto key : operations){
            if(key == "+"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                int c = a + b;
                s.push(b);
                s.push(a);
                s.push(c);
            }else if(key == "D"){
                int a = s.top();
                s.pop();
                int c = a * 2;
                s.push(a);
                s.push(c);
            }else if(key == "C"){
                s.pop();
            }else{
                int num = stoi(key);
                s.push(num);
            }
        }

        int res = 0;
        while(s.empty() == false){
            int key = s.top();
            s.pop();
            res = res + key;
        }
        return res;
    }
};