class Solution {
public:
        bool searchNext(vector<vector<char>> &board, string word, int row, int col, int index, int m, int n) {

        // base case
        if (index == word.length()){
            return true;
        }
            
        if (row < 0 || col < 0 || row == m || col == n || board[row][col] != word[index] or board[row][col] == '!'){
            return false;
        }
            
        char c = board[row][col];
        board[row][col] = '!';

        // top direction
        bool top = searchNext(board, word, row - 1, col, index + 1, m, n);

        // right direction
        bool right = searchNext(board, word, row, col + 1, index + 1, m, n);

        // bottom direction
        bool bottom = searchNext(board, word, row + 1, col, index + 1, m, n);

        // left direction
        bool left = searchNext(board, word, row, col - 1, index + 1, m, n);

        board[row][col] = c;

        return top || right || bottom || left;
    }
    public:
    bool exist(vector<vector<char>> board, string word) {

        int m = board.size();
        int n = board[0].size();

        int index = 0;

        // first char
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (board[i][j] == word[index]) {
                    if (searchNext(board, word, i, j, index, m, n)){
                        return true;
                    }
                        
                }
            }
        }

        return false;
    }
    
};