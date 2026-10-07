class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int count = 0;

        for (int right = 0; right < n; right++) {
            long long sum = 0;
            for (int left = right; left >= 0; left--) {
                sum += nums[left];

                long long v = sum < 0 ? -sum : sum; 
                int last = v % 10;
                if (last != x) continue;

                while (v >= 10) v /= 10;
                if (v == x) count++;
            }
        }
        return count;
    }
};