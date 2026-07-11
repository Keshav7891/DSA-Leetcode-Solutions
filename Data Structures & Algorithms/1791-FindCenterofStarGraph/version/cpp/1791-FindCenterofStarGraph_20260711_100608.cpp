// Last updated: 11/07/2026, 10:06:08
1class Solution {
2public:
3    int findCenter(vector<vector<int>>& edges) {
4        unordered_map<int,int> adj;
5
6        for(auto key : edges){
7            int u = key[0];
8            int v = key[1];
9            adj[u]++;
10            adj[v]++;
11        }
12
13        for(auto key : adj){
14            if(key.second == edges.size()){
15                return key.first;
16            }
17        }
18
19        return -1;
20    }
21};