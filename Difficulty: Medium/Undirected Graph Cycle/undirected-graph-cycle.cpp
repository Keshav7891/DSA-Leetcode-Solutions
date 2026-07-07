class Solution {
  public:

    bool dfsHelper(unordered_map<int, vector<int>>&adj){
        return true;
    }

    bool helpBfs(int curr, unordered_map<int, vector<int>>&adj, unordered_map<int, bool>& visited){
      queue<pair<int,int>>q;
      q.push({curr, -1});
      visited[curr] = true; 
      while(q.empty() == false){
        int size = q.size();
        for(int i=0;i<size;i++){
          auto curr = q.front();
          q.pop();

          for(auto nbr : adj[curr.first]){
            if(visited[nbr] == false){
              visited[nbr] = true;
              q.push({nbr, curr.first});
            }else if(nbr != curr.second){
              return true;
            }
          }
        }
      }
      return false;
    }

    bool bfsHelper(unordered_map<int, vector<int>>&adj){
      unordered_map<int, bool>visited;
      for(auto key : adj){
        if(visited[key.first] == false){
          bool res = helpBfs(key.first, adj, visited);
          if(res == true){
            return true;
          }
        }
      }
      return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {  
        unordered_map<int, vector<int>>adj;
        for(int i=0;i<edges.size();i++){
          int u = edges[i][0];
          int v = edges[i][1];
          adj[u].push_back(v);
          adj[v].push_back(u);
        }

        return dfsHelper(adj) && bfsHelper(adj);
    }
};


