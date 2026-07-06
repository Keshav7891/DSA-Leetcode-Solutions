class Solution {
  public:
    
    void help(int curr, unordered_map<int, vector<int>>& adj, unordered_map<int, bool> &visited, vector<int> &res){
        res.push_back(curr);
        visited[curr] = true;

        for(auto nbr : adj[curr]){
            if(visited[nbr] == false){
                help(nbr, adj, visited, res);
            }
        }
    }
  
    vector<int> dfs(vector<vector<int>>& mtx) {
        unordered_map<int, vector<int>> adj;
        unordered_map<int, bool> visited;
        vector<int> res;
        
        for(int i = 0; i < mtx.size(); i++){
            for(int j = 0; j < mtx[i].size(); j++){
                adj[i].push_back(mtx[i][j]);
            }
        }
        
        for(int i = 0; i < mtx.size(); i++){
            if(visited[i] == false){
                help(i, adj, visited, res);
            }
        }
        
        return res;
    }
};