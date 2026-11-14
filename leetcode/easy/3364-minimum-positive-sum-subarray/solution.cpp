class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int Min = INT_MAX;

        for(int i = 0 ; i < n ; i++){
            int Sum = 0;
            for(int j = i ; j < n ; j++){
                int Len = j - i + 1;
                if(Len > r) break;
                Sum += nums[j];
                if(Len >= l && Sum > 0) Min = min(Min, Sum);
            }
        }
        
        return (Min == INT_MAX ? -1 : Min);
    }
};