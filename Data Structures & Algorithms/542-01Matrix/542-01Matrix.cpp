// Last updated: 08/07/2026, 10:02:42
class Solution {
public:

    bool isValid(int i, int j, vector<vector<int>>& mat, vector<vector<bool>>& visited){
        if(i<0 || i>= mat.size() || j<0 || j>=mat[0].size() || visited[i][j] == true){
            return false;
        }
        return true;
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>>res(mat.size(), vector<int>(mat[0].size(), 0));
        vector<vector<bool>>visited(mat.size(), vector<bool>(mat[0].size(), false));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j] == 0){
                    q.push({{i,j},0});
                    visited[i][j] = true;
                }
            }
        }

        vector<int>dx = {-1, 0, 1, 0};
        vector<int>dy = {0, -1, 0, 1};

        while(q.empty() == false){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto curr = q.front();
                q.pop();

                int x = curr.first.first;
                int y = curr.first.second;
                int steps = curr.second;

                res[x][y] = steps;

                for(int k=0;k<4;k++){
                    int nx = x + dx[k];
                    int ny = y + dy[k];

                    if(isValid(nx, ny, mat, visited)){
                        visited[nx][ny] = true;
                        q.push({{nx,ny}, steps+1});
                    }
                }
            }
        }

        return res;
    }
};