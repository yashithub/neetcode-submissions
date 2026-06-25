class Solution {
public:
    bool notvalid(vector<vector<char>>& board, int r, int c, int x){
        for(int i = 0; i < 9; i++){
            if ((board[r][i] - '0') == x && i != c) return false;
        }
        for(int i = 0; i < 9; i++){
            if ((board[i][c] - '0') == x && i != r) return false;
        }
        int startRow = r - r % 3, startCol = c - c % 3;
        for(int i = startRow; i < startRow + 3; i++){
            for(int j = startCol; j < startCol + 3; j++){
                if((board[i][j] - '0') == x && (i != r || j != c)) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if (board[i][j] == '.') continue;
                else {
                    if (!notvalid(board, i, j, board[i][j] - '0')) return false;
                }
            }
        }
        return true;
    }
};
