// Last updated: 03/08/2026, 16:37:18
1class Solution {
2public:
3    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
4        unordered_map<int, int>m;
5        for(int i=0;i<matrix.size();i++){
6        	for(int j=0;j<matrix[0].size();j++){
7        		int key = i-j;
8        		if(m.find(key) != m.end() && m[key] != matrix[i][j]){
9        			return false;
10        		}else{
11        			m[key] = matrix[i][j];
12        		}
13        	}
14        }
15        return true;
16    }
17};