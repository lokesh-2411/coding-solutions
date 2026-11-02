class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index = 0, count = 0;
        for (int i = 0; i < mat.size(); i++) {
            int ones = 0;
            for (int x : mat[i]) ones += x;   
            if (ones > count) { 
                count = ones;
                index = i;
            }
        }
        return {index, count};
    }
};