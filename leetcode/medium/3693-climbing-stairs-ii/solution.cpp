class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n, INT_MAX);
        
        dp[0] = costs[0] + 1;
        if(n > 1) dp[1] = costs[1] + 4;
        if(n > 2) dp[2] = costs[2] + 9;

        for(int i = 1 ; i < n ; i++){
            dp[i] = min(dp[i], dp[i - 1] + costs[i] + 1);
            if(i >= 2) dp[i] = min(dp[i], dp[i - 2] + costs[i] + 4);
            if(i >= 3) dp[i] = min(dp[i], dp[i - 3] + costs[i] + 9);
        }

        return dp[n - 1];
    }
};