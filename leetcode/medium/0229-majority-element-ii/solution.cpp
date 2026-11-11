class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int okay = n / 3;
        unordered_map<int, int> freq;
        
        for(int num : nums){
            freq[num]++;
        }
        vector<int> result;
        for(auto &p : freq){
            if(p.second > okay){
                result.push_back(p.first);
            }
        }
        return result;
    }
};