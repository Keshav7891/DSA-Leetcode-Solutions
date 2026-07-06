class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &mtx) {
        unordered_map<int, vector<int>>adj;
        unordered_map<int, bool> visited;
        queue<int>q;
        vector<int>res;
        for(int i=0;i<mtx.size();i++){
            for(int j=0;j<mtx[i].size();j++){
                adj[i].push_back(mtx[i][j]);
            }
        }
        q.push(0);
        visited[0] = true;
        while(q.empty() == false){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto curr = q.front();
                q.pop();
                res.push_back(curr);
                for(auto nbr : adj[curr]){
                    if(visited[nbr] == false){
                        q.push(nbr);
                        visited[nbr] = true;
                    }
                }
            }
        }
        return res;
    }
};