// Last updated: 08/07/2026, 09:58:23
1class Solution {
2public:
3    vector<int>dx = {-1, 0, 1, 0};
4    vector<int>dy = {0, -1, 0, 1};
5
6    void help(int i, int j, vector<vector<char>>&board, vector<vector<bool>>&visited){
7        if(i<0 || i == board.size() || j<0 || j == board[0].size() || board[i][j] == 'X' || visited[i][j] == true){
8            return;
9        }
10
11        visited[i][j] = true;
12        board[i][j] = 'H';
13        for(int k=0;k<4;k++){
14            help(i + dx[k], j + dy[k], board, visited);
15        }
16    }
17
18    void solve(vector<vector<char>>& board) {
19        vector<vector<bool>>visited(board.size(), vector<bool>(board[0].size(), false));
20        for(int i=0;i<board.size();i++){
21            for(int j=0;j<board[0].size();j++){
22                if((i==0 || i == board.size()-1 || j==0 || j == board[0].size()-1) && board[i][j] == 'O'){
23                    help(i,j,board,visited);;
24                }
25            }
26        }
27
28        for(int i=0;i<board.size();i++){
29            for(int j=0;j<board[0].size();j++){
30                if(board[i][j] == 'H'){
31                    board[i][j] = 'O';
32                }else if(board[i][j] == 'O'){
33                    board[i][j] = 'X';
34                }
35            }
36        }
37    }
38};