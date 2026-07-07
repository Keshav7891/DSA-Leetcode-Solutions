// Last updated: 07/07/2026, 10:49:21
1class Solution {
2public:
3    
4    vector<int> dx = {0, -1, 0, 1};
5    vector<int> dy = {1, 0, -1, 0};
6
7    bool help(int i, int j, int pi, int pj, vector<vector<char>>&grid, vector<vector<bool>>&visited, int len, char srcColor){
8        if(i<0 || i>= grid.size() || j<0 || j>=grid[i].size() || grid[i][j] != srcColor){
9            return false;
10        }
11
12        if(visited[i][j] == true){
13            return len >= 4;
14        }
15
16        visited[i][j] = true;
17
18        bool res = false;
19
20        for(int k=0;k<4;k++){
21
22            if(i+dx[k] == pi && j+dy[k] == pj){
23                continue;
24            }
25
26            res = res || help(i + dx[k], j + dy[k], i, j, grid, visited, len+1, srcColor);
27        }
28
29        return res;
30    }
31
32    bool containsCycle(vector<vector<char>>& grid) {
33        vector<vector<bool>>visited(grid.size(), vector<bool>(grid[0].size(), false));
34        for(int i=0;i<grid.size();i++){
35            for(int j=0;j<grid[i].size();j++){
36                if(visited[i][j] == false){
37                    bool res = help(i,j,-1, -1, grid,visited,0,grid[i][j]);
38                    if(res == true){
39                        return true;
40                    }
41                }
42            }
43        }
44        return false;
45    }
46};