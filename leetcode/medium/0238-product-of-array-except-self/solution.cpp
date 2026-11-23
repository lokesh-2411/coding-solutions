class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int Prod = 1;
        int n = nums.size();
        vector<int> shinyu(n, 1);

        for(int i = 0 ; i < n ; i++){
            shinyu[i] = Prod;
            Prod *= nums[i];
        }

        int Okay = 1;
        for(int i = n - 1 ; i >= 0 ; i--){
            shinyu[i] *= Okay;
            Okay *= nums[i];
        }

        return shinyu;
    }
};