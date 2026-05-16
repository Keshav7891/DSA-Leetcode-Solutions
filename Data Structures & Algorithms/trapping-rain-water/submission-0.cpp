class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefixMax;
        vector<int> suffixMax;
        
        prefixMax.push_back(height[0]);
        for(int i=1;i<height.size();i++){
            int ele = max(height[i],prefixMax[i-1]);
            prefixMax.push_back(ele);
        }

        suffixMax.push_back(height[height.size()-1]);
        for(int i=height.size()-2;i>=0;i--){
            int ele = max(height[i],suffixMax.back());
            suffixMax.push_back(ele);
        }
        reverse(suffixMax.begin(), suffixMax.end());
        for(auto key : height){
            cout<<key<<" ";
        }
        cout<<endl;
        for(auto key : prefixMax){
            cout<<key<<" ";
        }
        cout<<endl;
        for(auto key : suffixMax){
            cout<<key<<" ";
        }
        cout<<endl;

        int res = 0;
        for(int i=1;i<height.size()-1;i++){
            res = res + min(suffixMax[i], prefixMax[i]) - height[i];
        }

        return res;
    }
};
