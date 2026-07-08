// Last updated: 08/07/2026, 09:27:19
1class Solution {
2public:
3
4    bool isValid(int i, int j, vector<vector<int>>& mat, vector<vector<bool>>& visited){
5        if(i<0 || i>= mat.size() || j<0 || j>=mat[0].size() || visited[i][j] == true){
6            return false;
7        }
8        return true;
9    }
10
11    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
12        vector<vector<int>>res(mat.size(), vector<int>(mat[0].size(), 0));
13        vector<vector<bool>>visited(mat.size(), vector<bool>(mat[0].size(), false));
14        queue<pair<pair<int,int>,int>>q;
15        for(int i=0;i<mat.size();i++){
16            for(int j=0;j<mat[0].size();j++){
17                if(mat[i][j] == 0){
18                    q.push({{i,j},0});
19                    visited[i][j] = true;
20                }
21            }
22        }
23
24        vector<int>dx = {-1, 0, 1, 0};
25        vector<int>dy = {0, -1, 0, 1};
26
27        while(q.empty() == false){
28            int size = q.size();
29            for(int i=0;i<size;i++){
30                auto curr = q.front();
31                q.pop();
32
33                int x = curr.first.first;
34                int y = curr.first.second;
35                int steps = curr.second;
36
37                res[x][y] = steps;
38
39                for(int k=0;k<4;k++){
40                    int nx = x + dx[k];
41                    int ny = y + dy[k];
42
43                    if(isValid(nx, ny, mat, visited)){
44                        visited[nx][ny] = true;
45                        q.push({{nx,ny}, steps+1});
46                    }
47                }
48            }
49        }
50
51        return res;
52    }
53};