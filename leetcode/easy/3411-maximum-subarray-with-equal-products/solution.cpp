class Solution {
public:
    int maxLength(vector<int>& nums) {
        int N = nums.size();
        int Max = 1;

        for (int i = 0; i < N; i++) {
            long long Prod = 1;
            long long Gcd = 0;
            long long Lcm = 1;

            for (int j = i; j < N; j++) {
                Prod *= nums[j];
                Gcd = gcd(Gcd, (long long)nums[j]);
                Lcm = lcm(Lcm, (long long)nums[j]);

                if (Prod == Gcd * Lcm) {
                    Max = max(Max, j - i + 1);
                }

                if (Prod > 25200) break;
            }
        }

        return Max;
    }
};