// Last updated: 07/07/2026, 09:09:25
class Solution {
public:
    void help(int curr, unordered_map<int, vector<int>>&adj, unordered_map<int, bool>&visited){
        queue<int>q;
        q.push(curr);
        visited[curr] = true;
        while(q.empty() == false){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto prnt = q.front();
                q.pop();

                for(auto nbr : adj[prnt]){
                    if(visited[nbr] == false){
                        visited[nbr] = true;
                        q.push(nbr);
                    }
                }
            }
        }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>>adj;
        unordered_map<int, bool> visited;
        int res = 0;
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(isConnected[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        for(auto key : adj){
            if(visited[key.first] == false){
                help(key.first, adj, visited);
                res++;
            }
        }

        return res;


    }
};