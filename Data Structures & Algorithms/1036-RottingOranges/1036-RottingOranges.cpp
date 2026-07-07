// Last updated: 07/07/2026, 10:51:32
class Solution {
public:

    bool isValid(int i, int j, vector<vector<int>>&grid, vector<vector<bool>>&visited){
        if(i<0 || i>= grid.size() || j<0 || j>=grid[0].size() || grid[i][j] !=1 || visited[i][j] == true){
            return false;
        }
        return true;
    }


    int orangesRotting(vector<vector<int>>& grid) {
        int totalOranges = 0;
        queue<pair<int,int>>q;
        vector<vector<bool>>visited(grid.size(), vector<bool>(grid[0].size(), false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 2){
                    visited[i][j] = true;
                    q.push({i,j});
                }else if(grid[i][j] == 1){
                    totalOranges++;
                }
            }
        }

        if(totalOranges == 0){
            return 0;
        }

        vector<int> dx = {-1, 0, 1, 0};
        vector<int> dy = {0, -1, 0, 1};

        int time = 0;
        while(q.empty() == false){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto curr = q.front();
                q.pop();
                
                for(int k=0;k<4;k++){
                    int x = curr.first + dx[k];
                    int y = curr.second + dy[k];

                    if(isValid(x,y,grid,visited)){
                        visited[x][y] = true;
                        grid[x][y] = 2;
                        totalOranges--;
                        q.push({x,y});
                    }
                }
            }
            time++;
        }

        if(totalOranges == 0){
            return time-1;
        }

        return -1;
    }
};