class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count = 0;
        int Max = *max_element(nums.begin(), nums.end());

        for(int x : nums) count += Max - x;

        return count;
    }
};