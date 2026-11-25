class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> Result;
        Result.reserve(m * n);

        for(int i = 0 ; i < m + n - 1 ; i++){
            vector<int> Shinyu;
            int r = max(0, i - n + 1);
            int c = i - r;
            while(r < m && c >= 0){
                Shinyu.push_back(mat[r][c]);
                ++r;
                --c;
            }

            if(i % 2 == 0) reverse(Shinyu.begin(), Shinyu.end());
            Result.insert(Result.end(), Shinyu.begin(), Shinyu.end());
        }

        return Result;
    }
};