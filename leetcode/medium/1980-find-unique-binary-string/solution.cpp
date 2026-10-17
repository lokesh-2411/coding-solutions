class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string res;
        res.reserve(n);
        for(int i = 0 ; i < n ; i++){
            res.push_back(nums[i][i] == '0' ? '1' : '0');
        }
        return res;
    }
};