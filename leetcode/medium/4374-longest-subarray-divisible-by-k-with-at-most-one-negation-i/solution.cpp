class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int best = 0;

        for(int i = 0 ; i < n ; i++){
            long long S = 0;
            unordered_set<int> shinyu;

            for(int j = i ; j < n ; j++){
                S += nums[j];

                int Okay = (int)((((2LL * nums[j]) % k) + k) % k);
                shinyu.insert(Okay);
                int r = (int)(((S % k) + k) % k);

                if(r == 0 || shinyu.count(r)) best = max(best, j - i + 1);
            }
        }
        return best;
    }
};