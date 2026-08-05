// Last updated: 05/08/2026, 16:54:43
1class Solution {
2public:
3    int findMinArrowShots(vector<vector<int>>& points) {
4    	sort(points.begin(), points.end());
5        int currStart = points[0][0];
6        int currEnd = points[0][1];
7        int res = 1;
8        for(int i=1;i<points.size();i++){
9        	if(points[i][0] <= currEnd){
10        		currStart = min(currStart, points[i][0]);
11        		currEnd = min(currEnd, points[i][1]);
12        	}else{
13        		res++;
14        		currStart = points[i][0];
15        		currEnd = points[i][1];
16        	}
17        }
18        return res;
19    }
20};