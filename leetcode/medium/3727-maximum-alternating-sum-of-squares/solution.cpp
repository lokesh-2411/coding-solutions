class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i] < 0) nums[i] = -nums[i];
        }

        sort(nums.begin(), nums.end());
        long long shinyu = 0;
        
        for(int i = 0 ; i < n / 2 ; i++) shinyu -= (long long)nums[i] * (long long)nums[i];

        for(int i = (n / 2) ; i < n ; i++) shinyu += (long long)nums[i] * (long long)nums[i];

        return shinyu;

    }
};