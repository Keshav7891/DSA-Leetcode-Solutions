// Last updated: 28/07/2026, 11:00:39
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        //2 poiner on lines
5        int low = 0;
6        int high = height.size()-1;
7
8        int res = INT_MIN;
9        while(low <= high){
10
11            int minHeight = min(height[low], height[high]);
12            int dist = high - low;
13            int waterUnits = minHeight * dist;
14            res = max(res, waterUnits);
15
16            // hope to find the bigger building to match current bigger building
17            if(height[low] < height[high]){
18                low++;
19            }else{
20                high--;
21            }
22        }
23        return res;
24    }
25};