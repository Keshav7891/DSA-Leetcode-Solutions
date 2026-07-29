// Last updated: 29/07/2026, 13:23:42
1class Solution {
2public:
3    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
4        unordered_map<int, vector<int>>m;
5
6        //collect items and build a map with key (i-j)
7        for(int i=0;i<mat.size();i++){
8            for(int j=0;j<mat[i].size();j++){
9                int key = i-j;
10                m[key].push_back(mat[i][j]);
11            }
12        }
13
14        //sort items in map
15        for(auto key : m){
16            auto temp = key.second;
17            sort(temp.begin(), temp.end(), greater<int>());
18            m[key.first] = temp;
19        }
20
21        //re-fill the map with sorted items
22        for(int i=0;i<mat.size();i++){
23            for(int j=0;j<mat[i].size();j++){
24                int key = i-j;
25                int ele = m[key].back();
26                m[key].pop_back();
27                mat[i][j] = ele;
28            }
29        }
30
31        return mat;
32    }
33};
34