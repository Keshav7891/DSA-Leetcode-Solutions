// Last updated: 31/07/2026, 09:18:40
1class Solution {
2public:
3    bool increasingTriplet(vector<int>& nums) {
4        int num1 = INT_MAX;
5        int num2 = INT_MAX;
6
7        for(int i=0;i<nums.size();i++){
8            int curr = nums[i];
9
10            if(curr <= num1){
11                num1 = curr;
12            }else if(curr <= num2){
13                num2 = curr;
14            }else{
15                return true;
16            }
17
18            //cout<<curr<<" "<<num1<<" "<<num2<<" "<<endl; 
19        }
20
21        return false;
22    }
23};