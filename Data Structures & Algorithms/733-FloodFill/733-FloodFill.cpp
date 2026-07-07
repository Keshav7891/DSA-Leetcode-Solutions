// Last updated: 07/07/2026, 09:09:19
class Solution {
public:
    vector<int> dx = {-1, 0, 1, 0};
    vector<int> dy = {0, -1, 0, 1};

    bool isValid(int i, int j, vector<vector<int>>& image, vector<vector<bool>>&visited, int srcColor){
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j] != srcColor || visited[i][j] == true){
            return false;
        }
        return true;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       vector<vector<bool>>visited(image.size(), vector<bool>(image[0].size(), false));
       queue<pair<int,int>>q;
       q.push({sr,sc});
       int srcColor = image[sr][sc];
       visited[sr][sc] = true;
       while(q.empty() == false){
        int size = q.size();
        for(int i=0;i<size;i++){
            auto curr = q.front();
            q.pop();

            int x = curr.first;
            int y = curr.second;
            image[x][y] = color;

            for(int k=0;k<4;k++){
                if(isValid(x+dx[k], y+dy[k], image, visited, srcColor)){
                    visited[x+dx[k]][y+dy[k]] = true;
                    q.push({x+dx[k], y+dy[k]});
                }
            }
        }
       } 

       return image;
    }
};