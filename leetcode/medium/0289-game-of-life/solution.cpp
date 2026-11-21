class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> copy = board;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                int count = 0;

                for(int di = -1 ; di <= 1 ; di++){
                    for(int dj = -1 ; dj <= 1 ; dj++){
                        if(di == 0 && dj == 0) continue;
                        int ni = i + di;
                        int nj = j + dj;
                        if(ni >= 0 && ni < m && nj >= 0 && nj < n) count += copy[ni][nj];
                    }
                }

                if(copy[i][j] == 1) board[i][j] = (count == 2 || count == 3) ? 1 : 0;
                else board[i][j] = (count == 3) ? 1 : 0;
            }
        }
    }
};