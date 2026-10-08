class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        vector<int> arr1(nums.begin() + (n - k), nums.end());
        arr1.insert(arr1.end(), nums.begin(), nums.begin() + (n - k));

        for (int i = 0; i < n; i++) {
            nums[i] = arr1[i];
        }
    }
};