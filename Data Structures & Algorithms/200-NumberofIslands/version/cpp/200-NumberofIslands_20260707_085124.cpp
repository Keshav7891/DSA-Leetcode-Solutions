// Last updated: 07/07/2026, 08:51:24
1class Solution {
2public:
3    vector<int> dx = {-1,0,1,0};
4    vector<int> dy = {0,-1,0,1};
5
6    void help(int i, int j, vector<vector<char>>&grid, vector<vector<bool>>&visited){
7        if(i<0 || i>= grid.size() || j<0 || j>= grid[0].size() || grid[i][j] == '0' || visited[i][j] == true){
8            return;
9        }
10
11        visited[i][j] = true;
12        for(int k=0;k<4;k++){
13            help(i+dx[k], j+dy[k], grid, visited);
14        }
15    }
16
17    int numIslands(vector<vector<char>>& grid) {
18        vector<vector<bool>>visited(grid.size(), vector<bool>(grid[0].size(), false));
19        int res = 0;
20        for(int i=0;i<grid.size();i++){
21            for(int j=0;j<grid[i].size();j++){
22                if(grid[i][j] == '1' && visited[i][j] == false){
23                    help(i,j,grid,visited);
24                    res++;
25                }
26            }
27        }
28        return res;
29    }
30};