// Last updated: 07/07/2026, 10:25:52
1class Solution {
2public:
3
4    bool isValid(int i, int j, vector<vector<int>>&grid, vector<vector<bool>>&visited){
5        if(i<0 || i>= grid.size() || j<0 || j>=grid[0].size() || grid[i][j] !=1 || visited[i][j] == true){
6            return false;
7        }
8        return true;
9    }
10
11
12    int orangesRotting(vector<vector<int>>& grid) {
13        int totalOranges = 0;
14        queue<pair<int,int>>q;
15        vector<vector<bool>>visited(grid.size(), vector<bool>(grid[0].size(), false));
16        for(int i=0;i<grid.size();i++){
17            for(int j=0;j<grid[0].size();j++){
18                if(grid[i][j] == 2){
19                    visited[i][j] = true;
20                    q.push({i,j});
21                }else if(grid[i][j] == 1){
22                    totalOranges++;
23                }
24            }
25        }
26
27        if(totalOranges == 0){
28            return 0;
29        }
30
31        vector<int> dx = {-1, 0, 1, 0};
32        vector<int> dy = {0, -1, 0, 1};
33
34        int time = 0;
35        while(q.empty() == false){
36            int size = q.size();
37            for(int i=0;i<size;i++){
38                auto curr = q.front();
39                q.pop();
40                
41                for(int k=0;k<4;k++){
42                    int x = curr.first + dx[k];
43                    int y = curr.second + dy[k];
44
45                    if(isValid(x,y,grid,visited)){
46                        visited[x][y] = true;
47                        grid[x][y] = 2;
48                        totalOranges--;
49                        q.push({x,y});
50                    }
51                }
52            }
53            time++;
54        }
55
56        if(totalOranges == 0){
57            return time-1;
58        }
59
60        return -1;
61    }
62};