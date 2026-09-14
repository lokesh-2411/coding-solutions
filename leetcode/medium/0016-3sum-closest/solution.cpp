class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1, k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum > target){
                    ans.push_back((sum));
                    k--;
                }
                else if(sum < target){
                    ans.push_back(sum);
                    j++;
                }
                else{
                    ans.push_back(sum);
                    k--;
                    j++;

                    while(j < k && nums[j] == nums[j - 1]) j++;
                    while(j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }

        int okay = ans[0];
        int val = abs(target - ans[0]);
        for(int i = 1 ; i < ans.size() ; i++){
            if(abs(target - ans[i]) < val){
                val = abs(target - ans[i]);
                okay = ans[i];
            }
        }
        
        return okay;
    }
};