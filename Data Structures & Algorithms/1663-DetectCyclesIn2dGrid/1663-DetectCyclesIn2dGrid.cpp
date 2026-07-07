// Last updated: 07/07/2026, 10:51:34
class Solution {
public:
    
    vector<int> dx = {0, -1, 0, 1};
    vector<int> dy = {1, 0, -1, 0};

    bool help(int i, int j, int pi, int pj, vector<vector<char>>&grid, vector<vector<bool>>&visited, int len, char srcColor){
        if(i<0 || i>= grid.size() || j<0 || j>=grid[i].size() || grid[i][j] != srcColor){
            return false;
        }

        if(visited[i][j] == true){
            return len >= 4;
        }

        visited[i][j] = true;

        bool res = false;

        for(int k=0;k<4;k++){

            if(i+dx[k] == pi && j+dy[k] == pj){
                continue;
            }

            res = res || help(i + dx[k], j + dy[k], i, j, grid, visited, len+1, srcColor);
        }

        return res;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        vector<vector<bool>>visited(grid.size(), vector<bool>(grid[0].size(), false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(visited[i][j] == false){
                    bool res = help(i,j,-1, -1, grid,visited,0,grid[i][j]);
                    if(res == true){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};