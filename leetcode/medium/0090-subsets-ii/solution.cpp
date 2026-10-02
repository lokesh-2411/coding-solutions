class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        int n = nums.size();
        int total = 1 << n;

        for(int mask = 0 ; mask < total ; mask++){
            vector<int> okay;
            for(int i = 0 ; i < n ; i++){
                if(mask & (1 << i)){
                    okay.push_back(nums[i]);
                }
            }
            result.insert(okay);
        }

        return vector<vector<int>>(result.begin(), result.end());
    }
};