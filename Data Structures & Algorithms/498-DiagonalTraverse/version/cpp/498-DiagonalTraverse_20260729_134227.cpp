// Last updated: 29/07/2026, 13:42:27
1class Solution {
2public:
3    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
4        map<int, vector<int>>m;
5        for(int i=0;i<mat.size();i++){
6            for(int j=0;j<mat[i].size();j++){
7                int key = i+j;
8                m[key].push_back(mat[i][j]);
9            }
10        }
11        bool flag = false;
12        vector<int>res;
13        for(auto key : m){
14            vector<int> temp = key.second;
15            if(flag == false){
16                reverse(temp.begin(), temp.end());
17            }
18            res.insert(res.end(), temp.begin(), temp.end());
19            flag = !flag;
20        }
21
22        return res;  
23    }
24};