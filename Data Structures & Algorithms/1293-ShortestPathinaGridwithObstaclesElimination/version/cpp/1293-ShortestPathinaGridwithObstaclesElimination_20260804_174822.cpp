// Last updated: 04/08/2026, 17:48:22
1class Solution {
2public:
3    bool help(int x, int y, int k, vector<vector<vector<bool>>>&visited, vector<vector<int>>&grid){
4        if(x<0 || x >= grid.size() || y<0 || y>=grid[0].size() || k < 0 || visited[x][y][k] == true){
5            return false;
6        }
7        return true;
8    }
9
10    int shortestPath(vector<vector<int>>& grid, int k) {
11        vector<vector<vector<bool>>> visited( grid.size(), vector<vector<bool>>( grid[0].size(), vector<bool>(k+1, false) ) );
12        queue<pair<pair<int,int>,int>>q;
13
14        q.push({{0,0},k});
15        visited[0][0][k] = true;
16
17        vector<int>dx = {-1,0,1,0};
18        vector<int>dy = {0,-1,0,1};
19
20        int steps = 0;
21        while(q.empty() == false){
22            int size = q.size();
23            for(int i=0;i<size;i++){
24                auto curr = q.front();
25                q.pop();
26
27                int x = curr.first.first;
28                int y = curr.first.second;
29                int kk = curr.second;
30
31                if(x == grid.size()-1 && y == grid[0].size()-1){
32                    return steps;
33                }
34
35                for(int j=0;j<4;j++){
36                    int newX = x + dx[j];
37                    int newY = y + dy[j];
38
39                    if(newX<0 || newX>=grid.size() || newY<0 || newY>=grid[0].size())
40                        continue;
41
42                    int newK = grid[newX][newY] == 1 ? kk-1 : kk;
43
44                    if(help(newX, newY, newK, visited, grid) == true){
45                        visited[newX][newY][newK] = true;
46                        q.push({{newX, newY}, newK});
47                    }
48                }
49            }
50            steps++;
51        }
52        return -1;
53    }
54};