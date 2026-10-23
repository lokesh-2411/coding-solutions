class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int okay = -1;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            if(nums[i] != i){
                if(okay == -1) okay = nums[i];
                else okay &= nums[i];
            }
        }

        return (okay == -1 ? 0 : okay);
    }
};