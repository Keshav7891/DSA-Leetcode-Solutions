// Last updated: 03/08/2026, 11:38:01
1class Solution {
2public:
3    int help(vector<vector<int>>& img1, vector<vector<int>>& img2, int colShift, int rowShift){
4      int overlaps = 0;
5      int n = img1.size();
6      int m = img1[0].size();
7      for(int i=0;i<n;i++){
8        for(int j=0;j<m;j++){
9          int newRow = i + rowShift;
10          int newCol = j + colShift;
11          if(newRow < 0 || newCol < 0 || newRow >= n || newCol >= m){
12            continue;
13          }
14          if(img1[i][j] == 1 && img2[newRow][newCol] == 1){
15            overlaps++;
16          }
17        }
18      }
19      return overlaps;
20    }
21    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
22        int res = 0;
23        int n = img1.size();
24        int m = img1[0].size();
25        for(int colShift = -m + 1; colShift <= m - 1; colShift++){
26          for(int rowShift = -n + 1; rowShift <= n - 1; rowShift++){
27            int overlaps = help(img1, img2, colShift, rowShift);
28            res = max(res, overlaps);
29          }
30        }
31        return res;
32    }
33};