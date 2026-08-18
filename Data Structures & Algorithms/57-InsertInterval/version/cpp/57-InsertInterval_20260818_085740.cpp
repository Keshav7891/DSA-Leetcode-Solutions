// Last updated: 18/08/2026, 08:57:40
1class Solution {
2public:
3    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
4        vector<vector<int>>res;
5        int i = 0;
6        while(i!=intervals.size()){
7            if(intervals[i][1] >= newInterval[0]){
8                //can be merged
9                if(newInterval[1] >= intervals[i][0]){
10                    newInterval[0] = min(intervals[i][0], newInterval[0]);
11                    newInterval[1] = max(intervals[i][1], newInterval[1]);
12                }else{
13                    break;
14                }
15            }else{
16                res.push_back(intervals[i]);
17            }
18            i++;
19        }
20
21        res.push_back(newInterval);
22
23        while(i!=intervals.size()){
24            res.push_back(intervals[i]);
25            i++;
26        }
27
28        return res;
29    }
30};