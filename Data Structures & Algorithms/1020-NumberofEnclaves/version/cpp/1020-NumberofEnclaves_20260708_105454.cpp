// Last updated: 08/07/2026, 10:54:54
1class Solution {
2public:
3
4    vector<int>dx = {-1, 0, 1, 0};
5    vector<int>dy = {0, -1, 0, 1};
6
7    void help(int i, int j, vector<vector<int>>&board, vector<vector<bool>>&visited){
8        if(i<0 || i == board.size() || j<0 || j == board[0].size() || board[i][j] != 1 || visited[i][j] == true){
9            return;
10        }
11
12        visited[i][j] = true;
13        board[i][j] = -1;
14        for(int k=0;k<4;k++){
15            help(i + dx[k], j + dy[k], board, visited);
16        }
17    }
18
19    int numEnclaves(vector<vector<int>>& board) {
20        int count = 0;
21        vector<vector<bool>>visited(board.size(), vector<bool>(board[0].size(), false));
22        for(int i=0;i<board.size();i++){
23            for(int j=0;j<board[0].size();j++){
24                if((i==0 || i == board.size()-1 || j==0 || j == board[0].size()-1) && board[i][j] == 1){
25                    help(i,j,board,visited);;
26                }
27            }
28        }
29
30        for(int i=0;i<board.size();i++){
31            for(int j=0;j<board[0].size();j++){
32                if(board[i][j] == -1){
33                    board[i][j] = 1;
34                }else if(board[i][j] == 1){
35                    count++;
36                }
37            }
38        }
39
40        return count;
41    }
42};