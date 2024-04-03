class Solution {
public:

    bool working(vector<vector<char>>& board, int i, int j, int index, int n, int m, string& word) {
        if (index == word.length()) return true;
        if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] != word[index]) return false;
        
        char temp = board[i][j];
        board[i][j] = '$';

        bool top = working(board, i - 1, j, index + 1, n, m, word);
        bool right = working(board, i, j + 1, index + 1, n, m, word);
        bool bottom = working(board, i + 1, j, index + 1, n, m, word);
        bool left = working(board, i, j - 1, index + 1, n, m, word);
        board[i][j] = temp; // undo change
        return top || right || bottom || left;                          
    }

    bool exist(vector<vector<char>>& board, string& word) {
        int n = board.size();
        if (n == 0) return false; // Handling edge case of empty board
        int m = board[0].size();
        if (m == 0) return false; // Handling edge case of empty row

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0] && working(board, i, j, 0, n, m, word)) {
                    return true;
                }
            }
        }
        return false;
    }
};
