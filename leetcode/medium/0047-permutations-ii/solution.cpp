class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        backtrack(nums, 0, ans);

        return vector<vector<int>>(ans.begin(), ans.end());
    }

    void backtrack(vector<int>& nums, int start, set<vector<int>>& ans){
        if(start == nums.size()){
            ans.insert(nums);
            return;
        }
        for(int i = start ; i < nums.size() ; i++){
            swap(nums[start], nums[i]);
            backtrack(nums, start + 1, ans);
            swap(nums[start], nums[i]);
        }
    }
};