class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> S(nums.begin(), nums.end());
        for (int i : S) {
            if (count(nums.begin(), nums.end(), i) == 1) {
                return i;
            }
        }
        return -1;
    }
};