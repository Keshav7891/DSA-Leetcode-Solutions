// Last updated: 07/07/2026, 09:09:41
class Solution {
public:
    vector<int> dx = {-1,0,1,0};
    vector<int> dy = {0,-1,0,1};

    void help(int i, int j, vector<vector<char>>&grid, vector<vector<bool>>&visited){
        if(i<0 || i>= grid.size() || j<0 || j>= grid[0].size() || grid[i][j] == '0' || visited[i][j] == true){
            return;
        }

        visited[i][j] = true;
        for(int k=0;k<4;k++){
            help(i+dx[k], j+dy[k], grid, visited);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>>visited(grid.size(), vector<bool>(grid[0].size(), false));
        int res = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == '1' && visited[i][j] == false){
                    help(i,j,grid,visited);
                    res++;
                }
            }
        }
        return res;
    }
};