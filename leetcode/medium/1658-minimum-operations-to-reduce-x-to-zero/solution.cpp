class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = 0;

        for(int num : nums) total += num;

        int target = total - x;
        if(target < 0) return -1;

        int left = 0, sum = 0, maxlen = -1;
        for(int right = 0 ; right < n ; right++){
            sum += nums[right];

            while(sum > target){
                sum -= nums[left];
                left++;
            }
            if(sum == target){
                maxlen = max(maxlen, right - left + 1);
            }
        }

        return (maxlen == -1 ? -1 : n - maxlen);
    }
};