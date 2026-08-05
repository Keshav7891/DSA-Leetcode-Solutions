// Last updated: 05/08/2026, 08:53:18
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        unordered_map<string, bool>m;
5
6        for(int i=0;i<board.size();i++){
7            for(int j=0;j<board[0].size();j++){
8
9                if (board[i][j] == '.') continue;
10
11                string rowKey = string(1, board[i][j]) + "_ROW_" + to_string(i);
12                string colKey = string(1, board[i][j]) + "_COL_" + to_string(j);
13                string boxKey = string(1, board[i][j]) + "_BOX_" + to_string(i / 3) + "_" + to_string(j / 3);
14
15                if(m.find(rowKey) != m.end() || m.find(colKey) != m.end() || m.find(boxKey) != m.end()){
16                    return false;
17                }else{
18                    m[rowKey] = true;
19                    m[colKey] = true;
20                    m[boxKey] = true;
21                }
22            }
23        }
24
25        return true;
26    }
27};