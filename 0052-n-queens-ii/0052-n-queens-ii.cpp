class Solution {
public:
bool isSafe(vector<string> board, int n, int row, int col) {
        int duprow = row;
        int dupcol = col;

        while(row>=0 && col >= 0) {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }

        row = duprow;
        col = dupcol;

        while(col >= 0) {
            if(board[row][col] == 'Q') return false;
            col--;
        }

        row = duprow;
        col = dupcol;

        while(row<n && col >= 0) {
            if(board[row][col] == 'Q') return false;
            col--;
            row++;
        }

        return true;
    }

   void solve(vector<vector<string>> &ans, vector<string> &board, int col, int n) {
        if(col == n) {
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++) {
            if(isSafe(board, n, row, col)) {
                board[row][col] = 'Q';
                solve(ans, board, col+1, n);
                board[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
          vector<string> board;
        
        for(int i=0; i<n; i++) {
            string s(n, '.');
            board.push_back(s);
        }
        vector<vector<string>> ans;
        solve(ans, board, 0, n);
        return ans.size();
    }
};