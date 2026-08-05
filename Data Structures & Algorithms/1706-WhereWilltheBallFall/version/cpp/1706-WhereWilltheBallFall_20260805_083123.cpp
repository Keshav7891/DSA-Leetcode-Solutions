// Last updated: 05/08/2026, 08:31:23
1class Solution {
2public:
3    vector<int> findBall(vector<vector<int>>& grid) {
4        
5        vector<int> res;
6        for(int ball = 0; ball < grid[0].size(); ball++){
7
8            int i = 0;
9            int j = ball;
10
11            while(i < grid.size() && j != -1){
12
13                if(grid[i][j] == 1){
14                    // 1 -> \ -> new i+1 , j+1 + invalid when [i][j+1] == -1 or j+1 is out of bounds
15                    if(j + 1 != grid[0].size() && grid[i][j + 1] != -1){
16                        i = i + 1;
17                        j = j + 1;
18                    }else{
19                        j = -1;
20                    }
21                }else{
22                    // -1 -> / -> new i+1, j-1 + invalid when [i][j-1] == 1 or j-1 is out of bounds
23                    if(j - 1 >= 0 && grid[i][j - 1] != 1){
24                        i = i + 1;
25                        j = j - 1;
26                    }else{
27                        j = -1;
28                    }
29                }
30
31            }
32            res.push_back(j);
33        }
34        return res;
35    }
36};