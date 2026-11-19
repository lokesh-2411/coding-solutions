class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int Okay = nums[2], Hi = nums[n - 3];
        return min({nums[n - 1] - Okay, Hi - nums[0], nums[n - 2] - nums[1]});
    }
};