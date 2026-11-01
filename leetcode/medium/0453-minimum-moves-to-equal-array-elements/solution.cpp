class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long minval = *min_element(nums.begin(), nums.end());
        long long moves = 0;

        for(int num : nums){
            moves += (num - minval);
        }

        return (int)moves;

    }
};