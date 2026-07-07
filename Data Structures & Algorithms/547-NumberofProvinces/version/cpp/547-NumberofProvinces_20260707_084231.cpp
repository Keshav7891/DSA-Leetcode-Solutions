// Last updated: 07/07/2026, 08:42:31
1class Solution {
2public:
3    void help(int curr, unordered_map<int, vector<int>>&adj, unordered_map<int, bool>&visited){
4        queue<int>q;
5        q.push(curr);
6        visited[curr] = true;
7        while(q.empty() == false){
8            int size = q.size();
9            for(int i=0;i<size;i++){
10                auto prnt = q.front();
11                q.pop();
12
13                for(auto nbr : adj[prnt]){
14                    if(visited[nbr] == false){
15                        visited[nbr] = true;
16                        q.push(nbr);
17                    }
18                }
19            }
20        }
21    }
22
23
24    int findCircleNum(vector<vector<int>>& isConnected) {
25        unordered_map<int,vector<int>>adj;
26        unordered_map<int, bool> visited;
27        int res = 0;
28        for(int i=0;i<isConnected.size();i++){
29            for(int j=0;j<isConnected[i].size();j++){
30                if(isConnected[i][j] == 1){
31                    adj[i].push_back(j);
32                    adj[j].push_back(i);
33                }
34            }
35        }
36
37        for(auto key : adj){
38            if(visited[key.first] == false){
39                help(key.first, adj, visited);
40                res++;
41            }
42        }
43
44        return res;
45
46
47    }
48};