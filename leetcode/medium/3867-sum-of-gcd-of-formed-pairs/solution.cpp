class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> g;
        g.reserve(n);
        int mx = nums[0];

        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            g.push_back(__gcd(mx, nums[i]));
        }

        sort(g.begin(), g.end());

        int l = 0, r = n - 1;
        long long sum = 0;
        while (l < r) {
            sum += __gcd(g[l], g[r]);
            l++;
            r--;
        }
        return sum;
    }
};