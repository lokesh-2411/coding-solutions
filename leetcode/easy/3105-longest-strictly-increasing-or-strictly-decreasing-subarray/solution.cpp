class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int Max = 1;
        int Count = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i - 1] < nums[i]){
                Count++;
                Max = max(Max, Count);
            }
            else{
                Count = 1;
            }
        }

        Count = 1;

        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] < nums[i - 1]){
                Count++;
                Max = max(Max, Count);
            }
            else{
                Count = 1;
            }
        }

        return Max;
    }
};