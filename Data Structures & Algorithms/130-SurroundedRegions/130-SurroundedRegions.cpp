// Last updated: 08/07/2026, 10:02:56
class Solution {
public:
    vector<int>dx = {-1, 0, 1, 0};
    vector<int>dy = {0, -1, 0, 1};

    void help(int i, int j, vector<vector<char>>&board, vector<vector<bool>>&visited){
        if(i<0 || i == board.size() || j<0 || j == board[0].size() || board[i][j] == 'X' || visited[i][j] == true){
            return;
        }

        visited[i][j] = true;
        board[i][j] = 'H';
        for(int k=0;k<4;k++){
            help(i + dx[k], j + dy[k], board, visited);
        }
    }

    void solve(vector<vector<char>>& board) {
        vector<vector<bool>>visited(board.size(), vector<bool>(board[0].size(), false));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if((i==0 || i == board.size()-1 || j==0 || j == board[0].size()-1) && board[i][j] == 'O'){
                    help(i,j,board,visited);;
                }
            }
        }

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] == 'H'){
                    board[i][j] = 'O';
                }else if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
};