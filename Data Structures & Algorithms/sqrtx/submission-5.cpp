class Solution {
public:
    int mySqrt(int x) {
       if(x <= 1){
            return x;
       }
       long long low = 1;
       long long high = x/2;
       long long res = -1;
       while(low <= high){
            long long mid = low + (high - low)/2;
            long long num = mid * mid;
            // cout<<mid<<" "<<mid<<" "<<x<<endl;
            if(num <= x){
                // cout<<mid<<" "<<mid<<" "<<x<<"res"<<endl;
                res = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
            
       } 
       return res;
    }
};