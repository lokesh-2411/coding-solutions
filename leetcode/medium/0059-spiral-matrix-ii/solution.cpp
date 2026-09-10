class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0;
        int bot = n - 1;
        int left = 0;
        int right = n - 1;
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int val = 1;

        while(left <= right && top <= bot){
            
            for(int i = left ; i <= right ; i++){
                matrix[top][i] = val;
                val++;
            }
            top++;

            for(int i = top ; i <= bot ; i++){
                matrix[i][right] = val;
                val++;
            }
            right--;

            for(int i = right ; i >= left ; i--){
                matrix[bot][i] = val;
                val++;
            }
            bot--;

            for(int i = bot ; i >= top ; i--){
                matrix[i][left] = val;
                val++;
            }
            left++;

        }
        return matrix; 
    }
};